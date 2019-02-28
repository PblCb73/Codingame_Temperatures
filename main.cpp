#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/
int main()
{
    int n; // the number of temperatures to analyse
    cin >> n; cin.ignore();
    vector<int> temp( n );//Сразу же выделим под вектор память, и заполним вектор
    for_each( temp.begin(), temp.end(), [&](auto& value){ cin >> value; });
    //сортируем вектор, при этом если соседние значения по модулю равны, то первым будет без знака
    sort( temp.begin(),temp.end(), [](const int &x, const int &y){
        if( abs( x ) != abs( y ) ) return abs( x ) < abs( y );
        else return x > y;
    });
    //выведем результат, при этом проверим на 0
    if(temp.size()>0)
    cout << temp[ 0 ];
    else cout << 0;
}
