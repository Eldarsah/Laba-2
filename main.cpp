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
    cout << "������� ������ ������� ����������\n";
    Person a;
    cin >> a;
    cout << a;

    cout << "������� ������ ������� ����������\n" ;
    Person b;
    cin >> b;
    cout << b;

    cout<<"������� 1, ����� ������� ������������� �������� ==.\n";
    cout<<"������� 2, ����� ������� ������������� �������� !=.\n";
    cout<<"������� 3, ����� �������� ������������� �������� >.\n";
    cout<<"������� 4, ����� �������� ������������� �������� <.\n";
    cout<<"������� 5, ����� �������� ������������� �������� >=.\n";
    cout<<"������� 6, ����� �������� ������������� �������� <=.\n";
    cout<<"������� 7, ����� �������� ������������� �������� ������������.\n";
    cout<<"\n������� 0 ��� ������.\n";
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
                        cout << "2 ���������� ���������" << endl;
                        else cout << "2 ���������� �����������" << endl;
                        cout << "�������� ������������� �������� ==\n" << endl;
                        break;
                    }
                case 2:
                    {
                        bool l=(a!=b);
                        if(l==1)
                        cout << "2 ���������� �����������" << endl;
                        else cout << "2 ���������� ���������" << endl;
                        cout << "�������� ������������� �������� !=\n" << endl;
                        break;
                    }
                case 3:
                    {
                        if(a>b)
                        cout << "a = " << a << "b = " << b << "a>b" << endl;
                        else cout << "a = " << a << "b = " << b << "a<b" << endl;
                        cout << "�������� ������������� �������� >\n" << endl;
                        break;
                    }
                case 4:
                    {
                        if(a<b)
                        cout << "a = " << a << "b = " << b << "a<b" << endl;
                        else cout << "a = " << a << "b = " << b << "a>b" << endl;
                        cout << "�������� ������������� �������� <\n" << endl;
                        break;
                    }
                case 5:
                    {
                        if(a>=b)
                        cout << "a = " << a << "b = " << b << "a>=b" << endl;
                        else cout << "a = " << a << "b = " << b << "a<=b" << endl;
                        cout << "�������� ������������� �������� >=\n" << endl;
                        break;
                    }
                case 6:
                    {
                        if(a<=b)
                        cout << "a = " << a << "b = " << b << "a<=b" << endl;
                        else cout << "a = " << a << "b = " << b << "a>=b" << endl;
                        cout << "�������� ������������� �������� <=\n" << endl;
                        break;
                    }
                case 7:
                    {
                        a=b;
                        cout << a << endl;// ������ ��������� ����������� �������� ������� ����������
                        cout << "�������� ������������� �������� ������������\n" << endl;
                        break;
                    }
            }
            if(k==0)
            break;
    }
    return 0;
}
