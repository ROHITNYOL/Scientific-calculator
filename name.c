#include <stdio.h>
#include <math.h>
#include <stdlib.h>
float addition(float arr[],int n){
        printf("Enter desired number of values :-\n");
                float sum = 0;
                for(int i=0;i<n;i++){
                scanf("%f",&arr[i]);
                sum  += arr[i];
                }
                return sum;
        }
void subtraction(float arr[],int n){
                float difference;
                printf("Enter the number from which values are going to subtracted :");
                scanf("%f",&difference);
                printf("Enter desired number of values :-\n");
                for(int i=0;i<n;i++){
                scanf("%f",&arr[i]);
                difference  -= arr[i];
                }
                printf("Result = %f\n", difference);
        }
void multiplication(float arr[],int n){
        printf("Enter desired number of values :-\n");
                float  multiply= 1;
                for(int i=0;i<n;i++){
                scanf("%f",&arr[i]);
                multiply *= arr[i];
                }
                printf("Result = %f\n",multiply );
        }
void division(float arr[],int n){
                float divisionans;
                printf("Enter the value from which values are going to be divided : ");
                scanf("%f",&divisionans);
                printf("Enter desired number of values :-\n");
                for(int i=0;i<n;i++){
                scanf("%f",&arr[i]);
                divisionans  /= arr[i];
                }
                printf("Result = %f\n", divisionans);
        }

int main(){
        printf("NUMBER CODES FOR RESPECTIVE MATHEMATICAL FUNCTIONS :-\n");
        printf("1-->ADDITION\n2-->SUBTRATION\n3-->MULTIPLICATION\n4-->DIVISION\n5-->REMAINDER\n6-->COSINE\n7-->COSECANT\n8-->EXPONENTIAL\n9-->SECANT\n10-->COTANGENT\n11-->SQUARE ROOT\n12-->SINE INVERSE\n13-->COSINE INVERSE\n14-->LOG TO THE BASE 10\n15-->LOG TO THE BASE e\n16-->TAN INVERSE\n17-->POWER\n18-->SINE\n19-->TANGENT\n");
        float* arr;
        int n;

        while(1){
        int number;
        printf("Enter the number code of desired operator : ");
        scanf("%d",&number);
        float a;
        float b;
  

        switch(number){

        case 1:
                printf("How many numbers are going to be added : ");
                scanf("%d",&n);
                arr=(float*)malloc(n*sizeof(float));
                float x = addition(arr,n);
                printf("RESULT = %f\n",x);
                break;
        case 2:
                printf("How many numbers are going to be subtracted : ");
                scanf("%d",&n);
                arr=(float*)malloc(n*sizeof(float));
                subtraction(arr,n);
                break;
        case 3:
                printf("How many numbers are going to be multiplied : ");
                scanf("%d",&n);
                arr=(float*)malloc(n*sizeof(float));
                multiplication(arr,n);
                break;
        case 4:
                printf("How many numbers are going to be divided : ");
                scanf("%d",&n);
                arr=(float*)malloc(n*sizeof(float));
                division(arr,n);
                break;
        case 5:
                printf("Enter divident : ");
                scanf("%f", &a);
                printf("Enter divisor: ");
                scanf("%f", &b);
                int c=(int)a;
                int d=(int)b;
                printf("Remainder is : %d  ",((int)c%d));
                printf("Quotient is : %d \n",((int)c/d));
                break;
        case 6:
                    printf("Enter angle in degree: ");
                scanf("%f", &a);
                printf("Result = %lf\n", cos(a*(3.14159265/180)));
                break;
        case 7:
                   printf("Enter angle in degree: ");
                scanf("%f", &a);
                printf("Result = %lf\n", (1/sin(a*(3.14159265/180))));
                break;
        case 8:
                printf("Enter a number: ");
                scanf("%f", &a);
                printf("Result = %f\n", (exp((double)a)));
                break;
        case 9:
                      printf("Enter angle in degree: ");
                scanf("%f", &a);
                printf("Result = %lf\n", (1/cos(a*(3.14159265/180))));
                break;
        case 10:
                 printf("Enter  angle in degree: ");
                scanf("%f", &a);
                printf("Result = %lf\n", (1/tan(a*(3.14159265/180))));
                break;
        case 11:
                printf("Enter a number: ");
                scanf("%f", &a);
                printf("Result = %f\n", (sqrt((double)a)));
                break;
        case 12:
                 printf("Enter a real number between 0 to 1 : ");
                scanf("%f", &a);
                printf("Result = %lf(in degree)\n", (asin((double)a))*57.2957795);
                break;
        case 13:
                printf("Enter a real number between 0 to 1: ");
                scanf("%f", &a);
                printf("Result = %lf(in degree)\n", (acos((double)a))*57.2957795);
                break;
        case 14:
                printf("Enter a positive number: ");
                scanf("%f", &a);
                printf("Result = %f\n", (log10((double)a)));
                break;
        case 15:
                printf("Enter a positive number: ");
                scanf("%f", &a);
                printf("Result = %f\n", (log((double)a)));
                break;
        case 16:
                printf("Enter a real number: ");
                scanf("%f", &a);
                printf("Result = %lf(in degree)\n", (atan((double)a))*57.2957795);
                break;
        case 17:
                printf("Enter a base: ");
                scanf("%f", &a);
                printf("Enter a exponent: ");
                scanf("%f", &b);
                printf("Result = %f\n", pow(a,b));
                break;
        case 18:
                printf("Enter angle in degree: ");
                scanf("%f", &a);
                printf("Result = %lf\n", sin(a*(3.14159265/180)));
                break;
        case 19:
                printf("Enter angle in degree: ");
                scanf("%f", &a);
                printf("Result = %lf\n", tan(a*(3.14159265/180)));
                break;
        default:
                printf("Enter a correct operator \n");
                return 0;

        }
        }
}

