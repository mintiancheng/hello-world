#include <stdio.h>
int main(){
	int x,y,n;
	//我家的门牌号 
	scanf("%d",&n);
	for(y=1;y<100000;y++){
		for(x=1;x<=y;x++){
    		if((1+y)*y/2-2*x==n){
    			printf("%d %d\n",x,y);
    			//找到就输出 
    			return 0;
			}
  		}
	}
	return 0;
}