#include <cstdio>
using namespace std;

int main() {

	int hp, mp, attack, defence, dHp, dMp, dAttack, dDefence;
	int t; scanf("%d", &t);

	int iDefault = 0;
	int dValue = 0;
	int result = 0;

	while (t--) {
		scanf("%d %d %d %d %d %d %d %d", &hp, &mp, &attack, &defence, &dHp, &dMp, &dAttack, &dDefence);
		
		if ((hp + dHp) < 1) hp = 1;
		else hp += dHp;

		if ((mp + dMp) < 1) mp = 1;
		else mp += dMp;

		if ((attack + dAttack) < 0) attack = 0;
		else attack += dAttack;
		defence = defence + dDefence;
		
		
		result = hp + (5 * mp) + (2 * attack) + (2 * defence);
		printf("%d\n", result);
	}
	return 0;
}