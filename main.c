#include<stdio.h>
int main()
{
    FILE *fptr;
    fptr = fopen("Oct.txt", "a");
    char massage[30];
    fgets(massage, 30,fptr);
    printf("Enter your massage\n");
    printf("%s", massage);
    fclose (fptr);
    return 0;

}
