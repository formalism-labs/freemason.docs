
#include "strings.h"

#include <stdlib.h>

String::String(const char *str) {
	s = str ? strdup(str) : 0;
}

String::~String() {
	if (s)
		free(s);
}

const char *String::c_str() {
	return s ? s : "";
}	
