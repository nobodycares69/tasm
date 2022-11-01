#include <iostream.h>
#include <conio.h>
int main()
{
    int a, b, result;
    clrscr();
    cout << "Enter a number: ";
    cin >> a;
    cout << "Enter Number of Shifts: ";
    cin >> b;

    asm {
        mov ax, a 
        mov cx, b 
	    shl ax, cl
	    mov result, ax
    }

    cout << "\nResult of " << b << " times Left Shift: " << result;

    asm {
        mov ax, a
        mov cx, b
        shr ax, cl
        mov result, ax
    }

    cout << "\nResult of " << b << " times Reft Shift: " << result;
    getch();
    return 0;
}