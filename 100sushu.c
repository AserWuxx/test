#include <stdio.h>
int main()
{
	int x;
	//scanf("%d",&x);
	int cnt=0;
	for(x=1;cnt<50;x++){
		int i;
		int isPrime=1;		//x������ 
		for(i=2;i<x;i++){
			if(x % i == 0){
				isPrime = 0;
				break;
				//continue;
			}
		}
		if(isPrime == 1){
			cnt ++;
			printf("%d\t",x);
	}
	}
	
	 
	return 0;
}
