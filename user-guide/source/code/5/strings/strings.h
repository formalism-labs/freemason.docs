
#include <string.h>

class String {
	char *s;
public:
	String(const char *str = 0);
	~String();
	
	const char *c_str();
};
