#include<string>
#include<iostream>
#include<sstream>
#include<thread>
#include<chrono>
#include<iomanip>
#include "struct.h"

using namespace std;

Game_Data print_song( int num ){

        Game_Data song;
        switch(num){

        case 1 :
        song = {"S 1.03 S 0.52 T 0.24 L 0.51 T 1.79 endl "
                "I 0.52 R 0.55 O 0.49 T 0.26 D 0.49 T 0.25 G 0.79 H 0.75 endl "
                "S 0.53 W 0.53 H 0.78 H 0.460 W 0.26 T 1.54 endl "
                "N 0.54 T 0.51 G 0.78 F 0.71 E 2.08 endl S 0.56 P 0.46 Y 0.82 T 1.76 endl "
                "Y 0.25 S 0.52 T 0.51 Y 0.25 L 0.50 W 0.25 H 1.53 endl "
                "T 0.51 I 0.54 H 0.49 T 0.28 S 0.52 T 1.77 endl "
                "O 0.50 T 0.57 L 0.47 I 0.26 K 0.50 T 0.24 B endl ",
                "the less i know the better", "T L I K T B"};
        break;

        case 2 :
        song = {"I 0.49 D 0.24 M 1.22 T 0.28 S 0.38 L 0.36 I 0.29 endl "
                "C 0.35 A 0.35 M 0.69 T 0.44 endl "
                "L 0.86 A 0.22 S 0.26 S 0.51 endl "
                "I 1.24 J 0.59 W 1.38 endl "
                "F 0.42 W 0.42 A 0.37 A 0.31 S 0.31 endl "
                "F 0.77 M 0.49 G endl",
                "my girls", "M G"};
        break;

        case 3 :
        song = {"I 1.69 A 0.97 L 0.27 L 3.12 endl "
                "W 0.19 Y 1.92 endl "
                "B 0.2 T 0.21 C 0.24 B 1.01 A 0.2 U 3.31 endl "
                "N 0.2 I 0.69 H 0.6 T 0.42 I 0.46 H 0.38 P 0.38 T 0.27 C 2.58 endl "
                "T 0.22 L 0.25 A 1.83 D 0.46 G 0.16 O 0.19 B 0.23 A 0.47 N 2.04 endl "
                "C 0.22 O 0.23 Y 0.84 endl "
                "C 0.26 I 0.4 S 0.56 B 0.3 S 0.41 B 0.5 endl "
                "T 0.43 A 0.64 K 0.46 Y 0.27 endl "
                "N 0.37 I 0.3 W 0.16 D 0.26 T 0.3 endl "
                "W 0.24 E 1.9 A 0.79 T endl",
                "a little lost", "A L L"};
        break;

        case 4 :
        song = {"T 0.18 E 0.24 A 0.63 W 0.65 D 0.41 T 3.04 endl "
                "S 0.18 H 0.35 C 0.36 T 0.17 A 0.3 G 4.12 endl "
                "M 0.35 M 0.49 P 0.55 D 0.33 T 0.67 A 2.65 endl "
                "B 0.15 Y 0.15 C 0.4 T 0.37 T 0.68 A 0.23 G 2.35 endl "
                "E 0.2 O 0.23 L 1.68 L 1.19 endl "
                "E 0.17 N 0.21 G 0.19 E 0.21 P 0.28 T 0.25 M 0.23 N 0.36 N 0.15 N 0.47 endl "
                "M 0.24 D 0.2 L 1.26 O 0.51 N 0.61 endl "
                "M 0.33 Y 0.21 N 0.14 D 0.3 D 0.15 L 0.16 O endl ",
                "african giant", "A G"};
        break;

        case 5 :
        song = {"Y 0.62 I 0.28 G 0.46 T 0.41 M 0.42 H 0.46 T 0.18 T 0.22 O 0.21 T 0.43 R 0.48 endl "
                "I 0.21 G 0.88 R 0.87 T 0.18 I 0.27 C 0.46 N 0.47 M 0.19 endl "
                "I 0.23 G 0.43 T 0.45 M 0.44 H 0.44 T 0.21 T 0.24 O 0.24 T 0.43 R 0.42 endl "
                "I 0.29 G 0.83 R 0.84 T 0.21 I 0.32 C 0.17 N 0.62 M endl",
                "old town road", "O T R"};
        break;

        case 6 :
        song = {"B 0.2 I 0.57 H 0.59 endl "
                "C 0.19 A 0.55 I 0.41 Y 0.34 F 0.51 L 0.37 A 0.38 R 0.43 W 0.46 A 0.34 R 0.19 endl "
                "B 0.2 I 0.57 H 0.56 endl "
                "C 0.2 A 0.55 I 0.41 Y 0.34 F 0.51 L 0.44 H 0.34 I 0.54 T 0.24 T 0.83 endl "
                "B 0.2 I 0.57 H 0.35 endl "
                "C 0.2 A 0.55 I 0.41 Y 0.38 K 0.55 W 0.43 H 0.67 I 0.4 T 0.23 Y 0.83 endl "
                "B 0.2 I 0.57 H 0.59 endl "
                "C 0.2 A 0.55 I 0.41 Y 0.34 F 0.51 L 0.39 T 0.39 W 0.19 Y 0.17 W 0.4 T 0.18 D endl",
                "happy", "H"};
        break;

        case 7 :
        song = {
                "T 0.14 Y 0.42 L 0.54 I 0.22 T 0.24 D 1.1 endl "
                "U 0.17 I 0.13 S 0.21 B 0.39 Y 1.97 endl "
                "Y 0.14 T 0.17 S 2.2 endl "
                "I 0.18 T 0.12 Y 0.15 L 0.45 W 0.23 B 0.16 T 0.19 M 1.2 endl "
                "O 0.16 Y 0.14 B 0.22 L 0.54 I 0.22 T 0.24 D 1.15 endl "
                "U 0.17 I 0.16 S 0.19 B 0.39 Y 1.99 endl "
                "Y 0.15 T 0.17 S 2.2 endl "
                "Y 0.15 T 0.17 S endl",
                "sunflower" , "S"};
        break;

        case 8 :
        song = {
                "Y 0.22 U 0.23 T 0.21 C 0.25 M 0.19 O 0.24 M 0.24 C 2.69 endl "
                "L 0.2 N 0.19 W 0.19 Y 0.25 N 0.92 M 0.87 L 0.88 endl "
                "C 0.25 M 0.19 O 0.24 M 0.24 C 2.65 endl "
                "L 0.2 N 0.19 W 0.19 Y 0.25 N 0.92 M 0.87 L 0.88 endl "
                "I 0.23 K 0.17 W 0.25 T 0.19 H 0.24 B 2.48 endl "
                "T 0.22 C 0.21 O 0.21 M 0.24 O 0.25 T 2.42 endl "
                "I 0.23 K 0.17 W 0.25 T 0.19 H 0.24 B 2.48 endl "
                "T 0.22 C 0.21 O 0.21 M 0.24 O 0.25 T 2.42 endl",
                "hotline bling", "H B"};
        break;

        }

        stringstream block;

        block << song.lyrics ;

        string letter;

        cout << flush;
        while ( block >> letter ){


                if ( isdigit(letter[0]) ){
                int time = stod(letter)*1000 ;
                this_thread::sleep_for( chrono::milliseconds(time) ) ;

                }

                else if ( letter == "endl" ){
                cout << endl ;
                }

                else{
                cout << setw(5);
                cout << letter << " " << flush;
                }
        }

        return song;
}
