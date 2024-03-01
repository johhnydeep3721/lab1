#include <stdio.h>

int main()
{

    int integerNum = 10;
    float floatNum = 5.2;
    double doubleNum = 19.99;
    char charNum = 65;
    printf("hello USTH world \n");
    printf("number is %d\n",integerNum);
    printf("number is %f\n",floatNum);
    printf("number is %lf\n",doubleNum);
    printf("char is %c",charNum);
    
    char myName[25];
    printf("\nWhat your name: ");
    fgets(myName,25,stdin);
    // scanf("%s", &myName);

    printf("\n My Name is %s", myName);

    printf("This is a newline character: \\n");
    printf("This is a vertical tab character: \\v");
    printf("This is a horizontal tab character: \\t");
    printf("This is a backspace character: \\b");
    printf("This is a question mark: ?");
    printf("This is a double quote: """);
    printf("This is a single quote: \\'");
    printf("This is a backslash: \\");

}