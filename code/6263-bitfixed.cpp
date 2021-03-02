#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
//const int N=,mod=;
int a,b,k;
int main(){
	scanf("%d%d%d",&a,&b,&k);
	swap(a,b);
	if(k==0){
		puts("Yes");
		for(int i=1;i<=a;i++) printf("1");
		for(int i=1;i<=b;i++) printf("0");
		puts("");
		for(int i=1;i<=a;i++) printf("1");
		for(int i=1;i<=b;i++) printf("0");
		puts("");
	} else {
		if(a+b>=k+2&&a>=2&&b>=1){
			puts("Yes");
			int aa=a-2,bb=b-1;
			printf("11");
			for(int i=1;i<=k-1;i++){
				if(aa) aa--,printf("1");
				else if(bb) bb--,printf("0");
			}
			printf("0");
			for(int i=1;i<=a+b-k+2;i++){
				if(aa) aa--,printf("1");
				else if(bb) bb--,printf("0");
			}
			puts("");
			aa=a-2,bb=b-1;
			printf("10");
			for(int i=1;i<=k-1;i++){
				if(aa) aa--,printf("1");
				else if(bb) bb--,printf("0");
			}
			printf("1");
			for(int i=1;i<=a+b-k+2;i++){
				if(aa) aa--,printf("1");
				else if(bb) bb--,printf("0");
			}
			puts("");
		} else puts("No");
	}
	return 0;
}
