// 6.  Write a program in C++ to find the number and sum of all integers between 100 and 200 which are divisible by 9. 

#include <iostream>
using namespace std;

int main()
{
    int n1 = 100, n2 = 200;  
    int sum = 0;            
    int count = 0;          

    for (int i = n1; i <= n2; i++)
    {
        if (i % 9 == 0) 
        {
            sum += i;   
            count++;    
        }
    }

    cout << "Count of numbers divisible by 9 between 100 and 200: " << count << endl;
    cout << "Sum of numbers divisible by 9 between 100 and 200: " << sum << endl;

    return 0;
}
