#include<stdio.h>
int main()
{
    int dis[2][3] = {{1,2,3,4,5}, {10,11,12,13,14}};
    int i,j;
    for(i=0; i<2; i++){
    for(j=0; j<3; j++){

    printf("Enter the value for dis [%d][%d]: ", i,j);
    scanf("%d", &dis [i][j]);


    }
} 


printf("two diamensional i array element :\n");
for(i=0; i<2; i++)
{
    for(j=0; j<3; j++)
    {
        printf("%d", dis[i][j]);
        if(j==2)
        {
            printf("\n");
        }
        
    }
}
  
    return 0;
}