//SOLUTION FOR FINDING DUPLICATE IN ARRAY
#include <iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n, t = 0;
    cout << "Enter the no. of elements n: ";
    cin >> n;
    int nums[100000];
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }
    sort(nums, nums + n);
    for (int i = 0; i < n; i++)
    {
        if (nums[i] == nums[i + 1])
            cout << "true";
    }
    cout << "False";
}
