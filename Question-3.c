#include <stdio.h>
#include <stdlib.h>
int check(char x)
{
    int flag=0;
    if(x=='+'||x=='-')
    {
        return flag;    
    }
    else
    {
        flag=1;
        return flag;
    }
}
int main() {
	//code
	int a,b,c,op1,op2;
	char x,y;
	double temp,ans;
    printf("Enter an expression: \n");
    scanf("%d %c %d %c %d",&a,&x,&b,&y,&c);		//a,b,c are numbers and x,y are operators
    if((a>=0&&a<=1000)&&(b>=0&&b<=1000)&&(c>=0&&c<=1000))
    {
        op1=check(x);					//check precedence
        op2=check(y);
        if(op1>op2)					//consider all cases
        {
            if(x=='*')
            {
                temp=a*b;
            }
            else
            {
                if(b==0)
                {
                    printf("Calculation error\n");
                    exit(0);
                }
                else
                {
                     temp=(double)a/b;
                }
            }
            if(y=='+')
            {
                ans=temp+c;
            }
            else
            {
                ans=temp-c;
            }
        }
        if(op1<op2)
        {
            if(y=='*')
            {
                temp=b*c;
            }
            else
            {
                if(c==0)
                {
                    printf("Calculation error\n");
                    exit(0);
                }
                else
                {
                     temp=(double)b/c;
                }
            }
            if(x=='+')
            {
                ans=temp+a;
            }
            else
            {
                ans=a-temp;
            }
        }
        if(op1==op2&&op1==0)
        {
            if(x=='+')
            {
                temp=a+b;
            }
            else
            {
                temp=a-b;
            }
            if(y=='+')
            {
                ans=temp+c;
            }
            else
            {
                ans=temp-c;
            }
        }
        if(op1==op2&&op1==1)
        {
            if(x=='*')
            {
                temp=a*b;
            }
            else
            {
                if(b==0)
                {
                    printf("Calculation error\n");
                    exit(0);
                }
                else
                {
                     temp=(double)a/b;
                }
            }
            if(y=='*')
            {
                ans=temp*c;
            }
            else
            {
                if(c==0)
                {
                    printf("Calculation error\n");
                    exit(0);
                }
                else
                {
                     ans=(double)temp/c;
                }
            }
        }
        //printf("%d %d %d\n",a,b,c);
        //printf("%c %c\n",x,y);
        //printf("%d %d %lf\n",op1,op2,temp);
        printf("Result: %lf",ans);
    }
    else
    {
        printf("Incorrect input: numbers cannot exceed 1000. Program terminated, please try again.\n");
    }
	return 0;
}
