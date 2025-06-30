all: main.exe

main.exe: main.cpp project.cpp
	g++ main.cpp project.cpp -o main.exe

clean: 
	del main.exe

