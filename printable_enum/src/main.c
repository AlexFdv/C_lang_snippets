#include <stdio.h>
#include "../include/printable_enum.h"

#define LIST(X)\
    X(First), \
    X(Second), \
    X(Third)

#define COLORS(f)\
    f(Red), \
    f(Green), \
    f(Yellow)

void main()
{
    PRINTABLE_ENUM(NumbersEnum, LIST);
    PRINTABLE_ENUM(ColorsEnum, COLORS);

    printf("%s\n", ENUM_VAL_TO_STR(NumbersEnum, Second));
    printf("%s\n", ENUM_VAL_TO_STR(ColorsEnum, Green));
}
