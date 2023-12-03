#include <stdio.h>
#include <stdlib.h>

int get_calibration_sum(char *filename)
{

  return 0;
}

int main(int argc, char *argv[])
{
  if (argc != 2)
  {
    printf("Usage: %s <input_file>\n", argv[0]);
    exit(1);
  }
  int sum = get_calibration_sum(argv[1]);
  printf("The sum of all calibration values is %d", sum);

  return 0;
}
