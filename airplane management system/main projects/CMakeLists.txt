cmake_minimum_required(VERSION 3.17)
project(Clion)

set(CMAKE_CXX_STANDARD 14)

add_executable(Clion main.cpp City.cpp City.h Airplane.cpp Airplane.h Time.cpp Time.h Flight.cpp Flight.h Airport.cpp Airport.h User.cpp User.h Passenger.cpp Passenger.h )
