#include <iostream>
#include <vector>
#include <cmath>
#include <climits>
using namespace std;

int main(){
    int n;
    cin >> n;

    vector<int> image, ans;

    for (int i = 0; i < n; i++){
        int a;
        cin >> a;
        image.push_back(a);
    }

    for (int i = 0; i < n; i++){
        vector<int> compare;
        int answer = INT_MAX;
        for (int j = 0; j < n-i; j++){
            int sum = 0;
            for (int k = 0; k < (i+1)/2; k++){

                sum += abs(image[j+k] - image[j+i-k]);

            }
            compare.push_back(sum);
        }
        for (int m = 0; m < compare.size(); m++){
            answer = min(answer, compare[m]);
        }
        ans.push_back(answer);
    }

    for (int i = 0; i < n; i++){
        cout << ans[i];
        cout << " ";
    }
}