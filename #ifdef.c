#include<stdio.h>
#define Country india
#if Country == Pakistan
    printf("Pakistan rupees");
#elif Country == Bangladesh
    printf("Taka");
#elif Country ==Nepal
      printf("Nepali Rupees");
#else
     printf("indian Rupees");
#endif // Country
