#include <iostream>

using namespace std;

void toH(int n, char source, char spare, char target)
{
    if( n != 0 ) 
    {
        toH( n-1, source, target, spare );
        cout << source << "->" << target << endl;
        toH( n-1, spare, source, target );
    }
}

int main()
{
    int x;
    cin >> x;
    toH(x, 'A', 'B', 'C');
    return 0;
}
