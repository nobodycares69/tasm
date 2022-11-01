#include <iostream.h>
#include <conio.h>

int add(int a, int b)
{
    int c;
    asm {
        mov ax,a
        mov bx,b
        add ax,bx
	    mov c,ax
    }
    return c;
}

int sub(int a, int b)
{
    int c;
    asm {
        mov ax, a
        mov bx, b
        sub ax, bx
        mov c, ax
    }
    return c;
}

int mul(int a, int b)
{
    int c;
    asm {
        mov ax,a
        mov bx,b
        mul bx
        mov c,ax
    }
    return c;
}

int div(int a, int b)
{
    int c;
    asm {
        mov ax, a
        mov bx, b
        div bx
        mov c, ax
    }
    return c;
}

int main()
{
    clrscr();
    int a, b, result, choice, flag = 1;
    cout << "Enter First Number : ";
    cin >> a;
    cout << "Enter Second Number : ";
    cin >> b;
    cout << "Enter:- \n\n1. Add\n2. Subtract\n3. Multiply\n4. Divide\n\nYour Choice : ";
    cin >> choice;

    switch (choice)
    {
    case 1:
        result = add(a, b);
        break;
    case 2:
        result = sub(a, b);
        break;
    case 3:
        result = mul(a, b);
        break;
    case 4:
        result = div(a, b);
        break;
    default:
        cout << "Invalid Choice!!";
        flag = 0;
    }

    if (flag)
    {
        cout << "Result : " << result;
    }
    getch();
    return 0;
}
