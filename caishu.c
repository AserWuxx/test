#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
	srand(time(0));
	int number=rand()%100+1;
	int count=0;
	int a=0;
	printf("我已经想好了一个1-100以内的数0");
	do{
		printf("请猜这个数：");
		scanf("%d",&a);
		count++;
		if(a>number){
			printf("大了");
		} else if(a<number){
			printf("小了");
		} 
	} while(a!=number);
	printf("太好了你只用了%d次就猜到了\n",count);	
	return 0;
}
