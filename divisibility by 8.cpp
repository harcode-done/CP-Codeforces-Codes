#include<bits/stdc++.h>

using namespace std;

int main(){
    string s;
    cin>>s;
    int n = s.size();
    bool db8=false;
    
    for(int i=0;i<n;i++){
        if(s[i]=='0' || s[i]=='8' ) {
            cout<<"YES\n";
            cout<<s[i];
            return 0;

        }
    }
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if((10*(s[i]-'0') + (s[j]-'0'))%8==0) {
                cout<<"YES\n"<<s[i]<<s[j];
                return 0;
            }

        }
    }
    for(int i=0;i<n-2;i++){
        for(int j=i+1;j<n-1;j++){
            for(int k=j+1;k<n;k++){
                //cout<<i<<' ' <<j<<' ' <<k<<' ';
            if((10*(s[j]-'0') + (s[k]-'0') + 100*(s[i]-'0'))%8==0) {
                cout<<"YES\n"<<s[i]<<s[j]<<s[k];
                return 0;
            }
            }

        }
    }
    cout<<"NO";

    return 0;
}