#include<stdio.h>

struct str1
{
    int p;
    char q;
}st1;

struct str2
{
    char a;
    int b;
    char c;
}st2;

int main()
{
    printf("size of structure 1 is: %ld\n", sizeof(st1));
    printf("size of structure 2 is: %ld\n", sizeof(st2));
    return 0;
}