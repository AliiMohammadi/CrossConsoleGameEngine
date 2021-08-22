#include <iostream>
#include <string>
#include"Location.cpp"

using namespace std;

namespace Environment {
	class Object {
	public:
		string name;
		Location location;

		Object() {
			name = "SimpleBlock";
			Location loc;
			location = loc;
		}
	};
}