#include <cmath>
#include <cstdio>
#include <cstring>
using namespace std; //C의 표준에 정의된 함수들조차 이름공간 std안에 선언이 돼있어 이 문장이 삽입돼야 한다

int main(void){
    char str1[]="Result";
    char str2[30];

    strcpy(str2, str1);
    printf("%s: %f \n", str1, sin(0.14));
    printf("%s: %f \n", str2, abs(-1.25));
    return 0;
}