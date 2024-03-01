//#include<stdio.h>
//#include<conio.h>
//int main()
//{
//    int x=5;
//    int *j,**q,***r;
//    j=&x;
//    q=&j;
//    r=&q;
//    printf("%p\n",&x,&j,&q);
//    return 0;

//}


int main()
{
    int x=5,j=6,q=7;
    int *ptr=x;
    int **ptr=j;
    int ***ptr=q;
    printf("%d\n",*ptr(x,j,q));
    return 0;
}
