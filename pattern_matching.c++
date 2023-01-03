#include<bits/stdc++.h>
using namespace std;
bool isMatching(string s,string p){
    int n = s.length();
    int m = p.length();
    for(int i = 0; i<=(n-m); i++){
        bool is_found = true;
        for(int j = 0; j <m;j++){
            if(s[i+j] != p[j]){
                is_found = false;
                break;
            }
        }
        if(is_found == true)
        return true;
    }
    return false;
}
int main(){
    string  s,p;
    cin>>s;
    cin>>p;
    cout<< isMatching(s,p)<< endl;
    return 0;
}