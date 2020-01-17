SOURCES=src/main.cpp src/euclidean.cpp src/primes.cpp
INCLUDE=-Iinclude

main:
	g++ -Wall $(INCLUDE) $(SOURCES) -o alg
