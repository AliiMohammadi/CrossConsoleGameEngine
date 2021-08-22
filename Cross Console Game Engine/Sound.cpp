#include<IOstream>
#include <windows.h>

using namespace std;

namespace Engine {
	class Sound {
	public:
		static void MakeSound(int frequnce, int diration) {
			Beep(frequnce, diration);
		}
	};
}