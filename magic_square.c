#include <stdio.h>

// magic square 
/////////////////////////////////////////////////
void printarray(int *a , int max)
{
    printf("\n");
	
   for(int i=0; i< max; i++)
   {
     printf("%d " , a[i]);
   }
   printf("\n");
  return;
}


/////////////////////////////////////////////////
void print_matrix(int max, int (*m)[max])
{
  int i,j;
  
  printf("\n");
	
   for(int i=0; i< max; i++)
   {
       for(j=0; j<max;j++)
       {
           printf(" %d", m[i][j]);
       }
          printf("\n");
   }
   
   printf("\n");
}

/////////////////////////////////////////

void magic_square()
{
int a[9];
int matrix[3][3];
int count = 9;int row, col, i, j;

int n = 3; 


for(i=0;i<count; i++)
{
   a[i] = i+1;
}

  printarray(a, count);
  
  // make all elements of matrix 0 
  // this will come in handy to know if place is filled or not 
  
  for(i=0; i<3;i++)
  {
      for(j=0;j<3;j++)
      {
          matrix[i][j]=0;
      }
      printf("\n");
  }
  
  i = n/2; 
  j = n-1;
  matrix[i][j] = a[0];
  
  for(int k= 1; k<9; k++)
  {
       i = i-1; j = j+1;
       
          if( (i < 0 ) && (j == n) )
          {
              i=0; j = n-2;
          }
          else
          {
              if(i < 0) 
              {
                  i = n-1;
              }
              if(j >= n)
              {
                  j = 0;
              }
              if(matrix[i][j] != 0)
              {
                  i = i+1; j = j-2;
              }
          }
          
        matrix[i][j] = a[k];    
  }
  
  print_matrix(3, matrix);
}

///////////////////////////////////////////////////////
int main()
{
    magic_square();
    return 0;
}

