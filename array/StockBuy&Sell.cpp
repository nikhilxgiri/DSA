#include<iostream>
using namespace std;
int main(){
    int n ,lowest ,highest;
    cout << "Enter n: ";
    cin >> n;
    int prices[100000];
    for(int i = 0; i < n; i++){
        cin >> prices[i];
    }

    int maxprofit = 0;
    int minprices = prices[0];

    for(int i = 0; i < n; i++){
        if(minprices > prices[i]){
            minprices = prices[i];
        }
        else{
            int profit = prices[i] - minprices;
            if(profit > maxprofit){
                maxprofit = profit;
            }
        }
    }

    cout << maxprofit;
    
 }