#include <string.h>
#include <iostream>

class Photon_cannon {
	int hp, shield;
	int coord_x, coord_y;
	int damage;

	public:
	Photon_Cannon(int x, int y);
	Photon_Cannon(const Photon_Cannon& pc);

	void show_status();
};

Photon_Cannon::Photon_cannon(const Photon_cannon& pc) {
	std::cout << " 복사 생성자 호출! " << std::endl;
	hp = pc.hp;
	shield = pc.shield;
	coord_x = pc.coord_x;
	coord_y = pc.coord_y;
	damage = pc.damage;
}


