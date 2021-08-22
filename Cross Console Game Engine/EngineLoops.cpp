#include<IOstream>
#include<string>
#include"body.cpp"
#include"Renderer.cpp";

using namespace std;
using namespace ApplicationBody;

namespace Engine {
	class EngineLoops {
	public:
		static void StartEngine() {
			body::Awake();
			body::Start();
			Scene s;

			Renderer::Rendere(Scene::LoadedScene);
			//Update();
		}
	private:
		/// <summary>
		/// Update loop of engine
		/// </summary>
		static void Update() {

			static int FixedFPS;
			static float UpdateTime;

			FixedFPS = 1;
			UpdateTime = (1000 / FixedFPS);

			while (true)
			{
				body::Update();
				SleepConsole(1000);
			}
		}
		static void SleepConsole(int time) {
			Sleep(time);
		}
	};
}