#include "palindrome.h"
#include <cassert>


int main(){
	assert(is_palindrome("madam") == true);
	assert(is_palindrome("hello") == false);
	return 0;
}
