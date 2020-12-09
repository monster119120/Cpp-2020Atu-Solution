#include "class.h"
#include <cstring>
#include <iostream>

pet::pet(const char *name, int age):animal_name("pet"){
    strcpy(this->name, name);
    this->age = age;
}

void pet::print() {
    std::cout<<"I am "<<name<<"'s "<<animal_name<<"! I am "<<age<<" years old."<<std::endl;
}

dog::dog(const char *name, int age) : pet(name, age) {
    char animal_name_temp[20] = "dog";
    strcpy(animal_name, animal_name_temp);
}

cat::cat(const char *name, int age) : pet(name, age) {
    char animal_name_temp[20] = "cat";
    strcpy(animal_name, animal_name_temp);
}
