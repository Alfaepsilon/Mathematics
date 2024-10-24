//https://numericalmethodstutorials.readthedocs.io/en/latest/fixed.html
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

void a1(){
    #define g(x) 1/(2 + pow(x,2))
    #define gd(a0) -2 * a0 * (1/pow(2 + pow(a0, 2), 2))
    #define f(x) 1/(2 + pow(x, 2)) - x
    #define MAX_COUNT 5000
    int count=0;
    float x0=0,x1=0,error=0;
    char iffound=0;
    printf("Please enter the initial value: ");
    scanf("%f",&x0);
    do{
            x1=g(x0);
            error=fabs(x1-x0);
            if(count==0)
            {
                    if(gd(x0)>1){
                            printf("\nThe equation is not convergent");
                            iffound=1;
                            break;
                    }
                    else{
                            printf("\n   i    xi      f(xi)          error");
                            printf("\n-------------------------------------------");
                    }
            }
            printf("\n %3d  %3.5f    %3.5f  %3.5f",count,x0,f(x0),count==0?0:error);
            x0=x1;
            count++;
    }while(error>0.0001 && count<MAX_COUNT);

    if(!iffound)
            printf("\nThe required root is: %f\n",x0);
}

int main()
{
    a1();
    return 0;
}
