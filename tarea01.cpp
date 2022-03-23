#include <iostream>
#include <cmath>

int main(void)
{
double sum = 0;

int n = 0;
for(n=10 ; n <= 100; n=n+1)
    {
       if(n%2 != 0)
         {
	  sum=(1.0/n)+sum;
	  
	}
      
    }

 std::cout<< "la suma de los inversos de los numeros impares del 10 al 100 es "<<sum<<"\n";

  return 0;

 
}
