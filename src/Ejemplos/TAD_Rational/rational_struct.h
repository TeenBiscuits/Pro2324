// SPDX-FileCopyrightText: Facultade de Informática de A Coruña
//
// SPDX-License-Identifier: CC-BY-4.0

#ifndef TAD_Rational_RATIONAL_STRUCT_H
#define TAD_Rational_RATIONAL_STRUCT_H

typedef struct Data Rational;
struct Data {
    int num;
    int den;
};

Rational createRational(int n, int d);

int numerator(Rational r);

int denominator(Rational r);

Rational sum(Rational r1, Rational r2);

#endif // TAD_Rational_RATIONAL_STRUCT_H
