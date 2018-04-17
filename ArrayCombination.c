#include <stdio.h>
void printCombination(int a[], int data[], int start, int end, int index, int r)
{
	if (index == r)
	{
		for (int j=0; j<r; j++)
		{
			printf("%d ", data[j]);
		}
		printf("\n");
		return;
	}
	for (int i=start; i<=end && end-i+1 >= r-index; i++)
	{
		data[index] = a[i];
		printCombination(a, data, i+1, end, index+1, r);
	}
}
void combinationSize(int a[], int n, int r)
{
	int data[r];
	printCombination(a, data, 0, n-1, 0, r);
}
int main()
{
	int n;
	scanf("%d",&n);
	int a[n],i;
	for(i=0;i<n;i++)
	{
	    scanf("%d",&a[i]);
	}
	for(i=1;i<=n;i++)
	{
	    combinationSize(a, n, i);
	}
	
}
