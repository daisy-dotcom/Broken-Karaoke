#include "rng.h"
#include "struct.h"
#include "print_song.h"
// Confirms the chosen song to be guessed hasn't
// been guessed already

Game_Data pick_song( int a[], int size, int genre, int round){

        int match = size;
        int num;

        while ( match != 0 ){

		match = size;

                num = random_number_generator();

                for ( int i = 0; i < size; i++ ){
                        if ( a[i] != num ){
                                --match;
                        }
                }
        }

        a[round-1] = num;

        Game_Data song = print_song(num, genre);

        return song;
}
