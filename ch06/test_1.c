#include <stdio.h>
int main()
{
    int num1, num2;
    char op;

    printf("�ǿ����� �Է� : ");
    scanf_s("%d %d", &num1, &num2);

    printf("������ �Է�: ");
    scanf_s("%c", &op, sizeof(op));
    switch (op)
    {
    case '+': printf("%d\n", num1 + num2); break;
    case '-': printf("%d\n", num1 - num2); break;
    case '*': printf("%d\n", num1 * num2); break;
    case '/': printf("%d\n", num1 / num2); break;

    return 0;
}