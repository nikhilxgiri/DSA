#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> nums;
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    for( int i = 0; i < n; i++){
        int x;
        cin >> x;
        nums.push_back(x);
    }

    int target;
    cout << "Enter the element that is needed to be found: ";
    cin >> target;

    for( int i = 0; i < n; i++){
            if(target == nums[i]){
                cout <<  i;
            }
        }
        return -1;
}