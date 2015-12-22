#include <stdio.h>
#include <stdlib.h>

int pushIntoArray( int index, int length ); //TEST
int noteToValue( char note, int sharps, int flats ); //TEST
int majorThird( int root ); //TEST
int perfectFifth( int root ); //TEST
int * majorChord( int root ); //TEST
void printChord( int * chord ); //TEST

char noteTable = {
	{'a', 'n', '\0'} ,
	{'a', 's', '\0'} ,
	{'b', 'n', '\0'} ,
	{'c', 'n', '\0'} ,
	{'c', 's', '\0'} ,
	{'d', 'n', '\0'} ,
	{'d', 's', '\0'} ,
	{'e', 'n', '\0'} ,
	{'f', 'n', '\0'} ,
	{'f', 's', '\0'} ,
	{'g', 'n', '\0'} ,
	{'g', 's', '\0'}};

int main(void)
{
	return 0;
}
