#include <iostream>

namespace Hybrid{
    void HybFunc(void){
        std::cout<<"So simple function!"<<std::endl;
        std::cout<<"In namespace Hybrid!"<<std::endl;
    }
}

int main(void){
    using Hybrid::HybFunc; //이렇게 main함수 내에 선언할 경우
    HybFunc(); // 지역변수의 선언과 마찬가지로, main함수를 벗어나면 효력을 잃게됨
    return 0;
}