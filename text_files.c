#include <stdio.h>
#include <stdlib.h>

int main(void) {

  FILE *infile;
  FILE *outfile;

  infile = fopen("input.txt", "r");
  if (infile == NULL) {
    printf("Error: Unable to open file %s\n", "input.txt");
    exit(1);
  }

  outfile = fopen("/home/tejas/Desktop/Personal/7ejasVijay/c-my-code/output.txt", "w");
  if (outfile == NULL) {
    printf("Error: Unable to open outfile.txt");
    exit(1);
  }

  int ch;

  /*ch = getc(infile);*/
  while ((ch = getc(infile)) != EOF) {
    putc(ch, outfile);
  }

  fclose(infile);
  fclose(outfile);

}
