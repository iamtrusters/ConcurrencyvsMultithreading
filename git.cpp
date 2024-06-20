#include <iostream>
inline int add(int a, int b){
    return a+b;
}

int main(){
    std::cout << "Hello World!" << std::endl;
    std::cout << add(3,5);
    return 0;
}
