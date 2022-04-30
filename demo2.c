#include <stdio.h>
int main(){
	int m,n,y,x,c;
	scanf("%d",&m);
	scanf("%d",&n);
	int a[n];
	for(x=0;x<n;x++){
		scanf("%d",&a[x]);
	}
    for(x=0;x<n;x++){
        c=a[x]-m;
        for(y=0;y<n;y++){
            if(c==a[y]){
                printf("YES\n");
                return 0;
            }
        }
    }
	printf("NO\n");
	return 0;
}