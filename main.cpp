#include <iostream>

using namespace std;

int wiek;

int main()
{
    cout << "Ile masz lat?" << endl;
    cin >> wiek;

    if (wiek>=18)
    {
        cout << "Jestes pelnoletni" << endl;

    }
    else
    {
        cout << "Jestes niepelnoletni" <<endl;

    }
    if (wiek>=35)
    {
        cout << "Mozesz kandydowac na prezydenta" <<endl;
    }
    else
    {
        cout << "Nie mozesz kandydowac na prezydenta" <<endl;
    }
    return 0;
}
