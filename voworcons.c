#include<stdio.h>
#include<conio.h>
int main()
{
    char ch='A';
    if(ch=='a'|| ch=='A'|| ch=='e' || ch=='E'|| ch=='i'|| ch=='I'||ch=='o'|| ch=='O'|| ch=='u'|| ch=='U')
{
    printf("The character %c is vowel.\n",ch);
}
    else
{
    printf("The character %c is consonant.\n",ch);
}
    return 0;
}
