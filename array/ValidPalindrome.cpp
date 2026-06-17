#include<iostream>
#include<unordered_map>
using namespace std;
int main(){
   string s;
   cin >> s;

   if(s == ""){
    cout << "True";
   }
        for( int i = 0; i < s.length() / 2; i++){
            if(s[i] != s[s.length() - 1 - i]){
                cout << "False";
                return 0;
            }
        }
        cout << "true";
}