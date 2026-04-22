#include <stdio.h>

int main() {
char ch;
printf(("enter the character\n"))
scanf("%c",&ch);
int res=(ch>='a')&&(ch<='z');
printf("%c is a lower case alphabet i.e is:%d",ch,res);

    return 0;
}