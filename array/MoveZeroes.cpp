#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;

    int nums[100000];
    for(int i = 0; i < n; i++){
        cin >> nums[i];
    }
   for( int j = 0; j < n; j++){
      for(int i = 0; i < n - 1; i++){
        if( nums[i] ==  0){
            int temp = nums[i];
            nums[i] = nums[i +1];
            nums[i + 1] = temp;

          }
      }
    }
    
    for( int i = 0; i < n; i++){
        cout << nums[i] << '\n';
    }
}