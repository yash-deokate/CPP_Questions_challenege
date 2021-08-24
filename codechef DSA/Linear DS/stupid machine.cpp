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
vector<ll> s;
cin>>n;
for(ll i=0;i<n;i++){
  ll x;
  cin>>x;
  s.push_back(x);
}

///////////// UNDER CONSTRUCTION ////////////////

/*


n boxes 1->n
boxes empty
using mchine put token in them
s->capacity of boxes
oprtn:
  1.choose l i.e 1->n
  2.from 1->l boxes put one token

"AIM": to find max no. of token can be put in all boxes.
Rule: cant exed limit and floow oprtns

obs-->
if i want to add token in ith box i have to add in all 1->i boxes
10^6 so "nlogn"

min value 
*/

///////////// UNDER CONSTRUCTION ////////////////
ll mn=min_element(s.begin(),s.end())-s.begin()+1;
// cout<<mn<<endl;
ll ans=0;
for(ll i=0;i<mn;i++){
  ans+=s[i];
}
ll rem=(n-mn)*s[mn-1];
ans+=rem;
cout<<ans<<endl;


}

