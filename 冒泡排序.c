#include <stdio.h>
int main(){
	int a[5]={1,2,3,4,5},i,j,c;
	for(i=0;i<5-1;i++){
		for(j=0;j<5-1-i;j++){
			if(a[j]<a[i+1]){
				c=a[j];
				a[j]=a[j+1];
				a[j+1]=c;	
			}
		}	
	}
	for(i=0;i<5;i++){
		printf("%d",a[i]);
	}
	return 0;
}
