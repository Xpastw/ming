#include <stdio.h>

int main()
{
	int n;
	int i = 1;
	int a = 1;

	printf("������һ����������");
	scanf("%d", &n);
	
    while (i <= n) {
    	a = a * i;
    	i++;
	} 
	
	printf("n�׳�Ϊ��%d\n",a);
	
	return 0;
}
