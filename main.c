
#include<stdio.h>
#include<string.h>
#include <ctype.h>

int main(void)

{

int l, i=0, j, x= 0, pal = 1;
char s[50];

printf("Enter a string : ");
scanf("%[^\n]%*c", s); 

l=strlen(s) - 1;

while(x <= l)
{
    if (toupper(s[x]) != toupper(s[l]))
    {
        pal = 0;
        break;
    }

    x++;  
    l--;
}

if(pal)
{
    printf("The given string is a palindrome");
}
else
{
    printf("The given string is NOT a palindrome");
}

return 0;
}