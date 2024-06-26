#include <stdio.h>
#define ll long long

ll gcd(ll a, ll b){
	if(!b) return a;
	return gcd(b, a%b);
}

ll lcm(ll a ,ll b){
	return (a*b)/gcd(a,b);
}

int main() {
	int t;
	scanf("%d",&t);
	while(t--){
		int n, m;
		scanf("%d%d",&n,&m);
		long long res=n;
		for(ll i=n+1;i<=m;++i) res=lcm(res, i);
		printf("%lld\n",res);
	}
}
