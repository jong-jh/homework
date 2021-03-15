#include <stdio.h>

int main(){
    printf("--------[������] [2018038051]---------\n\n");
    char charType;
    int integerType;
    float floatType;
    double doubleType;

    printf("Size of char : %ld byte\n",sizeof(charType));//char�� Ÿ���� ������ ũ�� : 1byte
    printf("Size of int : %ld byte\n",sizeof(integerType));//int�� Ÿ���� ������ ũ�� : 4byte
    printf("Size of float : %ld byte\n",sizeof(floatType));//float�� Ÿ���� ������ ũ�� : 4byte
    printf("Size of double : %ld byte\n",sizeof(doubleType));//double�� Ÿ���� ������ ũ�� : 8byte
    printf("==============================================\n");

    printf("Size of char: %ld byte\n",sizeof(char));//char�� Ÿ���� ũ�� : 1byte
    printf("Size of int: %ld byte\n",sizeof(int));//int�� Ÿ���� ũ�� : 4byte
    printf("Size of float: %ld byte\n",sizeof(float));//float�� Ÿ���� ũ�� : 4byte
    printf("Size of double: %ld byte\n",sizeof(double));//double�� Ÿ���� ũ�� : 8byte
    printf("==============================================\n");

    printf("Size of char* : %ld byte\n",sizeof(char*));//�����ͺ��� ũ��� ���ü���� ���� ������ ũ�⸦ ���´�.
    printf("Size of int* : %ld byte\n",sizeof(int*));//64bit �ü���� pc�� ������̶� 8byte�� ���� �� �˾Ҵ�.
    printf("Size of float* : %ld byte\n",sizeof(float*));//������� �ٸ��� 4byte�� ���� �˾ƺ� ��� 32bit�� �������� �ϸ� 4byte�� ���´ٰ� �Ͽ���.
    printf("Size of double* : %ld byte\n",sizeof(double*));
    printf("==============================================\n");

    return 0;
}