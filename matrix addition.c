#include<stdio.h>
void main()
{
	int a[10][10],b[10][10],c[10][10];
	int arows,acols,brows,bcols;
	int i,j;
	printf("\nenter the size of rows and coloumns for matrix A:");
	scanf("%d%d",&arows,&acols);
	printf("\nenter the size of rows and coloumns for matrix B:");
	scanf("%d%d",&brows,&bcols);
	if(arows==brows &&acols==bcols)
	{
		printf("\nenter the data items for matrix A ");
		for(i=0;i<arows;i++)
		{
			for(j=0;j<acols;j++)
			{
				scanf("%d",&a[i][j]);
			}
		}
		printf("\nenter the data items for matrix B ");
		for(i=0;i<brows;i++)
		{
			for(j=0;j<bcols;j++)
			{
				scanf("%d",&b[i][j]);
			}
		}
		for(i=0;i<arows;i++)
		{
			for(j=0;j<acols;j++)
			{
				c[i][j]=a[i][j]+b[i][j];
				printf("%d\t",c[i][j]);
			}
			printf("\n");
		}
	}
	else
	{
		printf("\nthe number of rows and cols are not same..and so matrix addition cannot be performed!!!");
	}
}
