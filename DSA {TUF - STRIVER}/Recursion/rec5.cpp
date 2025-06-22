#include<iostream>
using namespace std;

void reverseString(string &s, int i, int size){
    if(i >= size/2){
        return;
    }
    swap(s.at(i), s.at(size-i-1));
    reverseString(s, i+1, size);
}

bool checkPalindrome(string s,int size){
    string copyString = s;
    reverseString(s,0,size);
    if(copyString==s){
        return true;
    }
    return false;
}

int main()
{
    string inputStr;
    cout<<"Enter a string to check palindrome : ";
    cin>>inputStr;
    int size = inputStr.length();
    if(checkPalindrome(inputStr,size)){
        cout << "String is Palindrome."<<endl;
    }
    else{
        cout << "String is Not Palindrome."<<endl;
    }
    return 0;
}