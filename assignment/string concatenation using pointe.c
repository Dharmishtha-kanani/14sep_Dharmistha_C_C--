/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int main()
{

    char aa[100], bb[100];

    printf("\nEnter the first string: ");
    gets(aa);   // inputting first string

    printf("\nEnter the second string to be concatenated: ");
    gets(bb);   // inputting second string

    char *a = aa;
    char *b = bb;

    // pointing to the end of the 1st string
    while(*a)   // till it doesn't point to NULL-till string is not empty
    {
        a++;    // point to the next letter of the string
    }
    while(*b)   // till second string is not empty
    {
        *a = *b;
        b++;
        a++;
    }
    *a = '\0';  
    printf("The string after concatenation is: %s ", aa);

    return 0;
}


   