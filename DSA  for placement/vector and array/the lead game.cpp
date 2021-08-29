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
    // cin>>T;
    while(T--)
    {
      solve();
    }
    return 0;
}



void solve(){
  ll n;
  cin>>n;
  vector<int> v1,v2;
  for(ll i=0;i<n;i++){
    ll t1,t2;
    cin>>t1>>t2;
    v1.push_back(t1);
    v2.push_back(t2);
  }
  ll m=INT_MIN,ans;
  ll s1=0,s2=0;
  for(ll i=0;i<n;i++){
    s1+=v1[i];
    s2+=v2[i];
    if(s2>s1 && m<=s2-s1){
      m=s2-s1;
      ans=2;
    }
    else if(s2<s1 && m<=s1-s2){
      m=s1-s2;
      ans=1;
    }
  }
  cout<<ans<<" "<<m;
///////////// UNDER CONSTRUCTION ////////////////



///////////// UNDER CONSTRUCTION ////////////////



  
}

