#include<stdio.h>

struct value
{
    int bit1: 1;
    int bit3: 4;
    int bit4 : 4;

}bit = {1,2,13};
int main()
{

  printf("%d %d %d\n ", bit.bit1, bit.bit3, bit.bit4);
  return 0;
}