# Makefile minimal... :
# cd /mnt/c/Users/Demay/Desktop/m1_POO/projet_poo
# make
# ./jeu


#?? pion (depend de piece) et echequier(depend de plato): verifier

jeu: main.o c_plato.o c_pos.o c_piece.o c_tour.o c_fou.o c_cavalier.o c_roi.o c_dame.o c_pion.o c_echequier.o
	g++ -o jeu main.o c_plato.o c_pos.o c_piece.o c_tour.o c_fou.o c_cavalier.o c_roi.o c_dame.o c_pion.o c_echequier.o

c_plato.o: c_plato.cpp
	g++ -o c_plato.o -c c_plato.cpp -Wall

c_pos.o: c_pos.cpp
	g++ -o c_pos.o -c c_pos.cpp -Wall

c_piece.o: c_piece.cpp
	g++ -o c_piece.o -c c_piece.cpp -Wall

c_pion.o: c_pion.cpp
	g++ -o c_pion.o -c c_pion.cpp -Wall

c_dame.o: c_dame.cpp
	g++ -o c_dame.o -c c_dame.cpp -Wall

c_roi.o: c_roi.cpp
	g++ -o c_roi.o -c c_roi.cpp -Wall

c_cavalier.o: c_cavalier.cpp
	g++ -o c_cavalier.o -c c_cavalier.cpp -Wall

c_fou.o: c_fou.cpp
	g++ -o c_fou.o -c c_fou.cpp -Wall

c_tour.o: c_tour.cpp
	g++ -o c_tour.o -c c_tour.cpp -Wall

c_echequier.o: c_echequier.cpp
	g++ -o c_echequier.o -c c_echequier.cpp -Wall

main.o: main.cpp c_pos.h c_plato.h c_piece.h c_tour.h c_fou.h c_cavalier.h c_roi.h c_dame.h c_pion.h c_echequier.h
	g++ -o main.o -c main.cpp -Wall
