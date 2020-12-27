cmake_minimum_required(VERSION 3.17)
project(proof_of_concept_trojan_horse)

set(CMAKE_CXX_STANDARD 14)

add_executable(proof_of_concept_trojan_horse client/game.cpp client/game.h client/client.cpp client/client.h server/server.cpp server/server.h)
add_executable(Server server/server.cpp)
add_executable(Client client/client.cpp)