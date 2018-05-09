
#include <stdio.h>
int main()
{
	int x;
	scanf("%d",&x);
	int f;
	int k;
	if(x>0){
		k=1;
	}else if(x<0)
	{
		k=2;
	}else{
		k=3;
	}
	switch(k){
		case 1: f=2*x; break;
		case 2: f=-1;break;
		default:
			f=0;
		
	}
	printf("%d",f);

	
	return 0;
}
