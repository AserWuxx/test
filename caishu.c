#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
	srand(time(0));
	int number=rand()%100+1;
	int count=0;
	int a=0;
	printf("���Ѿ������һ��1-100���ڵ���0");
	do{
		printf("����������");
		scanf("%d",&a);
		count++;
		if(a>number){
			printf("����");
		} else if(a<number){
			printf("С��");
		} 
	} while(a!=number);
	printf("̫������ֻ����%d�ξͲµ���\n",count);	
	return 0;
}
