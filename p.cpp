#include "p.h"
using namespace std;

Person::Person():Person("No name","No surname",0){}

Person::Person(char *name, char *surname,int year)
{
    this->name = 0;
    this->surname = 0;
    setName(name);
    setSurname(surname);
    setYear(year);
}

void Person::setName(char *name)
{
    delete [] this->name;
    this->name = new char[strlen(name)+1];
    strcpy(this->name,name);
}
void Person::setSurname(char *surname)
{
    delete [] this->surname;
    this->surname = new char[strlen(surname)+1];
    strcpy(this->surname,surname);
}
void Person::setYear(int year)
{
    this->year=year;
}
char *Person::getName(char *name) const
{
    strcpy(name, this->name);
    return name;
}
char *Person::getSurname(char *surname) const
{
    strcpy(surname, this->surname);
    return surname;
}
int Person::getYear()
{
    return year;
}
void Person::print()
{
    cout << "Name: " << name << endl;
    cout << "Surname: " << surname << endl;
    cout << "Year: " << year << endl;
}
Person::~Person()
{
    delete [] name;
    delete [] surname;
}
bool operator ==(const Person &left,const Person &right)
{
    return (strcmp(left.name,right.name)==0 && strcmp(left.surname,right.surname)==0 && (left.year==right.year));
}
bool operator !=(const Person& left,const Person& right)
{
    return !(strcmp(left.name,right.name)==0 && strcmp(left.surname,right.surname)==0 && (left.year==right.year));
}
bool operator >(const Person& left,const Person& right)
{
    return (left.year>right.year);
}
bool operator <(const Person& left,const Person& right)
{
    return (left.year<right.year);
}
bool operator >=(const Person& left,const Person& right)
{
    return (left.year>=right.year);
}
bool operator <=(const Person& left,const Person& right)
{
    return (left.year<=right.year);
}

ostream& operator << (ostream &out, const Person &pers)
{
    out << "Person(" << pers.name << ", " << pers.surname << ", " << pers.year << ")\n\n";
    return out;
}
istream& operator >> (istream &in, Person &pers)
{
    in >> pers.name;
    in >> pers.surname;
    in >> pers.year;
    return in;
}

Person& Person::operator = (const Person &pers)
{
    if(name) delete[] name;
    if(surname) delete[] surname;

    this->name = new char[strlen(pers.name)+1];
    strcpy(this->name,pers.name);

    this->surname = new char[strlen(pers.surname)+1];
    strcpy(this->surname,pers.surname);

    year = pers.year;

    return *this;
}
