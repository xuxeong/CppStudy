## 매개변수에 설정하는 '디폴트 값'의 의미
- ```int myFunc(int num=7)```이런식으로 매개변수를 선언하면
- **함수호출 시 인자를 전달하지 않으면 7이 전달된 것으로 간주하겠다.**라는 뜻
*DefaultValue1.cpp*

## 디폴트 값은 함수의 선언 부분에만 표현하면 된다
*DefaultValue2.cpp*

## 부분적 디폴트 값 설정
```
int func(int num1, int num2, int num3){} //이런 함수가 있을 때
int func(int num1=3, int num2=5, int num3=7){} // 전부 지정 O
int func(int num1, int num2=5, int num3=7){}  // 일부 지정 O
int func(int num1=3, int num3=5, int num3){} // 이건 X ;
//반드시 오른쪽 매개변수의 디폴트 값부터 채우는 형태로 정의해야 함
```
- 왜 오른쪽 부터 채워야 할까?
- 함수에 전달되는 인자가 왼쪽에서부터 오른쪽으로 채워지기 때문이다
*DefaultValue3.cpp*
