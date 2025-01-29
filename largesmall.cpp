#include<stdio.h>
int main()
{
	int n,i,arr[100],l,s;
	printf("Enter number of elements= ");
	scanf("%d",&n);
	
	printf("Enter the elements= ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	l=s=arr[0];
	
	for(i=1;i<n;i++)
	{
		if(arr[i]>l)
		{
			l=arr[i];
		}
		if(arr[i]<s)
		{
			s=arr[i];
		}
	}
	printf("\nLargest element=%d\n",l);
	printf("\nSmallest element=%d\n",s);
	
	return 0;
}
