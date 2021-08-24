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
vector<ll> v;
ll n;
cin>>n;
for(int i=0;i<n;i++){
  int x;
  cin>>x;
  v.push_back(x);

}
stack<char> q;

///////////// UNDER CONSTRUCTION ////////////////

/*
nesting depth
() ->1
(()) ->2
(()()) ->2


"AIM":  find longest nesting depth (done)
        find 1st position with this nesting depth 
        find length of max sequence with this nesting depth (done)
        find first poisition where this max sequence  occur (done)
 
obsrvtns:
require pattern 12,1122, 112122.
cant add 2 without stack having atleast one 1
after adding 2 pop first added 1 so we will use queue;


*/

///////////// UNDER CONSTRUCTION ////////////////
ll ans=0;
ll tans=0;
ll maxsiz=0;
ll fstnest;
ll lngsq=0;
ll pos=0;
ll sqpos=0;
for(ll i=0;i<v.size();i++){
  if(v[i]==1){
    if(q.size()==0){
      pos=i+1;
    }
    q.push(1);
    ll siz=q.size();
    if(maxsiz<siz){
      maxsiz=siz;
      fstnest=i+1;
    }
  }
  else if(v[i]==2){
    if(q.size()!=0){
      q.pop();
      tans=i+1;
    }
    else
      break;
    if(q.size()==0){
      if(lngsq<(tans-ans)){
        lngsq=tans-ans;
        sqpos=pos;
      }
      ans=tans;
      pos=0;
    }
  }
}
cout<<maxsiz<<" ";
cout<<fstnest<<" ";
cout<<lngsq<<" ";
cout<<sqpos<<endl;

}

