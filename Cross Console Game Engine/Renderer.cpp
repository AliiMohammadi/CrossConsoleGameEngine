#include<IOstream>
#include<string>
#include<list>
#include"Console.cpp"
#include "Scene.cpp"

using namespace std;
using namespace Environment;
namespace Engine {
	class Renderer {


	public:

	#define HorizentalSize 10
	#define VeticalSize 10

	//static int HorizentalSize;//960 PX . Each char is 9 px
	//static int VeticalSize;//480 PX. Each char is 16 px

	public:
		static void Rendere(string paint) {
			Console::WriteLine(paint);
		}
		static void Rendere(Scene scene) {

			for (size_t i = 0; i < VeticalSize; i++)
			{
				string Line;

				for (size_t j = 0; j < HorizentalSize; j++)
				{
					//Line = ;
				}
				Rendere(Line);
			}
		}

	private:
		static void ClearConsole() {
			Console::Clear();
		}


		//list<Block> CombineLayer() {

		//}
	};
}