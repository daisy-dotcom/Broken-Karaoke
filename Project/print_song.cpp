#include<string>
#include<iostream>
#include<sstream>
#include<thread>
#include<chrono>
#include<iomanip>
#include "struct.h"

using namespace std;

Game_Data print_song( int num, int genre){

        Game_Data song;
        if (genre = 1) {
          switch(num){

            case 1 :
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

            case 2 :
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

            case 3 :
            song = {"I 0.49 D 0.24 M 1.22 T 0.28 S 0.38 L 0.36 I 0.29 endl "
                    "C 0.35 A 0.35 M 0.69 T 0.44 endl "
                    "L 0.86 A 0.22 S 0.26 S 0.51 endl "
                    "I 1.24 J 0.59 W 1.38 endl "
                    "F 0.42 W 0.42 A 0.37 A 0.31 S 0.31 endl "
                    "F 0.77 M 0.49 G endl",
                    "my girls", "M G"};
            break;

            case 4 :
            song = {"W 0.31 A 0.42 T 0.30 O 0.26 Y 0.29 L 0.42 I 0.28 O 0.30 A 0.36 R 1.20 endl "
                    "Y 0.40 T 0.87 I 0.47 S 0.41 U 1.04 endl "
                    "W 0.25 A 0.26 T 0.23 O 0.19 A 0.30 P 0.40 P 1.25 endl "
                    "I 0.37 A 0.46 T 0.39 Y 0.44 endl "
                    "D 0.24 Y 0.38 K 0.24 T 0.20 Y 0.25 T 3.5 endl "
                    "A 0.45 I 0.21 L 0.26 W 0.22 Y 0.34 D 0.33 endl "
                    "D 0.22 Y 0.21 K 0.22 T 0.21 Y 0.24 T endl ",
                    "toxic", "T"};
            break;

            case 5 :
            song = {"A 0.19 W 0.39 N 0.31 B 0.24 R 2.55 endl "
                    "I 0.36 D 0.24 R 0.21 I 0.20 O 0.29 B 1.08 endl "
                    "T 0.23 K 0.21 O 0.21 L 0.25 J 0.26 A 0.23 F 0.24 U 1.23 endl "
                    "W 0.24 C 0.18 A 0.22 D 0.25 K 0.53 O 0.17 B 0.64 endl "
                    "L 0.20 M 0.23 B 0.18 Y 0.52 R 2.75 endl "
                    "Y 0.24 C 0.25 C 0.31 M 0.15 Q 0.18 B 1.00 endl "
                    "A 0.36 B 0.26 I 0.33 R 0.31 I 0.33 R 0.31 I 0.33 R 0.31 I 0.40 R 2.46 endl "
                    "L 0.15 M 0.16 L 0.14 T 0.23 F endl ",
                    "royals", "R"};
            break;

            case 6 :
            song = {"W 0.37 T 0.35 S 0.31 S 0.32 W 0.29 S 0.29 T 0.95 endl "
                    "T 0.28 Y 0.34 I 0.34 B 0.34 H 0.34 F 1.07 endl "
                    "S 0.33 I 0.57 A 0.57 B 0.36 Y 0.37 F 0.38 endl "
                    "T 0.25 A 0.43 O 0.44 I 0.19 S 0.21 I 0.22 O 0.19 U 0.15 T 0.23 E 0.76 endl "
                    "N 0.25 T 0.27 I 0.35 R 0.32 M 0.33 T 0.30 E 0.85 endl "
                    "K 0.30 T 0.36 W 0.30 S 0.43 H 0.29 E 0.31 O 0.83 endl "
                    "Y 0.18 C 0.18 S 0.19 U 0.31 M 0.41 U 1.33 endl "
                    "Y 0.18 C 0.18 S 0.19 U 0.31 M 0.41 U endl ",
                    "umbrella", "U"};
            break;

            case 7 :
            song = {"I 0.26 A 0.23 A 0.24 P 0.36 T 0.29 T 0.56 C 0.49 H 1.10 endl "
                    "A 0.25 O 0.34 M 0.33 C 0.33 I 0.38 S 0.62 O 0.68 Y 1.26 endl "
                    "W 0.31 H 0.24 T 0.29 T 0.74 G 0.67 endl "
                    "B 0.48 I 0.26 A 0.86 W 0.61 endl "
                    "W 0.30 A 0.27 T 0.27 P 0.62 W 0.41 M 0.81 F 0.36 T endl ",
                    "payphone", "P"};
            break;

            case 8 :
            song = {"I 2.35 G 0.59 S 1.94 F 0.57 T 0.34 C 2.09 endl "
                    "F 0.26 T 0.20 C 2.78 endl "
                    "I 2.28 G 0.48 L 1.31 L 0.60 T 0.80 D 0.54 E 1.77 endl "
                    "L 0.30 I 0.19 D 0.63 E 2.17 endl "
                    "I 1.88 G 0.81 F 1.47 L 0.74 A 0.53 B 0.52 T 0.34 T 0.25 N 1.20 endl "
                    "F 0.25 M 0.26 T 0.37 A 0.24 T 0.21 D 1.88 endl "
                    "I 2.35 G 0.59 S 1.94 F 0.57 T 0.34 C 2.09 endl "
                    "F 0.26 T 0.20 C endl ",
                    "chandelier", "C"};
            break;
}



          }
        } else if (genre = 2) {
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

          case 3 :
          song = {"S 0.64 M 1.27 Y 0.27 L 0.69 L 0.77 endl "
                  "F 0.55 O 0.30 C 1.39 endl "
                  "C 0.38 I 0.39 J 0.21 N 0.37 T 0.43 T 0.24 A 0.32 P 0.35 T 0.28 C 0.21 T 2.99 endl "
                  "S 0.83 M 0.77 Y 0.26 L 1.03 endl"
                  "L 0.63 R 1.13 T 0.26 V 1.25 endl"
                  "I 0.21 D 0.28 N 0.96 N 0.51 E 0.66 B 0.24 Y endl",
                  "location", "L"};
          break;

          case 4 :
          song = {"S 0.25 B 0.29 T 0.26 M 0.23 W 0.18 Y 0.40 L 0.16 L 1.92 endl "
                  "W 0.30 T 0.22 D 0.22 A 0.19 S 0.30 T 0.27 N 1.93 endl "
                  "U 0.54 T 0.42 S 2.27 endl "
                  "S 0.32 M 0.19 W 0.29 Y 0.24 L 0.30 L endl ",
                  "love lies", "L L"};
          break;

          case 5 :
          song = {"W 0.28 I 0.23 S 0.31 Y 0.56 F 3.42 endl "
                  "T 0.22 N 0.29 A 0.23 T 0.76 T 0.55 I 0.49 W 0.54 C 1.38 endl "
                  "C 0.32 Y 0.49 A 2.28 J 0.37 T 0.52 W 0.56 Y 0.58 A 3.53 endl "
                  "A 0.24 W 0.34 Y 0.23 S 3.67 endl "
                  "T 0.21 W 0.20 W 0.25 S 1.02 A 0.40 S 0.57 F 0.28 A 0.21 W 1.29 endl "
                  "C 0.28 G 0.26 Y 0.28 A 2.34 J 0.53 T 0.53 W 0.56 Y 0.54 A endl ",
                  "just the way you are", "J T W Y A"};
          break;

          case 6 :
          song = {"I 0.22 C 0.29 F 0.25 M 0.21 F 0.32 W 0.26 I 0.25 W 0.28 Y 0.71 endl "
                  "B 0.21 I 0.25 L 0.32 I 1.44 B 0.18 I 0.21 L 0.45 I 1.162 O 0.70 endl "
                  "I 0.22 C 0.29 F 0.25 M 0.21 F 0.32 W 0.26 I 0.25 W 0.28 Y 0.71 endl "
                  "B 0.21 I 0.25 L 0.32 I 1.44 B 0.18 I 0.21 L 0.45 I 1.162 O endl ",
                  "can't feel my face", "C F M F"};
          break;

          case 7 :
          song = {"M 0.20 M 0.32 B 0.38 A 0.27 T 0.22 B 0.21 T 0.20 T 0.17 Y 0.31 endl "
                  "A 0.15 T 0.19 L 0.43 I 0.20 B 0.21 T 0.26 Y 0.61 endl "
                  "D 0.23 R 0.68 I 0.18 B 0.24 T 0.22 Y 0.41 endl "
                  "I 0.14 C 0.17 T 0.10 Y 0.66 B 0.18 I 0.25 H 0.23 T 0.24 C endl ",
                  "milkshake", "M"};
          break;

          case 8 :
          song = {"Y 0.24 C 0.29 F 0.27 I 0.28 I 0.66 T 0.51 S 0.62 endl "
                  "O 0.24 A 0.23 D 0.27 L 0.42 T 0.33 T 0.44 H 0.32 endl "
                  "I 0.33 F 0.39 L 0.32 S 3.9 end l"
                  "I 0.20 F 0.39 L 0.32 S 3.9 endl "
                  "I 0.20 F 0.39 L 0.32 S endl ",
                  "feels like summer", "F L S"};
          break;

          }
        } else if (genre = 3) {
          switch (num) {
            case 1 :
            song = {"Y 0.62 I 0.28 G 0.46 T 0.41 M 0.42 H 0.46 T 0.18 T 0.22 O 0.21 T 0.43 R 0.48 endl "
                    "I 0.21 G 0.88 R 0.87 T 0.18 I 0.27 C 0.46 N 0.47 M 0.19 endl "
                    "I 0.23 G 0.43 T 0.45 M 0.44 H 0.44 T 0.21 T 0.24 O 0.24 T 0.43 R 0.42 endl "
                    "I 0.29 G 0.83 R 0.84 T 0.21 I 0.32 C 0.17 N 0.62 M endl",
                    "old town road", "O T R"};
            break;

            case 2 :
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

            case 3 :
            song = {"D O.20 A 0.17 N 1.72 endl "
                    "T 0.16 L 0.23 S 0.50 S 0.29 T 0.16 F 0.20 H 0.20 M 0.19 A 0.20 N 1.24 endl "
                    "H 0.19 A 0.18 A 0.70 T 0.18 T 0.25 D 0.23 A 0.18 N 1.57 endl "
                    "T 0.16 L 0.23 L 0.50 S 0.29 T 0.16 F 0.20 H 0.20 M 0.19 A 0.20 N 0.79 endl "
                    "A 0.41 A 0.36 A 0.26 N endl ",
                    "day n nite", "D N N"};
            break;

            case 4 :
            song = {"C 2.05 K 0.22 H 0.31 T 0.18 P 2.63 endl "
                    "C 1.84 K 0.27 H 0.29 T 0.24 P 1.88 endl "
                    "I 0.19 T 0.23 C 0.20 O 0.22 L 0 A 0.20 endl "
                    "I 0.19 T 0.23 C 0.20 O 0.22 G 0.25 O 0.43 W 2.21 endl "
                    "I 0.19 T 0.25 C 1.72 T 0.22 C 0.16 O 0.30 C 1.83 endl "
                    "W 0.20 K 0.27 I 0.38 R 1.78 W 0.20 K 0.27 I 0.38 R endl ",
                    "california love", "C L"};
            break;

            case 5 :
            song = {"I 0.24 H 0.69 T 0.50 L 0.90 D 0.60 W 0.50 I 0.42 C 0.45 M 0.48 A 0.34 T 0.69 endl "
                    "T 1.03 O 0.38 Y 0.48 I 0.35 M 0.48 B 3.60 endl "
                    "Y 0.61 W 0.29 M 0.43 E 1.39 endl "
                    "T 0.78 O 0.30 A 0.42 W 0.90 R 0.60 endl "
                    "N 0.63 I 0.30 J 0.50 B 1.03 O 0.79 D endl ",
                    "lucid dreams", "L D"};
            break;

            case 6 :
            song = {"I C H A"
                    "D Y T A M N A T"
                    "D Y T A M N A T"
                    "C I C H A"
                    "I I H A"};
            break;

            case 7 :
            song = {};
            break;

            case 8 :
            song = {};
            break;

          }
        } else if (genre = 4) {
          switch (num) {
            case 1 :
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

            case 2 :
            song = {};
            break;

            case 3 :
            song = {};
            break;

            case 4 :
            song = {};
            break;

            case 5 :
            song = {};
            break;

            case 6 :
            song = {};
            break;

            case 7 :
            song = {};
            break;

            case 8 :
            song = {};
            break;
          }
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
