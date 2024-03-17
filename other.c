#include<stdio.h>
#include<string.h>

#define LOGIN  1
#define REGISTER  2
#define STUDENT_LIST 3

void saveUserData(char* name, char* password)
{
    printf("your name: %s\n", name);
    printf("your name : %s\n", password);
    FILE* file=fopen("user_data. cav", "a");
    if(file!=NULL){
        fprintf(file, "%s,%s\n", name, password);
        fclose(file);

    }

}
