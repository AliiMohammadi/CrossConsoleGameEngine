#include<IOstream>
#include "Sound.cpp"
#include<string>

using namespace std;

namespace Engine {
	class Log:public Sound {
	public:
		static void Print(string message) {

		}
		static void Warning(string message) {

		}
		static void Error(string message) {

		}
	};
}