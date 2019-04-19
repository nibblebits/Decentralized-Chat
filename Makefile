
SYSTEM_OBJECT_FILES = ./build/network.o
INCLUDES = ./
OBJECT_FILE_FLAGS = -std=c++11 -lpthread -g

./build/network.o: ./network.cpp
	g++ -c -I ${INCLUDES} ./network.cpp -o ./build/network.o ${OBJECT_FILE_FLAGS}
	
all: ${SYSTEM_OBJECT_FILES}
	g++ main.cpp ${SYSTEM_OBJECT_FILES} -std=c++11 -g -lpthread -o ./main

clean:
	rm ${SYSTEM_OBJECT_FILES}