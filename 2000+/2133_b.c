#include <stdio.h>

int isleap( int y )
{
    if ( y % 4 == 0 && y % 100 != 0 || y % 400 == 0 )
        return 1;
    else return 0;
}

int legal( int y, int m, int d )
{
    if ( y <= 0 || y >= 10000 || m <= 0 || m >= 13 || d <= 0 || d >= 32 )
        return 0;
    if ( ( m == 2 && ( isleap(y) == 0 ) && d >= 29 ) ||
         ( m == 2 && ( isleap(y) == 1 ) && d >= 30 ) )
        return 0;
    if ( (m == 4 || m == 6 || m == 9 || m == 11) && d == 31 )
        return 0;
    return 1;
}

int leap( int y )
{
    int res = 0;
    int i;

    for ( i = 4; i < y; i += 4 ) {
        if ( isleap(i) == 1 ) {
            res++;
        }
    }
    return res;
}


int work( int y, int m, int d )
{
    int res = d;
    int i;
    int month[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};


    for ( i = 1; i < m; ++i ) {
        res += month[i];
    }

    res += 365 * (y-1);
    res += leap(y);
    if ( isleap(y) != 0 && m > 2 ) res++;

    return res % 7;
}


int main()
{
    int y, m, d;
    int res;

    while ( ~scanf( "%d %d %d", &y, &m, &d ) ) {
        if ( legal(y, m, d) == 0 ) {
            puts( "illegal" );
            continue;
        }

        res = work(y, m, d);
        switch(res) {
        case 0: puts( "Sunday" ); break;
        case 1: puts( "Monday" ); break;
        case 2: puts( "Tuesday" ); break;
        case 3: puts( "Wednesday" ); break;
        case 4: puts( "Thursday" ); break;
        case 5: puts( "Friday" ); break;
        case 6: puts( "Saturday" ); break;
        }
    }
    return 0;
}
