#include <stdio.h>

int main()
{
	int sum=0;
	int a[3][3];
	int i,j;
	printf("Enter elements of 3 X 3 Matrix\n");
	for(i=0;i<3;i++)
        {
		for(j=0;j<3;j++)
		   {
			scanf("%d",(*(a+i)+j));
		   }
	    }
	    printf("Given matrix is: \n");
	for(i=0;i<3;i++)
	{
       for(j=0;j<3;j++)
        {
			if(i==j)
			{
				sum=sum+(*(*(a+i)+j));
			}
			printf("%d\t",*(*(a+i)+j));
		}
		printf("\n");
	}
	printf("sum of diagnal elements are %d",sum);
}

