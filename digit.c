#include <stdio.h>

int main() {
   char a;
   printf("enter the a value\n");
   scanf("%c",&a);
   int res=(a>='0')&&(a<='a');
   printf("%d, is a digit i.e is %d",a,res);
}