//Write a program to find the largest of three numbers.

#include <iostream> 
using namespace std;
int main()
{
    int num1,num2,num3;
    cout << "Enter the number1 :" << endl;
    cin >> num1; 
    cout << "Enter the number2 :" << endl;
    cin >> num2; 
    cout << "Enter the number3 :" << endl;
    cin >> num3; 
     

    if ( num1 >= num2 && num1 >= num3){

        cout << " The " << num1 << " is greatest .";

    }else if(num2 >= num1 && num1 >= num3){

        cout << " The " << num2 << " is greatest ."; 

    }else 

    cout << " The " << num3 << " is greatest .";

return 0;
}