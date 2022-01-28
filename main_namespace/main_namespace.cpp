#include <iostream>
#include"Valuer.h"
#include"Kol_Val.h"
using namespace value;
using namespace kol_val;
using  std::cout;
using  std::cin;
int main()
{
    int a;
    int vibor;
    Val* val;
    Kol_value kol;
    int ind;
    do
    {
        cout << "\t\tMenu\n";
        cout << "1- Add value\n";
        cout << "2- Shoow list\n";
        cout << "3 - Remove value\n";
        cout << " 0 - Exit\n";
        cout << "Enter your vibor: ";
        cin >> vibor;
        switch (vibor)
        {
        case 1:
            system("cls");
            cout << "Enter value: ";
            cin >> a;
            val = new Val(a);
            kol.Add(val);
            system("pause");
            system("cls");
            break;
        case 2:
            system("cls");
            kol.shoow();
            system("pause");
            system("cls");
            break;
        case 3:
            system("cls");
            cout << "Enter index dell value: ";
            cin >> ind;
            try
            {
            kol.Dell(ind);
            }
            catch (const char* ex)
            {
                cout << ex << "\n";
            }
            system("pause");
            system("cls");
            break;
        }
       
    } while (vibor != 0);
    
    
}

