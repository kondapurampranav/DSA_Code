// Q: to fing the first largest element in an array

#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> arr = {3, 6, 1, 8, 3, 9, 5};
    int max = arr[0];

    for(int x : arr){
        if(x > max){
            max = x;
        }
    }
    cout << max;

    return 0;
}