#include<stdio.h>
#include<string.h>

struct marks{

    int biology;
    int chemistry;
    int physics;
    int hindi;
    int english;

};

int main(){

    struct marks m1;
    m1.biology = 97;
    m1.chemistry = 97;
    m1.physics = 74;
    m1.hindi = 90;
    m1.english = 60;

    printf("biology %d\n", m1.biology);
    printf("chemistry %d\n", m1.chemistry);
    printf("physics %d\n", m1.physics);
    printf("hindi %d\n", m1.hindi);
    printf("english %d\n", m1.english);
    return 0; 
}