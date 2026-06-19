#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
int main(){
    string s;
    cin >> s;

    int left = 0, maxlen = 0, length = 0;
       unordered_map<char,int> mp;
        for( int i = 0; i < s.length(); i++){
            if(mp.count(s[i]) && mp[s[i]] >= left){
                left = mp[s[i]] + 1;
            }
            mp[s[i]] = i;
            length = i - left + 1;
             maxlen = max(maxlen,length);
       }
       cout << maxlen;
}