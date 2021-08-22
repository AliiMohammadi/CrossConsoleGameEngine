#include <iostream>
#include <string>
#include"EngineLoops.cpp"

using namespace std;

namespace Engine {
	class Color {
	public:
		static int Black() {
			return 0;
		}
		static int Blue() {
			return 1;
		}
		static int Red() {
			return 4;
		}
		static int Yello() {
			return 6;
		}
		static int Gray() {
			return 8;
		}
		static int LightGreen() {
			return 10;
		}
		static int LightBlue() {
			return 11;
		}
		static int LightRed() {
			return 11;
		}
		static int LightYello() {
			return 11;
		}
		static int White() {
			return 15;
		}
		class Forground {
		public:
			static WORD Blue() {
				return FOREGROUND_BLUE;
			}
			static WORD Green() {
				return FOREGROUND_GREEN;
			}
			static WORD Red() {
				return FOREGROUND_RED;
			}
		};
		class Background {
		public:
			static int Black() {
				return 0;
			}
			static WORD Blue() {
				return BACKGROUND_BLUE;
			}
			static WORD Green() {
				return BACKGROUND_GREEN;
			}
			static WORD Red() {
				return BACKGROUND_RED;
			}
			static int Purple() {
				return 80;
			}
			static int Yello() {
				return 96;
			}
			static int Gray() {
				return 112;
			}
		};
	};
}