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
    cout << "¬ведите данные первого экземпл€ра\n";
    Person a;
    cin >> a;
    cout << a;

    cout << "¬ведите данные второго экземпл€ра\n" ;
    Person b;
    cin >> b;
    cout << b;

    cout<<"¬ведите 1, чтобы вызвать перегруженный оператор ==.\n";
    cout<<"¬ведите 2, чтобы вызвать перегруженный оператор !=.\n";
    cout<<"¬ведите 3, чтобы сработал перегруженный оператор >.\n";
    cout<<"¬ведите 4, чтобы сработал перегруженный оператор <.\n";
    cout<<"¬ведите 5, чтобы сработал перегруженный оператор >=.\n";
    cout<<"¬ведите 6, чтобы сработал перегруженный оператор <=.\n";
    cout<<"¬ведите 7, чтобы сработал перегруженный оператор присваивани€.\n";
    cout<<"\n¬ведите 0 дл€ выхода.\n";
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
                        cout << "2 Ё «≈ћѕЋя–ј »ƒ≈Ќ“»„Ќџ" << endl;
                        else cout << "2 Ё «≈ћѕЋя–ј Ќ≈»ƒ≈Ќ“»„Ќџ" << endl;
                        cout << "—работал перегруженный оператор ==\n" << endl;
                        break;
                    }
                case 2:
                    {
                        bool l=(a!=b);
                        if(l==1)
                        cout << "2 Ё «≈ћѕЋя–ј Ќ≈»ƒ≈Ќ“»„Ќџ" << endl;
                        else cout << "2 Ё «≈ћѕЋя–ј »ƒ≈Ќ“»„Ќџ" << endl;
                        cout << "—работал перегруженный оператор !=\n" << endl;
                        break;
                    }
                case 3:
                    {
                        if(a>b)
                        cout << "a = " << a << "b = " << b << "a>b" << endl;
                        else cout << "a = " << a << "b = " << b << "a<b" << endl;
                        cout << "—работал перегруженный оператор >\n" << endl;
                        break;
                    }
                case 4:
                    {
                        if(a<b)
                        cout << "a = " << a << "b = " << b << "a<b" << endl;
                        else cout << "a = " << a << "b = " << b << "a>b" << endl;
                        cout << "—работал перегруженный оператор <\n" << endl;
                        break;
                    }
                case 5:
                    {
                        if(a>=b)
                        cout << "a = " << a << "b = " << b << "a>=b" << endl;
                        else cout << "a = " << a << "b = " << b << "a<=b" << endl;
                        cout << "—работал перегруженный оператор >=\n" << endl;
                        break;
                    }
                case 6:
                    {
                        if(a<=b)
                        cout << "a = " << a << "b = " << b << "a<=b" << endl;
                        else cout << "a = " << a << "b = " << b << "a>=b" << endl;
                        cout << "—работал перегруженный оператор <=\n" << endl;
                        break;
                    }
                case 7:
                    {
                        a=b;
                        cout << a << endl;// первый экземпл€р присваивает значени€ второго экземпл€ра
                        cout << "—работал перегруженный оператор присваивани€\n" << endl;
                        break;
                    }
            }
            if(k==0)
            break;
    }
    return 0;
}
