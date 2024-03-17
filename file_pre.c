#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE* file2;
    file2 = fopen("output.txt", "w");
    if(file2 == NULL)
    {
        printf("The file is not opened.the program will "  "exit now" );
        exit(0);
    }
    else
    {
        printf("The file is created successfully.");
    }
    return 0;

}
