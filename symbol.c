#include <stdio.h>

int main() {
char ch;
printf("enter the element:");
scanf("%c",&ch);
char res=!(ch>='A')&&(ch<='Z')||!(ch>='a')&&(ch<='z')||!(ch>=0)&&(ch<=9);
printf("%c is a symbol  i.e is :%d",ch,res);
    return 0;
}