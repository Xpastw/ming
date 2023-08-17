#include <stdio.h>

int main()
{
	int n;
	int i = 1;
	int a = 1;

	printf("请输入一个正整数：");
	scanf("%d", &n);
	
    while (i <= n) {
    	a = a * i;
    	i++;
	} 
	
	printf("n阶乘为：%d\n",a);
	
	return 0;
}
