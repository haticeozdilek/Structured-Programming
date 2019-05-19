#include <stdio.h>
#include <stdlib.h>

int katar_boyutu_bul( char [] );
int main( void )
{
	char test_katari[50];
	strcpy( test_katari, "ABCDEF" );
	printf( "Katar boyutu: %d\n", katar_boyutu_bul( test_katari ) );
	return 0;
}
int katar_boyutu_bul( char katar[] )
{
	int i;
	for( i = 0; katar[ i ]!='\0'; i++ );

	return i;
}
