#ifndef CLASS_H
#define CLASS_H

 class pet {
 protected:
    char name[20];
    int age;
    char animal_name[20];
 public:
    pet(const char* name, int age);
    void print();
};

class dog: public pet{
public:
    dog(const char* name, int age);
};

class cat: public pet{
public:
    cat(const char *name, int age);
};

#endif //CLASS_H
