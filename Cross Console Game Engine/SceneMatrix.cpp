#include<IOstream>
#include<string>
#include<list>
#include"Block.cpp"
#include "Renderer.cpp"

namespace Environment {
	class SceneMatrix {
	public:
		list<Block> Blocks;

		Block Column[1][1];

		int BlockCount() {
			return Blocks.size();
		}
		void AddBlock(Block block) {
			Blocks.push_front(block);
			Refresh();
		}
	private:
		void Refresh() {
		}
	};
}