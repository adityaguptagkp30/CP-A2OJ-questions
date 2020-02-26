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
    int s1,s2,s3;
    cin>>s1>>s2>>s3;
    ll a,b,c;
    a=sqrt((s1*s2)/s3);
     b=sqrt((s1*s3)/s2);
      c=sqrt((s3*s2)/s1);
      cout<<(a*4)+(b*4)+(c*4)<<"\n";
	return 0;
}
