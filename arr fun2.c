#include<stdio.h>
int getarray(int);
void putarr(int, int);
int main()
{
	int array[100],limit;
    printf("\n enter array length : ");
	scanf("%d",&limit);
	array[100]=getarray(limit);
	putarr(array[100],limit);
}
int getarray(int a)
{
	int arr[100],i;
	printf("\n Enter array values : \n");
	for(i=0;i<a;i++)
	{
	scanf("%d",&arr[i]);
	}
	printf("\n \n");
	return arr[100];
}
void putarr(int dis[100],int a)
{
	int i;
	for(i=0;i<a;i++)
	{
		printf("%d\t",dis[i]);
	}
	
}