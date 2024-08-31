#include <stdio.h>

int main() {

int x, y, *ptr1, *ptr2;
x = 10;
y = 5;
ptr1 = &x;
ptr2 = &y;
*ptr1 = *ptr1 + *ptr2;
y = *ptr1 - *ptr2;
ptr2 = ptr1;
(*ptr2)--;
*ptr1 = *ptr1 + 3;
return 0;
}