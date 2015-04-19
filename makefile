ex_615:ex_615.o Mostrador.o
	g++ -o ex_615.exe ex_615.o Mostrador.o
ex_615.o:ex_615.cc
	g++ -c ex_615.cc
Mostrador.o:Mostrador.cc
	g++ -c Mostrador.cc
