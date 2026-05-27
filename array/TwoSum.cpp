#include<iostream>
using namespace std;
int main()
{
    int n, target;
    cout << "Enter the size: ";
    cin >> n;
    cout << "Enter the target: ";
    cin >> target;

    int nums[10000];
    cout << "Enter the values of elements: ";
    for( int i = 0;  i < n; i ++ ){
        cin >> nums[i];
    }

    for(int i = 0; i < n; i ++)
    {
        for(int j = i + 1; j < n ; j ++)
        {
            if (nums[i] + nums[j] == target){
                cout << "[" << i << "," << n-j << "]";
                return 0;
            }
        }
    }
    cout << "no pair found!!";
    return 0;
}