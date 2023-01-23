#include<stdio.h>
#include<stdlib.h>

void main()
{
	int n,*arr;
	pf("Enter size:\n");
	scanf("%d",&n);
	
	arr=(int*)calloc(n,sizeof(int));
	if(arr==NULL)
		pf("No Memory allocation\n");
	else
	{
		for(i=0;i<n;i++)
		{
			arr[i]=i+1;
		}
	}
	int new_size=10;
	
	arr=realloc(aarr,new_size*sizeof(int));
	
	for(i=n;i<new_size;i++)
	{
		arr[i]=i+1;
	}
	printf("elements are:");
	for(i=0;i<n;i++)
	{
		printf("%d,",arr[i]);
	}
	free(arr);
}
