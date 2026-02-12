#include <iostream>
#include <vector>
using namespace std;

int main(){

    int n;
    vector<int> row1, row2;
    int ans=0;
    int a;

    cin >> n;

    for (int i = 0; i < n; i++){
        cin >> a;
        row1.push_back(a);
        if (a == 1){
            ans+=3;
        }
    }

    for (int i = 0; i < n; i++){
        cin >> a;
        row2.push_back(a);
        if (a == 1){
            ans+=3;
        }    
    }

    for (int i = 0; i < n; i++){
        if (row1[i] == 1 && i > 0 && i < n){
            if (row1[i-1] == 1){
                ans--;
            }
            if (row1[i+1] == 1){
                ans--;
            }
            if(row2[i] == 1){
                ans--;
            }
        }
    }

    for (int i = 0; i < n; i++){
        if (row2[i] == 1 && i > 0 && i < n){
            if (row2[i-1] == 1){
                ans--;
            }
            if (row2[i+1] == 1){
                ans--;
            }
            if(row1[i] == 1){
                ans--;
            }
        }
    }

    cout << ans;
}