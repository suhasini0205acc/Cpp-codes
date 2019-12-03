// Sum of even valued terms in fibonacci sequence 
//1 2 3 5 8 13 21 34 55 89....



#include<iostream>
using namespace std;
int main()
{
int a=1, b=2,sum=0,z=0;
while(sum<187)
{ printf("z value %d \n",z);
  if(z%2==0)
  sum=sum+z;
 z=a+b;
 a=b;
 b=z;
 }
printf("sum of even number is %d \n", sum);
return 0;
}
