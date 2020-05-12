#include <stdio.h>

int askingName(void);
int findingVar(void);
void understandingSizeof(void);
void doWhile();


#define _CRT_SECURE_NO_WARNINGS

int main()                            /* Most important part of the program!  */
{
    findingVar();
    understandingSizeof();
    doWhile();

    return 0;
}

int askingName() {

    int age;     /* Need a variable... */
    int var = 5;

    printf("Please enter your age");  /* Asks for age */
    scanf("%d", &age);                 /* The input is put in age */
    if (age < 100) {                  /* If the age is less than 100 */
        printf("You are pretty young!\n"); /* Just to show you it works... */
    }
    else if (age == 100) {            /* I use else just to show an example */
        printf("You are old\n");
    }
    else {
        printf("You are really old\n");     /* Executed if no other statement is */
    }



    // 5 is displayed then, var is increased to 6.
    printf("%d\n", var++);

    // Initially, var = 6. It is increased to 7 then, it is displayed.  
    printf("%d", ++var);

    return 0;
}

int findingVar() {
    int* ptr, q;
    q = 50;

    /* address of q is assigned to ptr */

    printf("q: [%d] \n", q);
   
    ptr = &q;
 
    /* display q's value using ptr variable */
    printf("*ptr: [%d] \n", *ptr);
    printf("ptr: [%d] \n", ptr);
   
    return 0;
}

void understandingSizeof() {
    int a;
    char b;
    float c;
    double d;
    printf("Storage size for int data type:%d \n", sizeof(a));
    printf("Storage size for char data type:%d \n", sizeof(b));
    printf("Storage size for float data type:%d \n", sizeof(c));
    printf("Storage size for double data type:%d\n", sizeof(d));
}

void doWhile() {
    int i = 1;

    do
    {
        printf("Value of i is %d\n", i);
        i++;
    } while (i <= 4 && i >= 2);
}

