#include<stdio.h>
int prime();
int buzz();
int i;
int n=100;
int main(){
	int ch;
	printf("1.prime no.& 2.buzz no.");
	scanf("%d",&ch);
	switch(ch){
		case 1:prime();
		break;
case 2: buzz();
break;
default: printf("wrong choice");
}
}
int prime(){
	int count=0;
	for(i=2;i=n/2;i++){
				if(n%i==0){
			count++;
			break;
		}
if(count==0)
printf("\nprime no. %d",n);
}
}

int buzz(){
	if(n%7==0 || n%10==7)
printf("\nbuzz no. %d",n);
		}

