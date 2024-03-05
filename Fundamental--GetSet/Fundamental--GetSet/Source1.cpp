#include <string>

class Basic
{
protected:
	int secret;

public:
	Basic(int i) {
		secret = i;
	}

	int getstring() {
		return secret;
	}
};
