#include <stdio.h>
int main(){
    int m,n,x,y;
    scanf("%d",&m);
    scanf("%d",&n);
    int a[n];
    for(x=0;x<n;x++){
        scanf("%d",&a[x]);
    }
    for(x=0;x<n;x++){
        for(y=0;y<n;y++){
            if(a[x]+a[y]==m){
                printf("yes");
                return 0;
            }
        }
    }
    printf("no");
    return 0;
}