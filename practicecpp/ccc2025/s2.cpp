#include <iostream>
#include <vector>
using namespace std;

int main(){

    string rle;
    int target;
    int sum = 0;
    cin >> rle;
    cin >> target;


    vector<char> letters;
    vector<int> numbers;

    for (int i = 0; i < rle.length(); i++){
        if (isalpha(rle[i])){
            letters.push_back(rle[i]);
        }
        else{

            string n;
            while (i < rle.length() && isdigit(rle[i])){
                n.push_back(rle[i]);
                i++;
            }
            int a = stoi(n);
            numbers.push_back(a);
            sum += a;
            i--;
        }
    }
    
    int x = target%sum;
    int y = 0;
    for (int i = 0; i < numbers.size(); i++){
        y += numbers[i];
        if (y > x){
            cout << letters[i];
            break;
        }
    }
}