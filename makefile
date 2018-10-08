#target: dependencies
#	rule to build
#
# Work cited: https://askubuntu.com/questions/433943/how-to-clean-executable-using-make-clean
# 	      https://www.cs.bu.edu/teaching/cpp/writing-makefiles/

CXX = g++
CXXFLAGS = -std=c++0x
CXXFLAGS += -g
CXXFLAGS += -Wall 
CXXFLAGS += -O3
CXXFLAGS += -pedantic-errors
#LDFLAGS = -lboost_date_time
OBJS =building.o instructor.o osuMain.o osuMenu.o osuValidation.o person.o student.o university.o
SRCS =building.cpp instructor.cpp osuMain.cpp osuMenu.cpp osuValidation.cpp person.cpp student.cpp university.cpp
HEADERS = building.hpp instructor.hpp osuMenu.hpp osuValidation.hpp person.hpp student.hpp university.hpp
osuMain: ${OBJS}
	${CXX} ${CXXFLAGS} -o osuMain building.o instructor.o osuMain.o osuMenu.o osuValidation.o person.o student.o university.o
osuMain.o: osuMain.cpp ${HEADERS}
	 ${CXX} ${CXXFLAGS} -c osuMain.cpp

building.o:building.hpp
instructor.o:instructor.hpp
osuMenu.o:osuMenu.hpp
osuValidation.o:osuValidation.hpp
person.o:person.hpp
student.o:student.hpp
university.o:university.hpp

clean: ${OBJS}
	-rm *.o ${OBJS} osuMain
