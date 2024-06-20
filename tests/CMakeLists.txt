cmake_minimum_required(VERSION 3.10)

project(Tests)

enable_testing()

add_executable(test_factorial test_factorial.cpp)
target_link_libraries(test_factorial MyLib)

add_executable(test_fibonacci test_fibonacci.cpp)
target_link_libraries(test_fibonacci MyLib)

add_executable(test_palindrome test_palindrome.cpp)
target_link_libraries(test_palindrome MyLib)

add_executable(test_prime test_prime.cpp)
target_link_libraries(test_prime MyLib)

add_executable(test_example_class test_example_class.cpp)
target_link_libraries(test_example_class MyLib)

add_test(NAME test_factorial COMMAND test_factorial)
add_test(NAME test_fibonacci COMMAND test_fibonacci)
add_test(NAME test_palindrome COMMAND test_palindrome)
add_test(NAME test_prime COMMAND test_prime)
add_test(NAME test_example_class COMMAND test_example_class)
