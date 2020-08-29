
#include<iostream> 
using namespace std; 

void bin(unsigned n) 
{ 
    unsigned i;
    
    for (i = 1 << 31; i > 0; i = i >> 1) 
        (n & i)? printf("1"): printf("0"); 
} 

void set(int & num,int pos) 
{ 
    unsigned int one = 1 << pos;
    num = num | one;

} 

void unset (int & num, int pos)
{
    unsigned int one = 1 << pos;
    unsigned int invertone = ~one;
    num = num & invertone;

}
int main() 
{ 
     int num = 4;
     set(num, 1); 
     cout << (int)(num) << endl; 

     unset(num, 2); 
     cout << (int)(num) << endl;
     return 0; 
} 
