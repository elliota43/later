CXX := clang++
CXXFLAGS := -std=c++23 -Wall -Wextra -g

TARGET := later
SRCS := main.cpp ArgsParser.cpp Commands.cpp DB.cpp
OBJS := $(SRCS:.cpp=.o)

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJS)

clean:
	rm -rf $(TARGET) $(OBJS) $(TARGET).dSYM
