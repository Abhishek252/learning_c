#include<stdio.h>
FILE *fptr;
fptr = fopen("filename. txt", "w");
fprintf(fptr, "some text");
fclose(fptr);
return 0


