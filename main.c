#include <stdio.h>
#include <stdlib.h>
#include "functions.h"



int main()
{
{
    char str1[] = "This is a test code";    // source string
    char str2[sizeof(str1)];                // destination string
    char str3[] = "To be concatenated";

    

    myStrcpy(&str2,&str1);
    printf("***Demo for my_strcpy()***\n");
    printf("The source string      : %s\n",str1);
    printf("The destination string : %s\n\n\n",str2);

    printf("***Demo for my_strlen()***\n");
    printf("Size of str1 using strlen()    = %d\n",strlen(str1));
    printf("Size of str1 using sizeof()    = %d\n",sizeof(str1));
    printf("Size of str1 using myStrlen() = %d\n\n\n",myStrlen(str1));

    printf("***Demo for myStrchr()***\n");
    printf("Search for 'a' in str1 = %s\n\n\n",myStrchr(str1,'a'));

    printf("***Demo for myStrcat()***\n");
    myStrcat(str1,str3);
    printf("Concatenated string = %s\n",str1);
    return 0;
}
}
