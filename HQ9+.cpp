#include<bits/stdc++.h>

using namespace std;

int main(){
    string s;
    cin>>s;
    int count=0;
    for(int i=0;i<s.length();i++){
        if(s[i] == 'H' || s[i] == 'Q' || s[i] == '9'  ) {
            count++;
            break;
        }
    }
    
    if(count==0) cout<<"NO";
    else cout<<"YES";
    return 0;
}