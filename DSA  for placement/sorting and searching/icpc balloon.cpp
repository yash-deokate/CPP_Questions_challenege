/***********************************************
Code Author Details
Written By: Yash.S.Deokate
@b0ba_yaga
***********************************************/

/***********************************************************************************
  _______  ______   _______  ________       __  __  ________  _______   ________      
/_______/\/_____/\/_______/\/_______/\     /_/\/_/\/_______/\/______/\ /_______/\     
\::: _  \ \:::_ \ \::: _  \ \::: _  \ \    \ \ \ \ \::: _  \ \::::__\/_\::: _  \ \    
 \::(_)  \/\:\ \ \ \::(_)  \/\::(_)  \ \    \:\_\ \ \::(_)  \ \:\ /____/\::(_)  \ \   
  \::  _  \ \:\ \ \ \::  _  \ \:: __  \ \    \::::_\/\:: __  \ \:\\_  _\/\:: __  \ \  
   \::(_)  \ \:\_\ \ \::(_)  \ \:.\ \  \ \     \::\ \ \:.\ \  \ \:\_\ \ \ \:.\ \  \ \ 
    \_______\/\_____\/\_______\/\__\/\__\/      \__\/  \__\/\__\/\_____\/  \__\/\__\/ 
                                                                                     
************************************************************************************/







#include<bits/stdc++.h>
using namespace std;

//datatypes
typedef long long ll;
typedef long long ll;
typedef long double ld;

//formalities
#define quikio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);


void solve(void);
int main()
{
   
    quikio;
    ll T=1;
    cin>>T;
    while(T--)
    {
      solve();
    }
    return 0;
}



void solve(){
  ll n;
  vector<ll> v;
  cin>>n; 
  for(ll i=0;i<n;i++){
    ll t;
    cin>>t;
    v.push_back(t);
  }
  ll cnt=7;
  ll ans=0;
  for(ll i=0;i<n;i++){
    if(v[i]>=1 && v[i]<=7){
      cnt-=1;
     
    }
    ans++;
    if(cnt==0)
      break; 
  }
  cout<<ans<<endl;
///////////// UNDER CONSTRUCTION ////////////////



///////////// UNDER CONSTRUCTION ////////////////



  
}

