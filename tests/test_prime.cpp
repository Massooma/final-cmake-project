#include "prime.h"
#include <cassert>


int main(){
	assert(is_prime(4) == false);
	assert(is_prime(7) == true);
	return 0;
}
