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
    ll T=1, n, i;

    cin>>T;
    while(T--)
    {
		 solve();
    }
    return 0;
}

void solve(){
	
	ll n;
	string s;
	cin>>n>>s;
	bool a=true;
	ll acurr=0,bcurr=0,arem=n,brem=n;
	ll ans=1;
	for(ll i=0;i<s.length();i++){
		if(a){
			a=false;
			if(s[i]=='1')
				acurr++;
			arem=arem-1;
			
		}
		else if(!a){
			a=true;
			if(s[i]=='1')
				bcurr++;
			brem=brem-1;
			
		}
		if(arem+acurr<bcurr){
				break;
			}
		if(brem+bcurr<acurr){
				break;
			}
		ans++;

	}
	if(ans>2*n)
		ans=2*n;
	// cout<<"a "<<acurr<<" b "<<bcurr<<endl; 
	cout<<ans<<endl;

}
