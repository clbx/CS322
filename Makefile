SOURCES=src/main.cpp src/euclidean.cpp
INCLUDE=-Iinclude

main:
	g++ -Wall $(INCLUDE) $(SOURCES) -o alg
