# make official documentation  - http://www.gnu.org/software/make/
# for tutorial on makefiles - http://www.opussoftware.com/tutorial/TutMakefile.htm
# see also: 
	# http://www.cygwin.com 
	# http://www.cmake.org

# for wall flag see - http://stackoverflow.com/questions/2408038/what-does-wall-in-g-wall-test-cpp-o-test-do
# for g flag see - http://gcc.gnu.org/onlinedocs/gcc-3.0/gcc_3.html#SEC12
CPPFLAGS=-Wall -g 
OBJECTS=main.o painter.o field.o snake.o game.o
TARGET=snake
%.o: %.cpp
	g++ -c $(CPPFLAGS) -o $@ $<
$(TARGET): $(OBJECTS)
	# to compile on mac os x add: -framework OpenGL -framework GLUT
	g++ $(OBJECTS) -o $(TARGET) -g -lglut -framework OpenGL -framework GLUT
main.o: main.cpp painter.hpp field.hpp 
painter.o: painter.cpp painter.hpp
field.o: field.cpp field.hpp painter.hpp
snake.o: snake.cpp snake.hpp field.hpp
game.o: game.cpp game.hpp painter.hpp field.hpp snake.hpp