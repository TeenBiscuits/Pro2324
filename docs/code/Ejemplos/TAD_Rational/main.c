// SPDX-FileCopyrightText: Facultade de Informática de A Coruña
//
// SPDX-License-Identifier: CC-BY-4.0

#include <stdio.h>

//#include "rational_struct.h"
//#include "rational_pointer.h"

int main() {
    Rational r1, r2, r3, r4, s;

    r1 = createRational(2, 3);
    r2 = createRational(5, 7);

    r3 = createRational(7, 3);
    r4 = createRational(5, 4);

    s = sum(r1, r2);
    printf("The sum is %d/ %d\n", numerator(s), denominator(s));
    s = sum(r3, r4);
    printf("The sum is %d/ %d\n", numerator(s), denominator(s));
}