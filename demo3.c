#include <stdio.h>
int main(){
    int m,n,x,y,c;
    scanf("%d %d",&m,&n);
    int a[n];
    for(x=0;x<n;x++){
        scanf("%d",&a[x]);
    }
    for(x=0;x<n;x++){
        c=a[x]+m;
        for(y=0;y<n;y++){
            if(a[y]==c){
                printf("YES\n");
                return 0;
            }
        }
    }
    printf("NO\n");
    return 0;
}