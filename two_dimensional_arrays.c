#define COLS (100)

void init_matrix(int m[][COLS], int rows) {
  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < COLS; j++) {
      m[i][j] = i * j;
    }
  }
}

int main(void) {

  int martrix[50][COLS];
  int bigger[100][COLS];

  init_matrix(martrix, 50);
  init_matrix(bigger, 100);

  // Dynamically allocated arrays
  // Method 1 - Memory efficient allocation
  int *two_d_array;
  two_d_array = malloc(sizeof(int) * (3 * 4));

  if (two_d_array == NULL) {
    exit(1);
  }
}

