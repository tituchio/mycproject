#include <stdio.h>

char* someString = "20200407";


void substring(char* source, int from, int n, char* target) {
    int length, i;
    //get string length 
    for (length = 0; source[length] != '\0'; length++);

    if (from > length) {
        printf("Starting index is invalid.\n");
        return 1;
    }

    if ((from + n) > length) {
        //get substring till end
        n = (length - from);
    }

    //get substring in target
    for (i = 0; i < n; i++) {
        target[i] = source[from + i];
    }
    target[i] = '\0'; //assign null at last

}


int strCmpfunction(char *str);
int detProcCode(char* procCode);
void setStructureVal();

struct dataPerson {
    char name[10 + 1];
    int age;
};

char procCode[4 + 1];

int main(int argc, char** argv)
{
    
    int i;
    for (i = 0; i < argc; i++)
    {
        printf("INPUT %d[%s]\n", i, argv[i]);
    };

    char str[100], targetString[100];
    int from, n;

    substring(someString, 0, 4, targetString);
    printf("result %s\n", targetString);

    printf( "%2.2s-%2.2s-%.4s\n", someString + 6, someString + 4, someString);


    printf("%4.4s/%2.2s/%.2s\n", someString, someString+4, someString+6);

    char *strDate = "ALL";

    strncpy(procCode, argv[2], 4);

    printf("procCode----%s\n", procCode);
    
    detProcCode(procCode);

    strCmpfunction(strDate);

    setStructureVal();

    return 0;
}

int detProcCode(char* procCode) {
    
    if (strcmp(procCode, "ALL") == 0 || strcmp(procCode, "01") == 0) {
        printf("processing output :[%s]\n", procCode);
        printf("THIS IS PROCESS 01\n");
    }
    if (strcmp(procCode, "ALL") == 0 || strcmp(procCode, "02") == 0) {
        printf("processing output :[%s]\n", procCode);
        printf("THIS IS PROCESS 02\n");
    }
    if (strcmp(procCode, "ALL") == 0 || strcmp(procCode, "03") == 0) {
        printf("processing output :[%s]\n", procCode);
        printf("THIS IS PROCESS 03\n");
    }
    if (strcmp(procCode, "ALL") == 0 || strcmp(procCode, "04") == 0) {
        printf("processing output :[%s]\n", procCode);
        printf("THIS IS PROCESS 04\n");
    }
    if (strcmp(procCode, "ALL") == 0 || strcmp(procCode, "05") == 0) {
        printf("processing output :[%s]\n", procCode);
        printf("THIS IS PROCESS 05\n");
    }
    if (strcmp(procCode, "ALL") == 0 || strcmp(procCode, "05") == 0) {
        printf("processing output :[%s]\n", procCode);
        printf("THIS IS PROCESS 06\n");
    }
    if (strcmp(procCode, "ALL") == 0 || strcmp(procCode, "07") == 0) {
        printf("processing output :[%s]\n", procCode);
        printf("THIS IS PROCESS 07\n");
    }

    return 0;
}

int strCmpfunction(char * strDate) {
    char str1[] = "fresh";
    char str2[] = "refresh";

    int i, j, k;

    i = strcmp(str1, "fresh");
    j = strcmp(str1, str2);
    k = strcmp(str1, "f");

    printf("\n i: [%d], j: [%d], k: [%d]", i, j, k);


    if (strcmp(strDate, "ALL") == 0) {
        printf("strDate is ALL: %s", strDate);
    }
    else {
        printf("strDate is not All: %s", strDate);
    }
   
    return 0;
}

void setStructureVal() {
    struct dataPerson dperson;

    memset(&dperson, 0x00, sizeof(dperson));

    sprintf(dperson.name, "titus");
    dperson.age = 15;

    printf("dperson name [%s]\n", dperson.name);
    printf("dperson.age [%d]\n", dperson.age);

    if (dperson.age < 20) {
        sprintf(dperson.name, "damaiyanti");
        dperson.age = 23;
    }

    printf("dperson name [%s]\n", dperson.name);
    printf("dperson.age [%d]\n", dperson.age);
    strcpy(dperson.name, "irma");

    printf("dperson name [%s]\n", dperson.name);

}
