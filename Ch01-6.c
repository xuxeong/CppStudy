/*
* 은행계좌 관리 프로그램
* - 기능1. 계좌개설
* - 기능2. 입금
* - 기능3. 출금
* - 기능4. 전체고객 잔액조회
*
* 가정
* - 통장의 계좌번호는 중복되지 아니한다 (중복검사X)
* - 입금 및 출금액은 무조건 0보다 크다 (입출금액 오류검사X)
* - 고객의 계좌정보는 계좌번호, 고객이름, 고객의 잔액, 이렇게 세가지만 저장 및 관리
* - 둘 이상의 고객 정보 저장을 위해서 배열을 사용
* - 계좌번호는 정수의 형태
*/

#include <stdio.h>
#define MAX 100

int main(){

    int option;
    int account_id[MAX];
    int id;
    char name[MAX][10];
    int balance[MAX];
    int deposit;
    int withdrawl;

    int find = 0;
    int count = 0;

    while(1){
        printf("-----Menu-----\n");
        printf("1. 계좌개설\n");
        printf("2. 입 금\n");
        printf("3. 출 금\n");
        printf("4. 계좌정보 전체 출력\n");
        printf("5. 프로그램 종료\n");
        printf("선택: ");
        scanf("%d", &option);

        if(option!=5){
            switch(option){
                case 1:
                    printf("\n[계좌개설]\n");
                    printf("계좌ID: ");
                    scanf("%d", &account_id[count]);
                    printf("이 름: ");
                    scanf("%s", &name[count]);
                    printf("입금액: ");
                    scanf("%d", &balance[count]);
                    count++;
                    continue;
                case 2:
                    printf("\n[입  금]\n");
                    printf("계좌ID: ");
                    scanf("%d", &id);
                    printf("입금액: ");
                    scanf("%d", &deposit);
                    for(int i=0; i<count;i++){
                        if(account_id[i]==id){
                            find = 1;
                            balance[i]+=deposit;
                            printf("입금완료\n");
                            break;
                        }
                    }
                    if(find != 1){
                        printf("계좌번호가 존재하지 않습니다.\n");
                    }
                    continue;
                case 3:
                    printf("\n[출  금]\n");
                    printf("계좌ID: ");
                    scanf("%d", &id);
                    printf("출금금액: ");
                    scanf("%d", &withdrawl);
                    for(int i=0; i<count;i++){
                        if(account_id[i]==id){
                            find = 1;
                            if(balance[i]>=withdrawl){
                                balance[i]-=withdrawl;
                                printf("입금완료\n");
                            }
                            else{
                                printf("잔액이 부족하여 출금이 불가합니다.\n");
                            }
                            break;
                        }    
                    }
                    if(find != 1){
                        printf("계좌번호가 존재하지 않습니다.\n");
                    }
                    continue;
                case 4:
                    for(int i=0; i<count; i++){
                        printf("\n계좌ID: %d\n", account_id[i]);
                        printf("이 름: %s\n", name[i]);
                        printf("잔 액: %d\n", balance[i]);
                    }
                    continue;
                default:
                    printf("잘못된 번호입니다.\n");
                    continue;
            }
        }
        printf("프로그램이 종료되었습니다.\n");
        break;
    }
    return 0;
}