#include "Logger.h"

int main() {
	int a = 5;
	char* b = "BYE";

	LOG_DEBUG("HELLO %d %s", a, b);
	LOG_INFO("HELLO %d %s", a, b);
	LOG_WARN("HELLO %d %s", a, b);
	LOG_ERROR("HELLO %d %s", a, b);
}