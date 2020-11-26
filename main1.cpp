#include <iostream>

int main(){
    int a = 10;
    int* p = &a;
    int** pp = &p;

    std::cout<<p <<" "<<*p <<std::endl;
    std::cout<<pp <<" "<<*pp <<" "<<**pp << std::endl;
    
}