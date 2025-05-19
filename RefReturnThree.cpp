#include <iostream>
using namespace std;

int RefRetFuncTwo(int &ref){
    ref++;
    return ref; //반환형이 기본자료형 int이다
}

int main(void){
    int num1 = 1;
    int num2 = RefRetFuncTwo(num1);

    num1+=1;
    num2+=100;
     cout<<"num1: "<<num1<<endl;
    cout<<"num2: "<<num2<<endl;
    return 0;
}