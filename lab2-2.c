#include<stdio.h>

int main(){
    int i;
    int *ptr;
    int **dptr;

    i=1234;
    printf("--------[������] [2018038051]---------\n\n");
    printf("[checking values before ptr = &i]\n");//������ ������ i�� �ּҰ��� �ֱ� �� üũ
    printf("value of i == %d\n",i); //i�� �� ���
    printf("address of i == %p\n",&i); //i�� �ּҰ� ���
    printf("value of ptr == %p\n",ptr); //ptr�� �� ��� �ǹ̾��� ���� �ִ�.
    printf("address of ptr == %p\n",&ptr);//ptr�� �ּҰ� ���

    ptr=&i; /*ptr is now holding the address of i // ptr�� i�� �ּҰ��� ����*/

    printf("\n[checking values after ptr=&i]\n");
    printf("value of i == %d\n",i); 
    printf("address of i == %p\n",&i);
    printf("value of ptr == %p\n",ptr); //ptr�� i�� �ּҰ��� ������ ��. 
    printf("address of ptr == %p\n",&ptr);
    printf("value of *ptr == %d\n",*ptr); //ptr�� ������ ���� i�� ��

    dptr=&ptr; /*dptr is now holding the address of ptr*/ //dptr �� ptr�� �ּҰ��� ����

    printf("\n[checking values after dptr=&ptr]\n");
    printf("value of i == %d\n",i);
    printf("address of i == %p\n",&i);
    printf("value of ptr == %p\n",ptr);
    printf("address of ptr == %p\n",&ptr);
    printf("value of *ptr == %d\n",*ptr);
    printf("value of dprt == %p\n",dptr); //dptr�� ���� ptr�� ����Ű�Ƿ� ptr�� �ּҰ��� ����
    printf("address of dptr == %p\n",&dptr);
    printf("value of *dptr == %p\n",*dptr);//dptr�� ���������� ptr�� ����Ű�� i�� �ּҰ���.
    printf("value of **dptr == %d\n",**dptr);//**dptr�� i�� ��

    *ptr=7777; /*changing the value of *ptr */

    printf("\n[after *ptr = 7777]\n");//*ptr�� i�� ���� �ǹ��ϹǷ� i�� ���� �ٲ�.
    printf("value of i == %d\n",i);
    printf("value of *ptr == %d\n",*ptr);
    printf("value of **dptr == %d\n",**dptr);

    **dptr = 8888; /*changing the value of **dptr*/

    printf("\n[after **dptr = 8888]\n"); //**dptr�� i�� ���� �ǹ��ϹǷ� i�� ���� 8888�� �ȴ�.
    printf("value of i == %d\n",i);
    printf("value of *ptr == %d\n",*ptr);
    printf("value of **dptr == %d\n",**dptr);

    return 0;
}