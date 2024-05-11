#include<stdio.h>
#include<string.h>
void decrypt (char *c)
{
    char *ptr = c;
    while(*ptr !='\0')
    {
        *ptr = *ptr-1;
        ptr++;
    }
}

int main()
{
    char c[] = " nz!obnf!jt!ijnbotij!njtisb!j!mjwf!bu!!hpqbmqvs!cijubsj/";
    decrypt(c);
    printf("decrypted string is %s", c);
    return 0;

}