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

int pri(char c){
  if(c=='^')
    return 3;
  else if(c=='*' || c=='/')
    return 2;
  else if(c=='+' || c=='-')
    return 1;
  else return -1;
}

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
cin>>n;
string v;
cin>>v;
///////////// UNDER CONSTRUCTION ////////////////

/*
infix ((A+B)*D)^(E-F)
postfix AB+D*EF-^

Aim: infix to postfix

obsrvtns:
each operator has priority
3 stack .var.ops.bracs. (Changed to 1 stack || printed var straight up)
highpriority last print.
if low pri is on top of high pri-> pop whole var queue .(alredy printed)
                                ->pop op stack till next op is low pri.
                                ->push new op
if brac stack empty time-> pop whole var queue . (alredy printed)
                        ->pop op stack till next op is opn brac.                                


*/

///////////// UNDER CONSTRUCTION ////////////////
stack<char> s;
string str="";
for(int i=0;i<v.length();i++){
  if(v[i]>='A' && v[i]<='Z')
    str+=v[i];
  else if(v[i]=='(')
    s.push('(');
  else if(v[i]==')'){
    while(s.top()!='('){
      str+=s.top();
      s.pop();
    }
    s.pop();
  }
  else{
     while(!s.empty() && pri(v[i])<=pri(s.top())){
      str+=s.top();
      s.pop();
     }
    s.push(v[i]);
  }
  // // else
  //   s.push(v[i]);
}
while(!s.empty()){
      str+=s.top();
      s.pop();
}
cout<<str<<endl;

}

