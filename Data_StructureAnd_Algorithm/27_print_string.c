#include<stdio.h>
#include<string.h>
void slice(char *st, int m, int n){
int i =0;
while((m+1)<n)
{
    st[i] = st [i+m];
    i++;

}
st[i] = '\0';
  
}
int main()
{
    char st[] = "Himanshi";
    slice(st, 1,6);
    printf("%s", st);
    return 0;

}

