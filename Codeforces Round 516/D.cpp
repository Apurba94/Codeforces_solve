//��CF1063D
#include<iostream>
#include<cstdio>
#include<fstream>
#include<algorithm>
#include<vector>
#include<map>
#include<set>
#include<queue>
#include<bitset>
#include<cmath>
#include<cstring>
#include<cstdlib>
using namespace std;
typedef long long LL;
typedef double DB;
LL n,k,e,x,y,z,w,s=-1;
void solve1(){
	LL i;
	for(i=0;i<=n;i=i+1){
		x=k%(n+i);
		if(x<e||e+e<x)
			continue;
		y=x-e;
		if(y>i||(e-y)>(n-i))
			continue;
		s=max(s,i);
	}
	k++;
	for(i=1;i<=n;i=i+1){
		x=k%(n+i);
		if(x<e||e+e<x)
			continue;
		y=x-e;
		if(!y||y>i||(e-y)>(n-i))
			continue;
		s=max(s,i);
	}
}
void solve2(){
	LL i;
	if(e<=k&&k<=e+e)
		s=max(s,k-e+n-e);
	for(i=1;n*i+e<=k;i=i+1){
		x=k-n*i-e;
		if(x>n*i+e)
			continue;
		y=x%i;
		if(y>e)
			continue;
		x-=y*(i+1);
		z=min(n-e,x/i);
		x-=z*i;
		if(x){
			x/=i;
			w=x/(i+1);
			y+=w*i;
			x-=w*(i+1);
			if(x){
				w=(LL)i+1-x;
				z-=w;
				y+=i;
			}
		}
		if(y>e||y<0||z>n-e||z<0)
			continue;
		s=max(s,y+z);
	}
	k++;
	if(e+1<=k&&k<=e+e)
		s=max(s,k-e+n-e);
	for(i=1;n*i+e<=k;i=i+1){
		x=k-n*i-e;
		if(x>n*i+e)
			continue;
		y=x%i;
		if(y>e)
			continue;
		x-=y*(i+1);
		z=min(n-e,x/i);
		x-=z*i;
		if(x){
			x/=i;
			w=x/(i+1);
			y+=w*i;
			x-=w*(i+1);
			if(x){
				w=(LL)i+1-x;
				z-=w;
				y+=i;
			}
		}
		if(y>e||y<0||z>n-e||z<0)
			continue;
		if(!y)
			y=i,z-=i+1;
		if(y>e||y<0||z>n-e||z<0)
			continue;
		s=max(s,y+z);
	}
}
int main()
{
	cin>>n>>x>>y>>k;
	e=(y-x+1+n)%n;
	if(!e&&n==k)
		s=1;
	if(n<=1e6)
		solve1();
	else
		solve2();
	cout<<s;
	return 0;
}
