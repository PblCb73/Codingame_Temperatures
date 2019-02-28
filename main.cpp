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
    //Максимальное значение температуры
    const int maxValue( 5526 );
    //Минимальное значение температруы
    const int minValue( -273 );
    //Переменная для хранения абсолютного значения
    int absT( 0 );
    //Максимально допустимое значение температуры
    int min( maxValue );
    //Временная переменная для текущей  температуры которая ближе к 0
    int minT( 0 );
    
    int n; // the number of temperatures to analyse
    
    cin >> n; cin.ignore();
    
    for ( int i( 0 ) ; i < n; ++i ) {
        int t; // a temperature expressed as an integer ranging from -273 to 5526
        cin >> t; cin.ignore();
        //Если хотя бы один элемент равен 0, или 
        //не попадает в диапазон, то вываливаемся c 0
        if( t == 0 || ( t < minValue && t > maxValue ) ) 
        { 
            minT = 0; 
            break;
        }
        
        absT = abs( t );
        //Если проверяемая температура независимо от знака меньшеньше текущей 
        //то возьмем ее за ближайшую к 0
        if( absT < abs( min ) ){
            minT = min = t;
        }
        //Если проверяемая температура == текущей, 
        //то проверим знаки
        else if( ( absT == abs( min ) ) && ( t != minT ) ){
            minT = absT;
        }
    }
    cout << minT << endl;
}