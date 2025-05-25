
#ifdef _WIN32
#	ifdef LIB1_EXPORTS
#		define LIB1_API __declspec(dllexport)
#	else
#		define LIB1_API __declspec(dllimport)
#	endif
#else
#	define LIB1_API
#endif

LIB1_API const char *foo();
