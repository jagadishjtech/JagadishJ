#include<stdio.h>
#include<string.h>
#include <ctype.h>

int main(void)

{

int len, i= 0, j, pal = 1;

char str[50];

printf("Enter a string : ");
scanf("%s", str);

j = strlen(str) - 1;  

while(i <= j)
{
    if (toupper(str[i]) != toupper(str[j]))
    {
        pal = 0;
        break;
    }

    i++;  
    j--;
}

if(pal)
{
    printf("%s is palindrome", str);
}
else
{
    printf("%s is not palindrome", str);
}

return 0;
}