/*如果b等于0，计算结束，a就是最大公约数；
否则，计算a除以B的的余数，让a=b，而b等于那个余数
回到第一步；

a	b	t
12	18	12
18	12	6
12	6	0
6	0 
*/
#include <stdio.h>
int main()
{
	int a ,b;
	int t;
	//scanf("%d %d",&a,b);
	a=12,b=18;
	while(b!=0){
		t=a%b;
		a=b;
		b=t;
		printf("a=%d,b=%d,t=%d\n",a,b,t);
	}
	printf("gcd=%d\n",a);
	return 0;
}
