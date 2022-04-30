#include <stdio.h>
int fn(int a[],int n,int x){
    int i;
    for ( i = 0; i < n; i++)
    {
        if(a[i]==x){
            return 1;
        }
        /* code */
    }
    
    return 0;
}
int main(){
    int m,n;
    scanf("%d %d",&m,&n);
    int a[n],i;
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for (i=0;i<n;i++)
    {
        int x=m-a[i];
        int y = fn(a,n,x);
        if(y){
            printf("YES\n");
            return 0;
        }
        /* code */
    }
    
    printf("NO");
    return 0;
}