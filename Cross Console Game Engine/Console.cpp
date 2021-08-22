#include<IOstream>
#include<string>
#include"Log.cpp"
#include<conio.h>
#include <stdlib.h>

using namespace std;

namespace Engine {
	class Console :public Log 
	{
	private:
		int Width = 800;
		int height = 800;

	public:
		/// <summary>
		/// clearing console window
		/// </summary>
		static void Clear() {
		#if defined _WIN32
				system("cls");
				//clrscr(); // including header file : conio.h
		#elif defined (__LINUX__) || defined(__gnu_linux__) || defined(__linux__)
				system("clear");
				//std::cout<< u8"\033[2J\033[1;1H"; //Using ANSI Escape Sequences 
		#elif defined (__APPLE__)
				system("clear");
		#endif

		}
		/// <summary>
		/// Seting window size of console in pixel.
		/// </summary>
		/// <param name="x"></param>
		/// <param name="y"></param>
		static void SetConsoleSize(int x , int y) {
			HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);

			SMALL_RECT rect;
			rect.Top = 0;
			rect.Left = 0;
			//Each rect.Righ unit is 0.1161 pixels.
			rect.Right = x * 0.11607142f;
			//Each rect.Bottom unit is 0.0520 pixels.
			rect.Bottom = y * 0.05208333f;

			SetConsoleWindowInfo(handle, 1, &rect);

			_getch();
		}
		/// <summary>
		/// seting the start location of console app in screen. 
		/// </summary>
		/// <param name="left"></param>
		/// <param name="top"></param>
		static void SetConosleLocation(int left , int top) {
			HWND consoleWindow = GetConsoleWindow();

			SetWindowPos(consoleWindow, 0, top, left, 0, 0, SWP_NOSIZE | SWP_NOZORDER);
		}
		/// <summary>
		/// Seting console quick editing lock.
		/// </summary>
		/// <param name="lock"></param>
		static void SetEditingLock(bool lock){
			static bool EditLock;

			HANDLE hInput;
			DWORD prev_mode;
			hInput = GetStdHandle(STD_INPUT_HANDLE);
			GetConsoleMode(hInput, &prev_mode);
			SetConsoleMode(hInput, prev_mode & ENABLE_EXTENDED_FLAGS);

			if (false) {
				_getch();
				SetConsoleMode(hInput, prev_mode);
			}

			EditLock = lock;
		}
		static void SetConsoleColor(int ColorCode) {
			HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
			SetConsoleTextAttribute(hConsole, ColorCode);


			//// you can loop k higher to see more color choices
			//for (int k = 1; k < 255; k++)
			//{
			//    // pick the colorattribute k you want
			//    SetConsoleTextAttribute(hConsole, k);
			//    cout << k << " I want to be nice today!" << endl;
			//}
		}
		static void SetConsoleColor(WORD Coloratt) {
			HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
			SetConsoleTextAttribute(hConsole, Coloratt);
		}

		static void WriteLine(string message) {
			cout << message << endl;
			SetConsoleColor(15);
		}
		static void WriteLine(string message , int ColorCode) {
			SetConsoleColor(ColorCode);
			WriteLine(message);

			//// you can loop k higher to see more color choices
			//for (int k = 1; k < 255; k++)
			//{
			//    // pick the colorattribute k you want
			//    SetConsoleTextAttribute(hConsole, k);
			//    cout << k << " I want to be nice today!" << endl;
			//}
		}
		static void WriteLine(string message, WORD Color) {
			SetConsoleColor(Color);
			WriteLine(message);

			//// you can loop k higher to see more color choices
			//for (int k = 1; k < 255; k++)
			//{
			//    // pick the colorattribute k you want
			//    SetConsoleTextAttribute(hConsole, k);
			//    cout << k << " I want to be nice today!" << endl;
			//}
		}
		static void Write(string mes){
			SetConsoleColor(15);
			cout << mes;
		}
		static void Write(string message, int ColorCode) {
			SetConsoleColor(ColorCode);
			Write(message);
		}
		static void Write(string message, WORD Color) {
			SetConsoleColor(Color);
			Write(message);
		}

		static void sleep(float time) {
			Sleep(time);
		}
		static void Close() {
			terminate();
		}
	};
}