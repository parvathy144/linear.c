#include<stdio.h>
int main()
{
	int a[10][10],b[10][10],c[10][10];
	int r1,c1,r2,c2,i,j,k,choice;
	printf("enter the rows and columns A: ");
	scanf("%d%d",&r1,&c1);
	printf("Enter rlrments of matrix A:\n");
	for(i=0;i<r1;i++)
		for(j=0;j<r1;j++)
		scanf("%d",&a[i][j]);
	printf("Enter thr rows and ccolumns of matrix B: ");
	scanf("%d%d",&r2,&c2);
	printf("enter elements of matrix B:\n");
	for(i=0;i<r2;i++)
		for(j=0;j<c2;j++)
		scanf("%d",&b[i][j]);
		printf("n1.Addition");
		printf("n2.Substraction");
		printf("n3.Multiplication");
		printf("n4.Transpose of matrix A");
		printf("\nEnter your choice: ");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				if(r1==r2&&c1==c2)
				{
					printf("Addition:\n");
					for(i=0;i<r1;i++)
					{
						for(j=0;j<c1;j++)
						{
							c[i][j]=a[i][j]+b[i][j];
							printf("%d",c[i][j]);
						}
						printf("\n");
					}
				}
				else
					printf("Addition not poosible,");
			case 2:
				if(r1==r2&&c1==c2)
				{
					printf("Substraction:\n");
					for(i=0;i<r1;i++)
					{
						for(j=0;j<c1;j++)
						{
							c[i][j]=a[i][j]-b[i][j];
							printf("%d",c[i][j]);
						}
						printf("\n");
					}
				}
				else
					printf("substraction not poosible,");
					break;
			case 3:
				if(r1==r2&&c1==c2)
				{
					printf("Multiplication:\n");
					for(i=0;i<r1;i++)
					{
						for(j=0;j<c2;j++)
						{
							c[i][j]=0;
							for(k=0;k<c1;k++)
							c[i][j]+=a[i][k]*b[k][j];
							printf("%d",c[i][j]);
						}
						printf("\n");
					}
				}
				else
					printf("Mutliplication not poosible,");
					break;
		       case 4:
					printf("Transpose of matrix A:\n");
					for(i=0;i<c1;i++)
					{
						for(j=0;j<c1;j++)
						printf("%d",a[j][i]);
						printf("\n");
					}
					break;
		      default:
				printf("Invalid choice");
				}
				return 0;
}
				
									
												
							
		
