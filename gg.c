#include<stdio.h>
#include<string.h>
int main()
{
    FILE*file;
    file=fopen("read.txt","r");
    char bookName[40];
    {
        fgets(file,40, bookName);
        {
           printf("%c",bookName);
           scanf("%c", &bookName);
            fclose(file);
        }
    }
    return 0;
}
