#include <stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int fact=1;//�׳� 
	//int fact=0;//�ۼ� 
	for(int i=1;i<=n;i++){
		fact=fact*i;
		//fact=fact+i;
		
	}
	printf("%d!=%d",n,fact);
	return 0;
}
