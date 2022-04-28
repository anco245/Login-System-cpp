#ifndef INOUT_H_
#define INOUT_H_

#include <string>

using namespace std;

class inout {
public:
	inout();
	bool login(string u, string p);
	void rgstr(string u, string p);
};

#endif /* INOUT_H_ */
