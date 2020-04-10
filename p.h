#ifndef P_H_INCLUDED
#define P_H_INCLUDED

#include <iostream>
#include <cstring>
using namespace std;

class Person
{
private:
    char *name;
    char *surname;
    int year;
public:
    Person();
    Person(char *name, char *surname,int year);
    void setName(char *);
    void setSurname(char *);
    void setYear(int);
    char *getName(char *name) const;
    char *getSurname(char *surname) const;
    int getYear();

    void print();
    ~Person();

    bool operator ==(const Person& right);
    bool operator !=(const Person& right);
    bool operator >(const Person& right);
    bool operator <(const Person& right);
    bool operator >=(const Person& right);
    bool operator <=(const Person& right);
    friend ostream& operator << (ostream &out, const Person &pers);
    friend istream& operator >> (istream &in, Person &pers);
    Person& operator = (const Person &pers);
};


#endif // P_H_INCLUDED
