#include <stdio.h>
#include <math.h>
#define ll long long

int main(){
	int n;
	scanf("%d",&n);
	int f[100006] = {0};
	f[0] = 0, f[1] = 1; f[2] = 1;
	for(int i=3;i<=n+1;i++){
		f[i] = f[i-1] + f[i-2];
		}
	for(int i=0;i<n;i++){
		printf("%d ",f[i]);
	}
}

