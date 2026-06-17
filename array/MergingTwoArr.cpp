#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int m ,n ;
    cin >> m >> n;

    int nums1[100000], nums2[100000], nums[100000];
    cout << "Enter the elements for nums1: ";
    for(int i = 0; i < m;i++){
        cin >> nums1[i];
    }

    cout << "Enter the elements for nums2: ";
    for(int i = 0; i < n;i++){
        cin >> nums2[i]; 
    }


    for( int i = 0; i < n + m; i++){
        if(i < n){
        nums[i] = nums1[i];
        }
        if(i >= m ){
        nums[i] = nums2[i - m];
        }
    }
    
    sort(nums , nums + (n + m));

    for(int i = 0; i < n + m; i++)
    {
        cout << nums[i];
    }
}