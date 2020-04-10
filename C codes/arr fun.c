#include<stdio.h>
int * getarray(int);
void putarrayValues(int a[], int b);
int main()
{
	int array[100],limit;
    printf("\n enter array length : ");
	scanf("%d",&limit);
	array=getarray(limit);
	putarrayValues(array,limit);
}
int * getarray(int a)
{
	int arr[100],i;
	printf("\n Enter array values : \n");
	for(i=0;i<a;i++)
	{
	scanf("%d",&arr[i]);
	}
	printf("\n \n");
	return arr;
}
void putarrayValues(int dis[100],int a)
{
	int i;
	for(i=0;i<a;i++)
	{
		printf("%d\t",dis[i]);
	}
	
}