# COMP2113Project
## Guess the Song

Group 164

@daisy-dotcom | Oira Daisy Nyaboke (3035604477)

@kazaarun | Arun Kaza (3035435618)

The text-based game will be a guessing game where the first letters of the words of a well-known part of 
a song will be displayed. There will be a delay between the output of two adjacent letters that will reflect
the time interval between the words in the actual song. The goal of the game is to guess the title of the song
based on this information. Added hints, such as the artist name and the first letters of words in the title of the song, will be given upon the players request. However, requesting them would result in a reduction of points in case of the right answer. This game is inspired from the *Broken Karaoke* segment of the quiz show *Richard Osman's House of Games* (Bartlett, 2017). Each correct answer would increse the score by 10 points. Each clue costs 3 ponts.

### 1. Generation of Random Game Sets/Events

There will be 3 levels of difficulty namely beginner, intermidiate and expert. They will guess 2, 4 and 8 song 
titles respectively from a set of eight songs. A random number generator will be used to select which song to 
have the player guess. The songs will be numbered from 1 - 8.

### 2. Dynamic Memory Management

In order to keep track of the songs already guessed by the player a dynaimc array will be initilized at the start 
of the game. Its size will correspond to the total number of songs to be guessed based on the level of difficulty
chosen. The number of the song correctly guessed will be added to the array.

### 3. Data Structures for Storing Game Status & File Input/Output

When the player chooses to save their current game, the player's progress out of the total number of song titles to be guessed 
will be stored as an integer e.g ( 3/8 ; 3 out of 8 songs correctly guessed for an expert ) and the number of the the correclty
guessed songs will be determined from the aforementioned dymanic array. Another integer variable will store the current score. This information will be saved in a file, save.txt. To load a saved game, the program will first determine whether the file exists and if it does, proceeds to continue the game.

### 4. Program Codes in Multiple Files

There will be separate files for functions controlling the main menu of the game, song selection, game play and the reloading of a
saved game. 

References

Bartlett, O. (Director). (2017). Richard Osman's House of Games [Television Series]. United Kingdom: BBC Two.

