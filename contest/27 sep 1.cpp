/*
        Author :: Hvanman2code

*/


#include<bits/stdc++.h>

using namespace std;
 
#define  endl            '\n'
#define  ll              long long int
#define  pi              pair<int,int>
#define  pl              pair<ll,ll>
#define  f               first
#define  s               second
#define  vi              vector<int>
#define  vl              vector<ll>
#define  vvi             vector<vi>
#define  vpi             vector<pi>
#define  si              stack<int>
#define  qi              queue<int>
#define  pqd             priority_queue<int>
#define  pqa             priority_queue<int,vi,greater<int>>
#define  mi              map<int,int>
#define  pb              push_back
#define  l(a)            long long a;
#define  s(a)            string a;
#define  fl(i,in,n)      for(ll i=in;i<n;i++)
#define  fr(i,n,in)      for(ll i=n-1;i>=in;i--)
#define  in(arr)         fl(i,0,arr.size()) cin>>arr[i]
#define  out(arr)        fl(i,0,arr.size()) cout<<arr[i]<<" "
#define  srt(arr)        sort(arr.begin(),arr.end())
#define  fast            ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define  ats(s,e)        s.insert(e);
#define  yes             cout<<"YES\n";
#define  no              cout<<"NO\n";

 
const int M=1000000007;
 


ll lmx(ll a,ll b){
    return a>b ?  a :  b;
    
}

ll lmn(ll a,ll b){
    return (a<b) ?  a : b ;
}

ll mll(int a,int b){
    return a*1LL*b;
}



int main(){

    fast;


    int t=0;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vl arr(n);
        in(arr);
        ll maxe=*max_element(arr.begin(),arr.end());
        ll sume=accumulate(arr.begin(),arr.end(),0);
        int mxd=0;

            for(int i=0;i<=k;i++){
                
                    ll t=sume+=k;
                    ll s=maxe+=i;
                    if(t/s > sume/maxe) mxd=lmx(mxd,t/s);

                                                
            }
        maxe=*max_element(arr.begin(),arr.end());
        sume=accumulate(arr.begin(),arr.end(),0);
        
        if(sume%maxe==0) mxd=lmx(mxd,sume/maxe);
        else {
            
            
                if (maxe*((sume/maxe) + 1)>sume+k) mxd=1;
            else mxd=lmx(mxd,(sume/maxe) + 1);
            }
        
        cout<<mxd<<endl;
        
        
    }

    return 0;
}