// given an array, we have to return the running sum of nums

#include <iostream>
#include <vector>
using namespace std;

vector <int> runningSum(vector<int>& nums){
    vector<int> vec(nums.size());
        vec[0] = nums[0];

        for(int i=1;i<nums.size();i++){
            vec[i] = vec[i-1] + nums[i];
        }

        return vec;
}

// space efficient
vector <int> runningSum2(vector<int>& nums){

        for(int i=1;i<nums.size();i++){
            nums[i] += nums[i-1];
        }

        return nums;
}

int main(){
    vector<int> nums = {1, 2, 3, 4, 5};

    vector<int> arraySum = runningSum(nums);
    vector<int> arraySum2 = runningSum2(nums);

    for(int x : arraySum){
        cout << x << " ";
    }
    cout << endl;
    for(int x : arraySum2){
        cout << x << " ";
    }
}