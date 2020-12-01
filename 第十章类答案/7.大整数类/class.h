#ifndef CLASS_H
#define CLASS_H

class bigInt{
private:
    int first_index;
    int num[1000];
public:
    void read();
    bigInt();
    void show();
    friend bigInt sum(bigInt big1, bigInt big2);
};

#endif /* CLASS_H */