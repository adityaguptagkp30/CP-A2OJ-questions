#include<bits/stdc++.h>
#define ll long long int
#define pb push_back
#define mod 1000000007
#define pi (3.141592653589)
using namespace std;
 
int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout << fixed;
    cout.precision(10);
    int n;
    cin>>n;
 int a,b,c;
 cin>>a>>b>>c;
 int dp[n+1];
 dp[0]=0;
 int x,y,z;
 for(int i=1;i<=n;i++)
  {
  	//5 3 2
  	//1 2 3 4 5
  	//dp[1]=-1; dp[2]=1; dp[3]=1; dp[4]=2; dp[5]=2
  	x=y=z=-1;
  	if(i-a>=0)
  	x=dp[i-a];
  	if(i-b>=0)
  	y=dp[i-b];
  	if(i-c>=0)
  	z=dp[i-c];
  	if(x==-1&&y==-1&&z==-1)
  	dp[i]=-1;
  	else
  	dp[i]=max(x,max(y,z))+1;
  	
  	
  }
  cout<<dp[n]<<"\n";
	return 0;
}
