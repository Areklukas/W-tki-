#include <iostream>
#include <vector>
#include <thread>
using namespace std;
void pierwsze()
{
    //kod na liczby pierwsze
}
unsigned long liczby_fib()
{
    //kod na liczby fibonacciego
}
int main()
{
    vector <thread *> threads1;
    thread *watek = new thread(pierwsze);
    threads1.push_back(watek);
    thread *watek2 = new thread(liczby_fib);
    threads1.push_back(watek2);
    for (vector<thread *>::iterator it = threads1.begin(); it != threads1.end(); ++it)
    {
        (*it)->join(); //tablica wskaźników na wątki, a it to wskaźnik na wskaźnik
        delete *it;
    }
return 0;
}
