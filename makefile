maker: practice05.o p05.o
    g++ practice05.o p05.o -o practice05main

practice05.o: practice05.cpp
    g++ -c practice05.cpp

p05.o: p05.cpp
    g++ -c p05.cpp

clean:
    rm *.o maker