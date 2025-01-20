#include <stdio.h>

#define N 10
#define M 20

int main(void) {
  
  char letters[N];
  int numbers[N], i, j;
  int matrix[N][M];

  char *cptr;
  int *iptr;

  cptr = &(letters[0]);
  iptr = numbers;

  for (i = 0; i < N; i++) {
    *cptr = 'a' + i;
    *iptr = i * 3;

    cptr++;
    iptr++;
  }

  printf("\n array values using indexing to access: \n");

  for(i = 0; i < N; i++) {
    printf("letters[%d] = %c, numbers[%d] = %d\n", i, letters[i], i, numbers[i]);
  }

  printf("\n array values using pointer arith to access: \n");

  cptr = &(letters[0]);
  iptr = numbers;

  for(i = 0; i < N; i++) {
    printf("letters[%d] = %c, numbers[%d] = %d\n", i, *cptr, i, *iptr);
    cptr++;
    iptr++;
  }

  iptr = &(matrix[0][0]);

  for(i = 0; i < N*M; i++) {
    *iptr = i;
    iptr++;
  }

  printf("\n 2D array values initiated using pointer arith: \n");
  
  for(i = 0; i < N; i++) {
    for(j = 0; j < M; j++) {
      printf("%3d ", matrix[i][j]);
    }
    printf("\n");
  }

  printf("\n");

  iptr = &numbers[2];
  *iptr =  -13;
  iptr += 4;
  *iptr = 9999;

  for(i = 0; i < N; i++) {
    printf("numbers[%d] = %d\n", i, numbers[i]);
  }

  return 0;

}
