#include<bits/stdc++.h>

using namespace std;

int main(){     
        int n=0;
        cin>>n;
        if(n==0) cout<<1;
        else {
                if(n%4==1) cout<<8;
                if(n%4==2) cout<<4;
                if(n%4==3) cout<<2;
                if(n%4==0) cout<<6;
        }

        return 0;
}