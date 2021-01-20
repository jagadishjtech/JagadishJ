# JagadishJ

C

#include<stdio.h>
#include<string.h> 

int main(void)
{       

    int len, i= 0, j, pal = 1;

    char str[50];

    printf("Enter a string : ");
    scanf("%s", str);

    j = strlen(str) - 1;  

    while(i <= j)
    {
        if (str[i] != str[j])
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


SQL

 Select DISTINCT CUSTOMER.ID, CUSTOMER.NAME from CUSTOMER order by NAME desc, ID asc;

select id, name, marks, grade
order by
Case When Marks >=  Then print 'Student' @ID has grade 'A'  
When Marks >= 65 Then  print 'Student' @ID has grade 'B'
When Marks < 35 Then  print 'Student' @ID has grade 'C'
End as grade
From 
students

