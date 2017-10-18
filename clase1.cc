//programa que suma los numeros impares entre el 1 y el 10

#include <iostream>
using namespace std;
int main ()
{ 
int sum=0;
int count=1;
while(count<=20)
{
if ((count%2)==0)
{
sum=sum+count;
}
count++;
}
cout << sum << endl;
return 0;
}
