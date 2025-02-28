#include "main.h"
#include <stdio.h>

int main(void)
{
    int n;

    n = 402;
    printf("n=%d\n", n);  // سيطبع 402
    reset_to_98(&n);  // تمرير عنوان المتغير n إلى الدالة
    printf("n=%d\n", n);  // سيطبع 98
    return (0);
}
