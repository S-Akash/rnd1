#include<stdio.h>
#include<malloc.h>
void main()
{
int *a,i,n,max,j,temp,count=0;
printf("enter the size of array\n");
scanf("%d",&n);
a=(int*)malloc(sizeof(int)*n);
for(i=0;i<n;i++)
	scanf("%d",&a[i]);
for(i=0;i<n;i++)
{
	temp=0;
	for(j=0;j<n;j++)
		if(a[j]==a[i])
			temp++;
//if count is greater than previous max's count then assign max to the present element
	if(count<temp)
		{
		count=temp;
		max=a[i];
		}
}
printf("THE MOST REPEATED ELEMENT IS %d",max);
}