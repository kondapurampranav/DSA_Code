//Q. find the Pivot Index

/*The pivot index is the index where the sum of all the numbers strictly to the
left of the index is equal to the sum of all the numbers strictly to the index's right.*/

#include <iostream>
#include <vector>
using namespace std;

int pivotIndex(vector<int>& nums) {
        int sum = 0, Lsum = 0, Rsum;

        for(int x : nums){
            sum += x;
        }

        for(int i = 0; i < nums.size(); i++){
            Rsum = sum - Lsum - nums[i];

            if(Lsum == Rsum){
                return i;
            }
            Lsum += nums[i];
        }
        return -1;
    }

int main(){
    vector<int> arr = {2, 1, -1};
    
    int index = pivotIndex(arr);
    cout << index;
    
    return 0;
}