## 함수 오버로딩의 이해
- C언어에서는 동일한 이름의 함수가 정의되는 것이 허용 X
- 함수호출 시 전달되는 인자를 통해서 호출하고자 하는 함수의 구분이 가능 -> C++에서는 이를 허용;
- 함수 오버로딩(Function Overloading): 동일한 이름의 함수; 매개변수 다름
- Ex.
```
int MyFunc(int num){
    num++;
    return num;
}

int MyFunc(int a, int b){
    return a+b;
}

int main(void){
    MyFunc(20);
    MyFunc(30, 40);
    return 0;
}
```
>C에서는 왜 안될까?
C++의 경우 함수를 찾을 때, '함수의 이름'과 '매개변수의 선언'을 확인함
그러나, C는 함수의 이름만을 확인하기 때문에 불가능

## 함수 오버로딩의 예
- 조건: 매개변수의 자료형 또는 개수가 다르다
- 잘못된 함수 오버로딩의 예 (반환형이 다른 경우)
```
void MyFunc(int n);
int MyFunc(int n);
```
*FunctionOverloading.cpp*