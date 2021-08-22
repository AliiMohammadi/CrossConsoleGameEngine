#include <iostream>
#include <string>
#include"Object.cpp"

namespace Environment {
	class Character: public Object {
	public:
		string Shape;
		int Color;

		Character() {
			Shape = "";
			Color = 0;
		}
	};
}