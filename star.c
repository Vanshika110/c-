/* #include<stdio.h> //pattern1
void main(){
	int x, y,z;
	for( x=1;x<=5;x++)
	{
		for( y=x;y<5;y++)
		printf(" ");
		{
			for(z=1;z<=x;z++)
			{
			if(z%2==1)
			printf("*");
			else
			printf("#");
		}
		printf("\n");
			}
}
} 

#include<stdio.h>  //pattern2
void main(){
	int x, y,z;
	for( x=1;x<=5;x++)
	{
		for( y=x;y<5;y++)
		printf(" ");
		{
			for(z=x;z>=1;z--)
			{
			if(x%2==1)
			printf("*");
			else
			printf("#");
		}
		printf("\n");
			}
}
}

#include<stdio.h>  //pattern3
void main(){
	int x, y,z,c=1;
	for( x=1;x<=4;x++)
	{
		for( y=x;y<4;y++)
		printf(" ");
		{
			for(z=1;z<4;z++)
			{
				printf("%d",c);
				c++;
					
		}
	printf("\n");
			}
}
}  

#include<stdio.h>  //pattern4
void main(){
	int x, y,z;
	for( x=5;x>1;x--)
	{
		for( y=x;y<5;y++)
		printf(" ");
		{
			for(z=x;z>=1;z--)
			{
				printf("%d",z);
		}
		printf("\n");
			}
}
}

#include<stdio.h>  //pattern5
void main(){
	int x, y,z;
	for( x=1;x<=5;x++)
	{
		for( y=x;y<5;y++)
		printf(" ");
		{
			for(z=1;z<=x;z++)
			{
				if(z==1 || z==x || x==5)
				printf("|");
				else
				printf(" ");
			}
			printf("\n");
		}
	}
}

#include<stdio.h>  //pattern6
void main(){
	int x, y,z,c=1;
	for( x=1;x<=5;x++)
	{
		for( y=x;y<5;y++)
		printf(" ");
		{
			for(z=1;z<=x;z++)
			{
				if(z==1 || z==x || x==5)
				printf("|");
				else
				{
				printf("%d",c);
				c++;
				}
			}
			printf("\n");
		}
	}
}*/



