#include <iostream>

namespace BestComImpl{
    void Func(void){
        std::cout<<"BestCom이 정의한 함수"<<std::endl;
    }
}

namespace ProgComImpl{
    void Func(void){
        std::cout<<"ProgCom이 정의한 함수"<<std::endl;
    }
}

int main(void){
    BestComImpl::Func();
    ProgComImpl::Func();
    return 0;
}