// Q. Print the Name using Recursion

#include<iostream>
using namespace std;

void print(int i, string name, int num){
    cout<<name<<endl;
    if(i==num){
        return;
    }
    print(i+1,name,num);
}

int main()
{
    string name;
    cout<<"Enter Name: ";
    cin >> name;
    int num;
    cout<<"Enter Number of Repetitions: ";
    cin >> num;
    print(1,name,num);
    return 0;
}

/*

 Time Complexity - O(N)
 Space Complexity - O(N)
 
*/