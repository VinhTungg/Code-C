#include<stdio.h>
#include<math.h>

#define foru(i,a,b) for(int i=a;i<=b;++i)

int nt(int n){
	foru(i,2,sqrt(n)) if(n%i==0) return 0;
	return 1;
}
int b[100006] = {0};
void sang(){
	int cnt = 0;
	foru(i,2,100006){
		if(nt(i)) b[cnt++] = i;
	}
}

int main(){
	int t;
	scanf("%d",&t);
	foru(y,1,t){
	    int n;
	    scanf("%d",&n);
	    int h1 = 0,h2=n-1,c1=0,c2=n-1;
	    int cnt = 0;
	    int a[n+1][n+1];
	    printf("Test %d:\n",y);
	    sang();
	    while(h1<=h2 && c1<=c2){
	    	foru(i,c1,c2){
	    		a[h1][i] = b[cnt];
	    		++cnt;
			}
			++h1;
			foru(i,h1,h2){
				a[i][c2] = b[cnt];
				++cnt;
			}
			--c2;
			if(c1<=c2){
				for(int i= c2; i>=c1;--i){
					a[h2][i] = b[cnt];
					++cnt;
				}
			}
			--h2;
			if(h2>=h1){
				for(int i=h2;i>=h1;--i){
					a[i][c1] = b[cnt];
					++cnt;
				}
				++c1;
			}
		}
		foru(i,0,n-1){
			foru(j,0,n-1){
				printf("%d ",a[i][j]);
			}
			printf("\n");
		}
		printf("\n");
	}
}
    
