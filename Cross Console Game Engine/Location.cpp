#include<IOstream>
#include<string>
#include <cmath>

using namespace std;

namespace Environment {
	struct Location {
	public:
		int Left;
		int Top;

		static float Distance(int leftA , int topA , int leftB , int topB) {

			float x = abs((leftA - leftB));
			float y = abs((topA - topB));
			float fi = (float)(sqrt(pow(x, 2) + pow(y, 2)));

			return fi;
		}
		static float Distance(Location locA, Location locB) {
			return Distance(locA.Left,locA.Top, locB.Left, locB.Top);
		}

		Location() {
			Left = 0;
			Top = 0;
		}
		Location(int left, int top) {
			Left = left;
			Top = top;
		}
	};
}