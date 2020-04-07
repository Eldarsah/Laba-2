#include <iostream>
#include <cstring>
#include "p.h"

using namespace std;

int main()
{
    setlocale(0, "");

    char *name = new char[100];
    char *surname = new char[100];
    int year;
    cout << "Введите данные первого экземпляра\n";
    Person a;
    cin >> a;
    cout << a;

    cout << "Введите данные второго экземпляра\n" ;
    Person b;
    cin >> b;
    cout << b;

    cout<<"Введите 1, чтобы вызвать перегруженный оператор ==.\n";
    cout<<"Введите 2, чтобы вызвать перегруженный оператор !=.\n";
    cout<<"Введите 3, чтобы сработал перегруженный оператор >.\n";
    cout<<"Введите 4, чтобы сработал перегруженный оператор <.\n";
    cout<<"Введите 5, чтобы сработал перегруженный оператор >=.\n";
    cout<<"Введите 6, чтобы сработал перегруженный оператор <=.\n";
    cout<<"Введите 7, чтобы сработал перегруженный оператор присваивания.\n";
    cout<<"\nВведите 0 для выхода.\n";
    int k;
    while(1)
    {
        cin >> k;
        while(k<0&&k>7)
        cin >> k;
            switch (k)
            {
                case 1:
                    {
                        bool r=(a==b);
                        if(r==1)
                        cout << "2 ЭКЗЕМПЛЯРА ИДЕНТИЧНЫ" << endl;
                        else cout << "2 ЭКЗЕМПЛЯРА НЕИДЕНТИЧНЫ" << endl;
                        cout << "Сработал перегруженный оператор ==\n" << endl;
                        break;
                    }
                case 2:
                    {
                        bool l=(a!=b);
                        if(l==1)
                        cout << "2 ЭКЗЕМПЛЯРА НЕИДЕНТИЧНЫ" << endl;
                        else cout << "2 ЭКЗЕМПЛЯРА ИДЕНТИЧНЫ" << endl;
                        cout << "Сработал перегруженный оператор !=\n" << endl;
                        break;
                    }
                case 3:
                    {
                        if(a>b)
                        cout << "a = " << a << "b = " << b << "a>b" << endl;
                        else cout << "a = " << a << "b = " << b << "a<b" << endl;
                        cout << "Сработал перегруженный оператор >\n" << endl;
                        break;
                    }
                case 4:
                    {
                        if(a<b)
                        cout << "a = " << a << "b = " << b << "a<b" << endl;
                        else cout << "a = " << a << "b = " << b << "a>b" << endl;
                        cout << "Сработал перегруженный оператор <\n" << endl;
                        break;
                    }
                case 5:
                    {
                        if(a>=b)
                        cout << "a = " << a << "b = " << b << "a>=b" << endl;
                        else cout << "a = " << a << "b = " << b << "a<=b" << endl;
                        cout << "Сработал перегруженный оператор >=\n" << endl;
                        break;
                    }
                case 6:
                    {
                        if(a<=b)
                        cout << "a = " << a << "b = " << b << "a<=b" << endl;
                        else cout << "a = " << a << "b = " << b << "a>=b" << endl;
                        cout << "Сработал перегруженный оператор <=\n" << endl;
                        break;
                    }
                case 7:
                    {
                        a=b;
                        cout << a << endl;// первый экземпляр присваивает значения второго экземпляра
                        cout << "Сработал перегруженный оператор присваивания\n" << endl;
                        break;
                    }
            }
            if(k==0)
            break;
    }
    return 0;
}
