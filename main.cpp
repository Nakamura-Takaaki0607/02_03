#include "Japanese.h"
#include "English.h"

#include <stdio.h>

int main() {

	Japanese* japanese = new Japanese;
	English* english = new English;
	japanese->Speak();
	english->Speak();

	delete japanese;
	delete english;

	return 0;
}