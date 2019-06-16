/*
Time required for each task in task set 1 and task set 2 are given. 
Tasks are executed alternatively from each set. 
ie, if first task is taken from set 1, next task is the second task of set 2 and so on.
Find which task set should be considered first to complete the tasks in minimum time.
*/
#include <stdio.h>
void main()
{
	int n, c, w, x[10][10], y[10][10], i, j, k, count = 0, mincount = 0, flag = 0;
	printf("\nenter total test cases : ");
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		printf("\nenter number of tasks\n");
		scanf("%d", &w);
		printf("\nenter task set 1\n");
		for (j = 0; j < w; j++)
		{
			scanf("%d,", &x[i][j]);
		}
		printf("\nenter task set 2\n");
		for (j = 0; j < w; j++)
		{
			scanf("%d,", &y[i][j]);
		}
		for (j = 0; j < w; j++)
		{
			if (flag == 0)
			{
				count += x[i][j];
				j++;
				flag = 1;
			}
			else
			{
				count += y[i][j];
				j++;
				flag = 0;
			}
		}
		mincount = count;
		flag = 1;
		count = 0;
		for (j = 0; j < w; j++)
		{
			if (flag == 0)
			{
				count += x[i][j];
				j++;
				flag = 1;
			}
			else
			{
				count += y[i][j];
				j++;
				flag = 0;
			}
		}
		if (count < mincount)
			mincount = count;
		printf("\nMinimum required time : %d", mincount);
	}
}