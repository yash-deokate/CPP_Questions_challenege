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

////////////////////////////////
//////////basic struct//////////
struct node{
  int data;
  struct node* lft;
  struct node* rt;

  node(int data){
    this->data=data;
    rt=lft=NULL;
  }
};
////////////////////////////////
////checking full of bt/////////
bool isfullbinary(struct node* root){
  if(root==NULL)
    return true;
  if(root->lft==NULL && root->rt==NULL)
    return true;
  if(root->lft && root->rt){
    return (isfullbinary(root->lft)&&isfullbinary(root->rt));
  } 
  return false;
}
///////////////////////////////
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
  
 struct node* a=new node(11);
 a->rt=new node(12);
 a->lft=new node(13);
 a->rt->rt=new node(14);
 // a->rt->lft=new node(15);

 cout<<isfullbinary(a);
///////////// UNDER CONSTRUCTION ////////////////



///////////// UNDER CONSTRUCTION ////////////////



  
}

