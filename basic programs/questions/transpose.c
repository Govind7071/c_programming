#include <stdio.h>
int main() {
  int a[10][10], b[10][10], r, c;
  printf("Enter rows and columns: ");
  scanf("%d %d", &r, &c);
  printf("\nEnter matrix elements:\n");
  for (int i = 0; i < r; i++)
  for (int j = 0; j < c; j++) {
    printf("Enter element a%d%d: ", i + 1, j + 1);
    scanf("%d", &a[i][j]);
  }
  printf("\nEntered matrix: \n");
  for (int i = 0; i < r; ++i){
  for (int j = 0; j < c; ++j) 
    printf("%d  ", a[i][j]);
    printf("\n");
  }
  for (int i = 0; i < r; ++i)
  for (int j = 0; j < c; ++j) {
    b[j][i] = a[i][j];
  }
  printf("\nTranspose of the matrix:\n");
  for (int i = 0; i < c; ++i){
  for (int j = 0; j < r; ++j) 
    printf("%d  ", b[i][j]);
    printf("\n");
  }
  int count=0;
  for(int i = 0; i < r; r++)
    {
        for(int j = 0; j < c; c++)
        {
            if(a[r][c]==b[r][c])
            {
                count++;
                break;
            }
        }
    }
    if(count == 0)
    {
        printf("\nThe given Matrix is a Symmetric Matrix ");
    }
    else
    {
        printf("\nThe given Matrix is Not a Symmetric Matrix ");
    }
 
    return 0;
}
