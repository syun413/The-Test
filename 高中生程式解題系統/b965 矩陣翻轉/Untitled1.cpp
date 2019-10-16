#include <stdio.h>
#include <stdlib.h>
int s[100][100],MM[100];
int R , C , M ;
void action_1 ()   
{
    int s_cpy[100][100] , i , j ;
    for ( i = 0 ; i < R ; i ++ )
    {
	    for ( j = 0 ; j < C ; j ++ )
            s_cpy[ C - 1 - j ][ i ] = s[ i ][ j ] ;
    } 
    int temp = R ; R = C ; C = temp ;
    for ( i = 0 ; i < R ; i ++ )
    {
    	for ( j = 0 ; j < C ; j ++ )
            s[ i ][ j ] = s_cpy[ i ][ j ] ;
    }
} 
void action_2 ()  
{
    int s_cpy[100][100] , i , j ; 

    for ( i = 0 ; i < R ; i ++ )
	{
        for ( j = 0 ; j < C ; j ++ )
            s_cpy[ R - 1 - i ][ j ] = s[ i ][ j ] ;
    }
    for ( i = 0 ; i < R ; i ++ )
    {   
		 for ( j = 0 ; j < C ; j ++ )
            s[ i ][ j ] = s_cpy[ i ][ j ] ;
    } 
}
int main()
{
    int i , j ;
    while ( scanf ( "%d %d %d" , &R , &C , &M ) != EOF ){
        for ( i = 0 ; i < R ; i ++ )
            for ( j = 0 ; j < C ; j ++ )
                scanf ( " %d" , &s[ i ][ j ] ) ;
        for ( i = 0 ; i < M ; i ++ )
            scanf ( " %d" , &MM[ i ] ) ;
        for ( i = M - 1 ; i >= 0 ; i -- )
		{
            if ( MM[ i ] == 0 )
                action_1 () ;
            else
                action_2 () ;
        }
        printf ( "%d %d\n" , R , C ) ;
        for ( i = 0 ; i < R ; i ++ ){
            for ( j = 0 ; j < C - 1 ; j ++ )
                printf ( "%d " , s[ i ][ j ] ) ;
            printf ( "%d\n" , s[ i ][ C - 1 ] ) ;
        }
    }
    return 0 ;
}


