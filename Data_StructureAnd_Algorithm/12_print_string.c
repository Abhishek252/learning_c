#include<stdio.h>
#include<string.h>
int main(){
char bookname[30] = "C Learing";
char bookname2[30];

strcpy(bookname2, bookname);
printf("%s", bookname2);
return 0;
}
