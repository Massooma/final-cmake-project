#include "example_class.h"
#include <cassert>

int main(){
	ExampleClass object;
	object.setVal(5);
	assert(object.getVal() == 5);
	return 0;
}
