#include<iostream>

void swap(int &a, int &b){
    a = a^b;
    b = a^b;
    a = a^b;
}

int main()
{
    int a = 10, b =5;
    swap(a,b);
    printf("a:%d, b:%d",a,b);
}