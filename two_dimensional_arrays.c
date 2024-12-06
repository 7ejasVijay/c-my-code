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

}

