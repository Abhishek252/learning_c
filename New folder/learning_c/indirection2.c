#include<stdio.h>
int main()
{
    FILE *fptr;
    fptr = fopen("date.txt", "a");
    char Date[20];
    fgets(Date, 20, fptr);
    printf("Enter your Date\n");
    printf("%s", Date);
    fclose(fptr);
    return 0;
}
