//Print the prime factor of the given number

#include<iostream>
#include<math.h>
using namespace std; 
void factorial(int n)
{ while(n%2==0)
  {  cout<<"2"<<" ";
     n=n/2;
  }
 for(int i=3;i<=sqrt(n);i=i+2)
{ 
  while(n%i==0) 
  { cout<<i<<" ";
    n=n/i;
  }
}
 if (n > 2)  
        cout << n << " "<<"\n";
}
int main()
{ int n;
  cout<<"Enter the number";
  cin>>n;
  factorial(n);
  return 0;
}

