#include <stdio.h>
void main()
{
	int i,b;
	int a[10];
	for(i=0;i<10;i++)
	{
	scanf("%d",&a[i]);
	}
	for(i=0;i<10;i++)
	{
		
	if(a[i]>a[i+1])
	{
	b=a[i];
	a[i]=a[i+1];
	a[i+1]=b;
	}
	}
	printf("%d",a[i]);
}
