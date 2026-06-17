#include<iostream>
#include<unordered_map>
using namespace std;
int main(){
    string s, t;
    cin >> s;
    cin >> t;
    
    if( s.length() != t.length()){
        cout << "False";
        return 0;
    }

    unordered_map<char, int> freq;
    for(auto c: s){
        freq[c]++;
    }
    for(auto c : t){
        freq[c]--;
    }
    
    for( auto p : freq){
            if(p.second != 0){
                cout << "False";
                return 0;
            }
    }
    cout << "True";

}