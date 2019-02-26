//This program is going to calculate the Matrix Multiplication 3*3
#include<stdio.h>
int main()
{
	int a[3][3],b[3][3],c[3][3],i,j,k,sum;
	printf("This is a program to calculate Martix 3x3");
	printf("Enter the Matrix A:\n");
	//This line is we going to get input for Matrix A from the user
	for(i=0 ; i<3 ; i++)
	{
		for(j=0 ; j<3 ; j++)
		{
			scanf("%d",&a[i][j]);
        }printf("\n");
	}
	//This line is we going to get input for Matrix B from the user
	printf("Enter the Matrix B: \n");
	for(i=0 ; i<3 ; i++)
	{
		for(j=0 ; j<3 ; j++)
		{
			scanf("%d",&b[i][j]);
		}printf("\n");
	}
	//This line we going to show the Matrix A that the user have input
	printf("This is the Matrix A that you have input: \n");
	for(i=0 ; i<3 ; i++)
	{
		for(j=0 ; j<3 ; j++)
		{
			printf("%d ",a[i][j]);
        }printf("\n");
    }
    //This line we going to show the Matrix B that the user have input
    printf("This is the Matrix B that you have input: \n");
	for(i=0; i<3 ; i++)
	{
		for(j=0 ; j<3 ; j++)
		{
			printf("%d ",b[i][j]);
        }printf("\n");
    }
    //This line is the logic of Multiplication of Matrix 3x3
    for (i=0; i<3; i++)
    {
      for (j= 0; j< 3; j++)
      {
         sum = 0;
         for (k=0; k< 3; k++)
         {
            sum = sum + a[i][k] * b[k][j];
         }
         c[i][j] = sum;
      }
   }
   //This line is for printing the result of matrix multiplication
   printf("The result of Matrix A multiplication with Matrix B is: \n");
   for(i=0 ; i<3 ; i++)
   {
        for(j=0; j<3 ;j++)
        {
            printf("%d ",c[i][j]);
        }printf("\n");
   }
}


