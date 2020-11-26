#include <iostream>

int main(){

    std::cout<<"Hello world!\n";
    std::cout<<"test\n";
    std::cout<<"This is main branch test";
    std::cout<<"Trying to merge with pointers branch!";

    //below there should be some space and some variables/pointers!
  
    int a = 10;
    int* p = &a;
    int** pp = &p;
    std::cout<<p <<" "<<*p <<std::endl;
    std::cout<<pp <<" "<<*pp <<" "<<**pp << std::endl;
    
 }