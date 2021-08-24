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
string s;
cin>>s;
stack<char> q;

///////////// UNDER CONSTRUCTION ////////////////

/*
<<>> yes
<><>  yes
><>< no

"AIM": find longest valid prefix

obsrvtns:
cant add > without stack having atleast one <
after adding > pop first added < so we will use queue;

*/

///////////// UNDER CONSTRUCTION ////////////////
ll ans=0;
ll tans=0;
for(ll i=0;i<s.length();i++){
  if(s[i]=='<')
    q.push('<');
  else if(s[i]=='>'){
    if(q.size()!=0){
      q.pop();
      tans=i+1;
    }
    else
      break;
    if(q.size()==0)
      ans=tans;
  }
}
cout<<ans<<endl;


}

