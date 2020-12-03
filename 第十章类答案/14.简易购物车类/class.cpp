#include <iostream>
#include <cstring>
#include <stdlib.h>
#include "class.h"

Calculator::Calculator(const char *expr)
    :self_expression(new char[strlen(expr)+1]), total_expression(new char[strlen(expr)+1])
{
    for (int i = 0; i < strlen(expr); ++i) {
        self_expression[i] = expr[i];
    }
    self_expression[strlen(expr)] = '\0';

    if (self_expression[0] == '+')
        value = atoi((self_expression+1));
    else
        value = -atoi((self_expression+1));

    for (int i = 0; i < strlen(expr); ++i) {
        total_expression[i] = expr[i];
    }
    total_expression[strlen(expr)] = '\0';
}

Calculator & Calculator::combine(const Calculator & sa)
{
    char* temp = total_expression;
    total_expression = new char[strlen(total_expression)+strlen(sa.total_expression) + 1];
    strcat(temp, sa.total_expression);
    strcpy(total_expression, temp);

    delete [] temp;

    value += sa.value;
    return *this;
}

Calculator::~Calculator() {
    delete [] self_expression;
    delete [] total_expression;
}

void Calculator::print_value() const {
    std::cout<<"value is "<<value<<std::endl;
}

void Calculator::print_total_expression() const {
    std::cout<<total_expression<<std::endl;
}

void Calculator::print_self_expression() const {
    std::cout<<self_expression<<std::endl;
}


