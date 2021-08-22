#include <iostream>
#include <string>
#include"Character.cpp"

namespace Environment {
	class Block : public Character {
	public:
		int LayerIndex;
		bool IsSolid;
		void Translate(int x , int y) {

		}

		Block() {
			IsSolid = false;
			LayerIndex = 0;
		}
		Block(string shape) {
			Shape = shape;
			IsSolid = false;
			LayerIndex = 0;
		}
		Block(string Name, string shape) {
			name = Name;
			Shape = shape;
			IsSolid = false;
			LayerIndex = 0;
		}
		Block(string Name, Location position) {
			name = Name;
			location = position;
			IsSolid = false;
			LayerIndex = 0;
		}
		Block(string Name, string shape, Location position) {
			name = Name;
			location = position;
			Shape = shape;
			IsSolid = false;
			LayerIndex = 0;
		}
		Block(string Name, Location position,bool solid) {
			name = Name;
			location = position;
			IsSolid = solid;
			LayerIndex = 0;
		}
		Block(string Name, Location position, bool solid,int indexlayer) {
			name = Name;
			location = position;
			IsSolid = solid;
			LayerIndex = indexlayer;
		}
	};
}