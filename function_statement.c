#include<stdio.h>
void Namaste();
void Benjour();

int main()
{  
    printf("  enter f for frence & i for india");
    char ch;
    scanf("%c", &ch);
    if(ch == 'i')
    {
        Namaste();
    }
    else
    {
        Benjour();
    }
    return 0;

}

void Namaste()
{
    printf("Namaste");
}

void Benjour()
{
    
    printf( "Benjour");
}