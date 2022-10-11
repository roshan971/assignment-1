#include <stdio.h>


void getMatrixElements(int matrix[][10], int row, int column) {

   printf("\nEnter elements: \n");

   for (int i = 0; i < row; ++i) {
      for (int j = 0; j < column; ++j) {
         printf("Enter a%d%d: ", i + 1, j + 1);
         scanf("%d", &matrix[i][j]);
      }
   }
}


void multiplyMatrices(int first[][10],
                      int second[][10],
                      int result[][10],
                      int r1, int c1, int r2, int c2) {

  
   for (int i = 0; i < r1; ++i) {
      for (int j = 0; j < c2; ++j) {
         result[i][j] = 0;
      }
   }

   
   for (int i = 0; i < r1; ++i) {
      for (int j = 0; j < c2; ++j) {
         for (int k = 0; k < c1; ++k) {
            result[i][j] += first[i][k] * second[k][j];
         }
      }
   }
}


void display(int result[][10], int row, int column) {

   printf("\n Matrix:\n");
   for (int i = 0; i < row; ++i) {
      for (int j = 0; j < column; ++j) {
         printf("%d  ", result[i][j]);
         if (j == column - 1)
            printf("\n");
      }
   }
}
void add(int first[][10],int second[][10],int sum[][10],int r1,int c1,int r2,int c2){
for (int i = 0; i < r1; ++i){
    for (int j = 0; j < c1; ++j) {
      sum[i][j] = first[i][j] + second[i][j];
    }}

}   


void identity()
{
 	int i, j, rows, columns, a[10][10], Flag = 1;
  
 	printf("\n Please Enter Number of rows and columns  :  ");
 	scanf("%d %d", &i, &j);
 
 	printf("\n Please Enter the Matrix Elements \n");
 	for(rows = 0; rows < i; rows++)
  	{
   		for(columns = 0; columns < j; columns++)
    	{
      		scanf("%d", &a[rows][columns]);
    	}
  	}
     
 	for(rows = 0; rows < i; rows++)
  	{
   		for(columns = 0; columns < j; columns++)
    	{
    		if(a[rows][columns] != 1 && a[columns][rows] != 0)
    		{
    			Flag = 0;
    			break;
			}
   	 	}
  	}
  	if(Flag == 1)
  	{
  		printf("\n The Matrix that you entered is an Identity Matrix ");
	}
	else
	{
		printf("\n The Matrix that you entered is Not an Identity Matrix ");
	}
  	
 	
}
 	


















int main() {
   int first[10][10], second[10][10], result[10][10],third[10][10], r1, c1, r2, c2,sum[10][10],n;
   
   printf("Enter rows and column for the first matrix: ");
   scanf("%d %d", &r1, &c1);
   printf("Enter rows and column for the second matrix: ");
   scanf("%d %d", &r2, &c2);

   
   // get elements of the first matrix
   getMatrixElements(first, r1, c1);
   display(first, r1, c1);
   // get elements of the second matrix
   getMatrixElements(second, r2, c2);
   display(second,r2,c2);
   // multiply two matrices.
   multiplyMatrices(first, second, result, r1, c1, r2, c2);
   
   // display the result
   printf("multiplication result is");
   display(result,r2,c2);
   printf("addition result is");
   add(first,second,sum,r1, c1, r2, c2);
   
   display(sum,r2,c2);

   printf("print 1 to check whether matrix is identity matrix or not");
   scanf("%d",&n);
   if(n==1)
   {identity();
}
   return 0;
}
