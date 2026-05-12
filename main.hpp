#include <iostream>
using namespace std;

int hanoi(int n, char from, char to, char aux);

int hanoi(int n, char from, char to, char aux)
{
    static int count = 0;
    if (n == 1){
        count ++;
        return count;
    }
    hanoi(n-1, from, aux, to);
    count++;
    hanoi(n-1, aux, to, from);
    return count;
    // TODO
}
