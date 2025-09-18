cmake_minimum_required(VERSION 4.0)
project(The_C_Programing_Project)

set(CMAKE_CXX_STANDARD 20)

add_executable(The_C_Programing_Project main.cpp
        C-Programming/Introduction/HelloWorld.c
        C-Programming/Introduction/Idenfiiers_Variables.c
        C-Programming/Introduction/IdentifiesAsFunction.c
        C-Programming/Introduction/DataTypes.c
        C-Programming/Introduction/Input_Output.c
        C-Programming/Introduction/ArthematicOperator.c
        C-Programming/Introduction/RelationalOperator.c
        C-Programming/Introduction/LogicalOperator.c
        C-Programming/Introduction/BitWiseOperator.c
        C-Programming/Introduction/AssignmentOperator.c
        C-Programming/Introduction/OtherOperators.c)
