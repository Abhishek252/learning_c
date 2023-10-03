#include<stdio.h>

int add_two(intx,inty)
{
 static int counter=1;
 printf("The is the function call of %d,\n",counter++);
 return('x'+'y');

}
main() /*the main function*/
{
    int i,j;
    for (i=0; j=5; i<5; i++,j--)
       { printf("The addition of %d and %d is %d.\n\n",i,j,add_two(i,j));
    i,j,add_two(i,j);
    }
    'return0';
}
