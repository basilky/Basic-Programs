#include<stdio.h>
void main()
{
	int n,c,w,x[10][10],y[10][10],i,j,k,count=0,mincount=0,flag=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\nenter number of tasks\n");
		scanf("%d",&w);
		printf("\nenter tasks\n");
		for(j=0;j<w;j++)
		{
		scanf("%d,",&x[i][j]);
		}
		
		for(j=0;j<w;j++)
		{
		scanf("%d,",&y[i][j]);
		}
		for(j=0;j<w;j++)
		{
			if(flag==0)
			{
				count+=x[i][j];
				j++;
				flag=1;
			}
			else
			{
				count+=y[i][j];
				j++;
				flag=0;
			}
		}
		mincount=count;
		flag=1;
		count=0;
		for(j=0;j<w;j++)
		{
			if(flag==0)
			{
				count+=x[i][j];
				j++;
				flag=1;
			}
			else
			{
				count+=y[i][j];
				j++;
				flag=0;
			}
		}
		if(count<mincount)
		mincount=count;
		printf("\ntotal time : %d",count);



	}


	
}
