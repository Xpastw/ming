#include <stdio.h>
int main()
{
	int i;
	int n;
	int t=0;
	
	printf("请输入1到100的一个数：");
	scanf("%d",&n);
	
	for(i=2;i<=100;i++){
		if(n%i==0){
			t=t+1;
	    }
    }
    if(t==1){
	    printf("%d是素数",n);
	}else{
		printf("%d不是素数",n);
	}
	
	return 0;
}
