#include <stdio.h>
int main()
{
	int x;
	int n=1;
	
	scanf("%d",&x);
	if(x>999){
		n=4;
	}else if(x>99){
		n=3;
	}else if(x>9){
		n=2;
	}else if(x>0){
		n=1;
	}else if(x>0){
		n=0;
	}
	printf("%d\n",n);
	return 0;
}
