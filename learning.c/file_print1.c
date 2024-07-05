#include<stdio.h>
int main()
{
    FILE *ptr;
    ptr = fopen("print.txt", "w");
    fprintf(ptr, "%c", 'm'  );
    fprintf(ptr, "%c", 'a'  );
    fprintf(ptr, "%c", 'n'  );
    fprintf(ptr, "%c", 'g'  );
    fprintf(ptr, "%c", 'o'  );
    fclose(ptr);
    return 0;

}