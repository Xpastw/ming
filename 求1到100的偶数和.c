#include <stdio.h>
int main()
{
	int i;
	int n;
	int t=0;
	
	printf("������1��100��һ������");
	scanf("%d",&n);
	
	for(i=2;i<=100;i++){
		if(n%i==0){
			t=t+1;
	    }
    }
    if(t==1){
	    printf("%d������",n);
	}else{
		printf("%d��������",n);
	}
	
	return 0;
}
