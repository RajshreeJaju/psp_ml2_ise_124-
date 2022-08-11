// write the code
#include <stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
   float a,b,c;
   float dis,root1,root2,rlp,imp;
   
   printf("Enter the coeffient a,b,c");
   scanf("%f%f%f", &a,&b,&c);
   dis=(b*b)-(4*a*c);
   
   if(a==0){
       printf("It is linear equation\n");
       root1= b/c;
       root1=root2;
       printf("the roots are %f and %f\n",root1,root2);
   }
   
   else if (a!=0){
       if(dis==0){
           printf("It has real and equal roots\n");
           root1= (-b/(2*a));
           root2= root1;
           printf("The roots are %f and %f \n",root1,root2);
       }
       else if(dis>0){
           printf("it has real and distinct roots\n");
           root1= ((-b+ sqrt(dis))/2*a);
           root2=((-b- sqrt(dis))/2*a);
            printf("The roots are %f and %f \n",root1,root2);
       }
       else{
           printf("It has complex roots\n");
           rlp=(-b/(2*a));
           imp= (sqrt(-dis)/(2*a));
           printf("The roots are %f + i%f and %f - i%f\n",rlp,imp,rlp,imp);
       }
       
   }
   
 

}
