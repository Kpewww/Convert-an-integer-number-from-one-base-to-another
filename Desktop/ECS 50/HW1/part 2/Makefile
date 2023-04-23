CXX = g++
CXXFLAGS = -Wall -Werror -std=c++11

SRC = changeOfBase.cpp functions.cpp
OBJ = $(SRC:.cpp=.o)
EXEC = changeOfBase

all: $(EXEC)
$(EXEC): $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(EXEC)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@
clean:
	rm -f $(OBJ) $(EXEC)

update:
	make clean
	make all