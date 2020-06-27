#include <stdio.h>

unsigned long to_binary(unsigned short num)
{
    char bin_num;
    int i = 0;
    while (num > 0) {
      bin_num[i] = num % 2;
      printf("%d\n", num);
      num = num / 2;
      i++;
    }
    printf("%s\n", bin_num);
    return bin_num;
}