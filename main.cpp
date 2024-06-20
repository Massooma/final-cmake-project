#include <iostream>
#include "factorial.h"
#include "fibonacci.h"
#include "palindrome.h"
#include "prime.h"
#include "example_class.h"

int main() {
    // Test de la fonction factorial
    int num = 5;
    std::cout << "Factorial of " << num << " is " << factorial(num) << std::endl;

    // Test de la fonction fibonacci
    num = 10;
    std::cout << "Fibonacci of " << num << " is " << fibonacci(num) << std::endl;

    // Test de la fonction palindrome
    std::string str = "radar";
    if (is_palindrome(str)) {
        std::cout << str << " is a palindrome" << std::endl;
    } else {
        std::cout << str << " is not a palindrome" << std::endl;
    }

    // Test de la fonction prime
    num = 17;
    if (is_prime(num)) {
        std::cout << num << " is a prime number" << std::endl;
    } else {
        std::cout << num << " is not a prime number" << std::endl;
    }

    // Test de la classe ExampleClass
    ExampleClass example;
    example.setVal(42);
    std::cout << "ExampleClass value is " << example.getVal() << std::endl;

    return 0;
}


