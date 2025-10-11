#include <stdio.h>  //전처리기 명령어
//stdio.h라는 라이브러리를 여기에 추가하라는 뜻임


typedef struct Node
{
    Node* next;
    int value;
} Node;
typedef struct LinkedList
{
    Node* firstNode;
    Node* endNode;
    int length;
} LinkedList;
//main 함수 프로그램의 엔트리 포인트(시작점)임
void main()
{
    int i = 10;
    char ch = '0A';

    printf("Hello, C!!\n");
    //;는 이 명령의 끝을 나타내는 문자 없으면 오류남
} 