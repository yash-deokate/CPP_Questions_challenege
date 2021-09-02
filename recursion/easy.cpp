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
////////////////////
/////n natural//////
void prnt(int n){

  if(n==0)
    return;
  prnt(n-1);
  cout<<n<<endl;
  
}
////////////////////////
//////sum of n/////////
int sum(int n){

  if(n==0)
    return 1;
  return n*sum(n-1);
}
/////////////////////////
//////fibo///////////////
void fib(int a,int b,int n){

    if(n==0)
      return;
    if(a==0 && b==1)
    cout<<a<<" "<<b<<" ";
    cout<<a+b<<" ";
    int t=a;
    a=b;
    b=t+b;
    fib(a,b,n-1);
}
/////////////////////////
//////power//////////////
int powern(int x,int n){
  if(n==0)
    return 1;
  if(n==1)
    return x;
  return x*powern(x,n-1);
}
/////////////////////////
//////logn ht stack//////
int powernlogn(int x,int n){
  if(n==0)
    return 1;
  if(n==1)
    return x;
  if(n%2==0)
    return powernlogn(x,n/2)*powernlogn(x,n/2);
  else
    return x*powernlogn(x,n/2)*powernlogn(x,n/2);
}
/////////////////////////
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
  
  cout<<powernlogn(2,0);
///////////// UNDER CONSTRUCTION ////////////////



///////////// UNDER CONSTRUCTION ////////////////



  
}

