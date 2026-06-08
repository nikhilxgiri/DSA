#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter n: ";
    cin >> n;
    int nums[100000], subarray[100000];

    for(int i = 0; i < n; i++){
        cin >> nums[i];
    }
    int maxsum = nums[0], currentsum = nums[0];
        for(int i = 1; i < nums.size(); i++){
            if(nums[i] > currentsum + nums[i]){
                currentsum = nums[i];
            }
            else{
                currentsum = currentsum + nums[i];
            }
            if(currentsum > maxsum){
                maxsum = currentsum;
            }
    }

    return maxsum;
    }
