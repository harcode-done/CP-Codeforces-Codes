#include<bits/stdc++.h>

#define ll long long int
#define tia(a,n) for(int i=0;i<n;i++){cin>>a[i];}
#define atv(v,e) v.push_back(e);
#define ats(s,e) s.insert(e);
#define yes cout<<"YES\n";
#define no cout<<"NO\n";


using namespace std;


ll longmin(ll a, ll b){
    if(a<b) return a;
    else return b;
}
ll longmax(ll a, ll b){
    if(a>b) return a;
    else return b;
}



int main(){
    int t=0;
    cin>>t;
    while(t--){
        int n=0;
        cin>>n;
        int arr[n];
        tia(arr,n)

        int max=arr[0];
        for(int i=2;i<n;i+=2){
            if(arr[i]>max) max=arr[i];
        }

        cout<<max<<endl;

        
        
    }

    return 0;
}