#include <stdio.h>
#include <stdlib.h>
int main() {
	//code
//	char name[200]; 
	int year,age;
    int strLen = 5;
    char ch;
    char* str = (char*)malloc(sizeof(char*) * strLen);
    int count = 0;
    printf("What is your name?\n");
    do
    {
        ch = getchar();
        count++;
        if (count >= strLen)
        {
            str = (char*)realloc(str, sizeof(char*) * (++strLen));
        }
        str[count-1] = ch;
    }
    while (ch != '\n');
    str[count-1] = '\0';
    
    
//	gets(name);
	printf("Hello, %s!\n",str);
	printf("What year were you born?\n");
	scanf("%d",&year);
	age=2021-year;
	printf("Congratulations you are %d old!\n",age);
	return 0;
}
