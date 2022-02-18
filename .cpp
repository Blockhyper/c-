#include<iostream>
using namespace std;

int main()
{
   float a, an, b, sum, sub, mul, div;


cout << "Enter first no\n";
cin >> a;

cout << "Enter second no\n";
cin >> b;

cout << "1 for add, 2 for substraction, 3 for multiplication, 4 for divosion\n" << endl;
cin >> an;

                                                                                                                                                             

if(an == 1){
sum = a + b;
cout << "The sum of two no is: " << sum;
}
else if(an == 2){
sub = a - b;
cout << "The subtraction of two no is: " << sub;
}
else if(an == 3){
mul = a * b;
cout << "The product of two no is: " << mul;
}
 else if(an == 4){
div = a / b;
cout << "The quotient of two no is: " << div;
}
    return 0;
}
