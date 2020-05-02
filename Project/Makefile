FLAGS = -pedantic-errors -std=c++11

rng.o: rng.cpp rng.h
	g++ $(FLAGS) -c $<

print_song.o: print_song.cpp struct.h
	g++ $(FLAGS) -c $<

pick_song.o: pick_song.cpp rng.h struct.h print_song.h
	g++ $(FLAGS) -c $<

is_answer.o: is_answer.cpp is_answer.h
	g++ $(FLAGS) -c $<

save_game.o: save_game.cpp save_game.h
	g++ $(FLAGS) -c $<

play_game.o: play_game.cpp struct.h save_game.h play_game.h
	g++ $(FLAGS) -c $<

reload_game.o: reload_game.cpp play_game.h struct.h save_game.h reload_game.h
	g++ $(FLAGS) -c $<

main_menu.o: main_menu.cpp reload_game.h play_game.h main_menu.h
	g++ $(FLAGS) -c $<

main.o: main.cpp reload_game.h play_game.h
	g++ $(FLAGS) -c $<

game: rng.o pick_song.o print_song.o is_answer.o save_game.o \
play_game.o reload_game.o main_menu.o main.o
	g++ $(FLAGS) $^ -o $@

clean:
	rm -r *.o game

.PHONY: clean
