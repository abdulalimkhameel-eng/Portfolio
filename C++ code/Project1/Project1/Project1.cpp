// Project1.cpp : This file contains the 'main' function. Program execution begins and ends there.
// IF player get certain XP, increase level



#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

struct Zombie {
	int strength;
	int damage;
	int XP_release;
	Zombie(int s, int dg, int x) {
		this->strength = s;
		this->damage = dg;
		this->XP_release = x;
	}
};



struct Player {
	string name;
	int health;
	int XP_level;
	int protection;
	string costume;
	int hunger_points;

	void eat_food() {
		cout << "NOM NOM NOM\n";
	}

	void movef()
	{
		cout << "Forward\n";
	}

	void mover()
	{
		cout << "Right\n";
	}


	void movel()
	{
		cout << "Left\n";
	}

	void moveb()
	{
		cout << "Backwards\n";
	}



	Player(string n, int h, int xp, int p, string c, int hpp) {
		this->name = n;
		this->health = h;
		this->XP_level = xp;
		this->protection = p;
		this->costume = c;
		this->eat_food();
		this ->hunger_points = hpp;
	}
};



class weapons {
public:
	string weapon_name;
	int attack_damage;
	int durability;
	int price;

};



struct short_range : public weapons {
	int range;
	short_range(string w_n, int a_d, int d, int r, int pr) {
		this->weapon_name = w_n;
		this->attack_damage = a_d;
		this->durability = d;
		this->range = r;
		this->price = pr;
	}
};




struct long_range : public weapons {
	int reload_time;
	long_range(string w_nl, int a_dl, int dl, int r_tl, int pr) {
		this->weapon_name = w_nl;
		this->attack_damage = a_dl;
		this->durability = dl;
		this->reload_time = r_tl;
		this->price = pr;
	}
};




struct costumes {
	string costume_name;
	int price;

	costumes(string cn, int pc) {
		this->costume_name = cn;
		this->price = pc;
	}
};




struct food {
	string food_name;
	int hunger_points;
	int price;
	food(string fn, int hp, int prf) {
		this->food_name = fn;
		this->hunger_points = hp;
	    this->price = prf;
     }

};


struct armour {
	string material;
	string colour;
	int price;
	

	armour(string m, string colour, int price) {
		this->material = m;
		this->colour = colour;
		this->price = price;
		
	}
};



struct levels {
	int level;
	string level_name;
	int waves_amount;
	
	levels(int level, int waves_amount, string level_name) {
		this->level = level;
		this->waves_amount = waves_amount;
		this->level_name = level_name;
	}
};




int main() {

	vector<string>objectives;
	objectives.push_back("Reach 110 XP points");
	objectives.push_back("Reach 500 XP points");
	objectives.push_back("Reach 1000 XP points");
	objectives.push_back("First piece of armour");
	objectives.push_back("Zombie mastercalss!");
	
	


	int s;
	int dg;
	int x;

	string n;
	int h;
	int xp;
	int p;

	string w_n;
	int a_d;
	int d;
	int r;

	string c;
	int a_dl;
	int dl;
	int r_tl;

	string w_nl;
	int pr;
	int pc;
	int hp;

	string fn;
	string cn;
	int hpp;
	int prf;
	string m;
	string colour;
	int price; 
	int level;
	int waves_amount;
	string level_name;




	string purchase;
	string eat_command;

	char move_command;


	string buy;
	string shop;
	string exit;
	string buyfood;
	string objective;
	bool check_xp = true;
	

	armour armour1("Steel", "black", 72);
	armour armour2("Diamond", "black", 112);
	armour armour3("Leather", "black", 27);
	armour armour4("Tungston", "black", 135);

	food food1("Apple", 3, 7);
	food food2("Banana", 4, 9);
	food food3("Carrots", 3, 6);
	food food4("Bread", 7, 12);
	food food5("Grapes", 2, 5);
	food food6("Soup", 6, 10);
	food food7("Chicken", 10, 15);
	food food8("Beef", 11, 16);

	long_range bow("bow", 40, 40, 2, 40);
	long_range shotgun("shotgun", 80, 55, 5, 60);
	long_range sniper("sniper", 100, 70, 7, 80);
	long_range spear("spear", 40, 30, 1, 35);

	short_range katana("katana", 70, 80, 1, 55);
	short_range axe("axe", 60, 70, 1, 50);
	short_range hammer("hammer", 50, 60, 1, 45);

	costumes costumes1("Karate", 30);
	costumes costumes2("Robot", 40);
	costumes costumes3("Medieval", 54);
	costumes costumes4("Astronaut", 70);
	costumes costumes5("Medic", 42);
	costumes costumes6("Classic", 20);

	levels level1(1, 3,  "LEVEL 1");
	levels level2(2, 5,  "LEVEL 2");
	levels level3(3, 7,  "LEVEL 3");
	levels level4(2, 9,  "LEVEL 4");
	levels level5(2, 10, "LEVEL 5");
	levels level6(2, 12, "LEVEL 6");
	levels level7(2, 14, "LEVEL 7");

	Player player1(n, 100, 100, 0, cn, 5);

	cout << "Welcome to ZOMBIE VS HUMAN!!!\n";
	cout << "In this game, you can make your own character, and fight against different zombies\n";
	cout << "The more equipped the zombie is, the more XP it drops when defeated, the more XP you have, you can unlock new levels and by items\n";
	cout << "You can even build a base to stock up and be secure from zombies!\n";
	cout << "If you want to purchase anything, type purchase\n";
	cout << "To gain health, you have to eat food, growing crops is a good way to get food\n";
	cout << "You can also purchase things from the shops\n";
	cout << "You also have some objectives to complete\n";
	cout << "To check your objectives, type objective\n";
	cout << "Try that now\n";
	cin >> objective;
	if (objective == "objective") {
		cout << objectives[0] << '\n';
		cout << objectives[1] << '\n';
		cout << objectives[2] << '\n';
		cout << objectives[3] << '\n';
		cout << objectives[5] << '\n';
	}
	cout << "Now, let's create your character!\n";
	cout << "By default, you have 100 health points and 100 XP level(s) as well as 5 hunger points, be careful of what you spend you first XP on!\n";

	do {
		cout << "Enter your name: ";
		getline(cin, n);
	} while (n.empty());

	cout << "What costume do you want(you can change later on when you have more XP)\n";
	cout << "Choose from: " << costumes1.costume_name << "(" << costumes1.price << ")" << "," << costumes2.costume_name << "(" << costumes2.price << ")";
	cout << "," << costumes3.costume_name << "(" << costumes3.price << ")" << "," << costumes4.costume_name << "(" << costumes4.price << ")" << "," << costumes5.costume_name << "(" << costumes5.price << ")" << " or " << costumes6.costume_name
		<< "(" << costumes6.price << ")" << '\n';

	getline(cin, cn);
	transform(cn.begin(), cn.end(), cn.begin(), ::tolower);


	if (cn == "karate") {
		player1.XP_level -= costumes1.price;
	}
	else if (cn == "robot") {
		player1.XP_level -= costumes2.price;
	}
	else if (cn == "medieval") {
		player1.XP_level -= costumes3.price;
	}
	else if (cn == "astronaut") {
		player1.XP_level -= costumes4.price;
	}
	else if (cn == "medic") {
		player1.XP_level -= costumes5.price;
	}
	else if (cn == "classic") {
		player1.XP_level -= costumes6.price;
	}
	else {
		cout << "Invalid costume choice, default costume assigned\n";
		cn = costumes6.costume_name;
		player1.XP_level -= costumes6.price;
	}





	cout << "Great, your character is all set!\n";
	cout << " " << player1.name << " " << player1.health << " " << player1.XP_level << " " << cn << '\n';

	cout << "Type shop to enter the shop and type exit to exit the shop\n";
	cin >> shop;
	transform(shop.begin(), shop.end(), shop.begin(), ::tolower);
	if (shop == "shop") {
		cout << "Welcome to the shop!\n";
	}



	cout << "Your current XP level is: " << player1.XP_level << "\n";
	cout << "What do you want to buy, for now, you can choose from " << bow.weapon_name << "(" << bow.price << ")" << "," << hammer.weapon_name << "(" << hammer.price << ")" << " or " << spear.weapon_name << "(" << spear.price << ")" << '\n';
	cin >> buy;
	cout << "Type purchase to buy the item\n";
	cin >> purchase;
	transform(buy.begin(), buy.end(), buy.begin(), ::tolower);
	transform(purchase.begin(), purchase.end(), purchase.begin(), ::tolower);

	if (buy == "bow" || buy == "hammer" || buy == "spear") {
		cout << "Weapons Equipped!\n";
	}

	if (buy == "bow" && purchase == "purchase") {
		player1.XP_level -= bow.price;
		cout << "You have successfully purchased an item!\n";
	}
	else if (buy == "hammer" && purchase == "purchase") {
		player1.XP_level -= hammer.price;
		cout << "You have successfully purchased an item!\n";
	}
	else if (buy == "spear" && purchase == "purchase") {
		player1.XP_level -= spear.price;
		cout << "You have successfully purchased an item!\n";
	}
	else {
		cout << "No item purchased\n";
		cout << "Please continue with the DEMO, no need to redo anything, you can go to the shop later on in the game\n";
	}



	cout << "You have " << player1.XP_level << " XP level(s) left\n";

	cout << "Now, you should buy some food as your hunger is low\n";
	cout << "You can choose from " << food1.food_name << "(" << food1.price << ")" << "," << food2.food_name << "(" << food2.price << ")" << " or "
		<< food4.food_name << "(" << food4.price << ")" << '\n';

	cin >> buyfood;
	cout << "Type purchase to buy the item\n";
	cin >> purchase;
	transform(purchase.begin(), purchase.end(), purchase.begin(), ::tolower);
	transform(buyfood.begin(), buyfood.end(), buyfood.begin(), ::tolower);

	if (buyfood == "apple" || buyfood == "banana" || buyfood == "bread") {
		cout << "Stomach stopped growling?\n";
	}

	if (buyfood == "apple" && purchase == "purchase") {
		player1.XP_level -= food1.price;
		cout << "You have successfully purchased an item from the shop\n";
	}
	else if (buyfood == "banana" && purchase == "purchase") {
		player1.XP_level -= food2.price;
		cout << "You have successfully purchased an item from the shop\n";
	}
	else if (buyfood == "bread" && purchase == "purchase") {
		player1.XP_level -= food4.price;
		cout << "You have successfully purchased an item from the shop\n";
	}
	else {
		cout << "No food purchased\n";
		cout << "Please continue with the DEMO, no need to redo anything, you can go to the shop later on in the game\n";
	}

	cout << "Type exit to exit the shop\n";
	cin >> exit;
	transform(exit.begin(), exit.end(), exit.begin(), ::tolower);
	if (exit == "exit") {
		cout << "You have exited the shop\n";
	}


	cout << "Your current XP level is: " << player1.XP_level << "\n";

	cout << "Now, try eating, type eat to eat your food!!!\n";
	cin >> eat_command;
	transform(eat_command.begin(), eat_command.end(), eat_command.begin(), ::tolower);
	if (eat_command == "eat") {
		player1.eat_food();
		cout << buyfood << "\n";
	}

	if (buyfood == "apple" && eat_command == "eat") {
		player1.hunger_points += food1.hunger_points;
	}
	else if (buyfood == "banana" && eat_command == "eat") {
		player1.hunger_points += food2.hunger_points;
	}
	else if (buyfood == "bread" && eat_command == "eat") {
		player1.hunger_points += food4.hunger_points;
	}

	cout << "Your current hunger is: " << player1.hunger_points << "\n";


	//FIX FROM HERE
	cout << "Now, try moving forward, type W to move forward, D, to move right, A to move left and S to move back\n";
	cin >> move_command;

	if (move_command == 'W' || move_command == 'w') {
		player1.movef();
	}
	cin >> move_command;
	if (move_command == 'D' || move_command == 'd') {
		player1.mover();
	}
	cin >> move_command;
	if (move_command == 'A' || move_command == 'a') {
		player1.movel();
	}
	cin >> move_command;
	if (move_command == 'S' || move_command == 's') {
		player1.moveb();
	}

	//FIX UNTEIL HEER


	cout << "Now, the DEMO is over, thank you and continue playing\n";

	//End of DEMO
	// AFTER DEMO: 
	// 
	cout << "Now, to start your jounery on your own, we will give you 100 XP more, GOOD LUCK!!!\n";
	player1.XP_level += 100;
	cout << "Your XP level is now " << player1.XP_level << '\n';




	while (check_xp == true) {
		if (player1.XP_level == 110) {
			cout << "You have completed the an objective\n";
			objectives.erase(objectives.begin() + 0);
			objectives.push_back("First Zombie masterclass!");
		}

		if (player1.XP_level == 500) {
			cout << "You have completed the an objective\n";
			objectives.erase(objectives.begin() + 1);
			objectives.push_back("First base built!");
		}

		if (player1.XP_level == 1000) {
			cout << "You have completed the an objective\n";
			objectives.erase(objectives.begin() + 2);
			objectives.push_back("First waves completed");
		}
		if (buy == armour1.material || buy == armour1.material || buy == armour1.material || buy == armour1.material) {
			objectives.erase(objectives.begin() + 3);
			objectives.push_back("First base built!");
		}

	}


	while (true) {
		"Press shop to enter the shop anytime\n";
		cin >> shop;
		transform(shop.begin(), shop.end(), shop.begin(), ::tolower);

		if (shop == "shop") {
			//BE SPEFIC AND SPECISFICATION MAYBE IN TABLE

			cout << "Welcome to the shop!\n";
			cout << "       \n";
			cout << bow.weapon_name << " " << bow.price << " " << bow.reload_time << " " << bow.attack_damage << " " << bow.durability << '\n';
			cout << "      \n";
			cout << shotgun.weapon_name << " " << shotgun.price << " " << shotgun.reload_time << " " << shotgun.attack_damage << " " << shotgun.durability << '\n';
			cout << "      \n";
			cout << sniper.weapon_name << " " << sniper.price << " " << sniper.reload_time << " " << sniper.attack_damage << " " << sniper.durability << '\n';
			cout << "      \n";
			cout << spear.weapon_name << " " << spear.price << " " << spear.reload_time << " " << spear.attack_damage << " " << spear.durability << '\n';

			cout << "       \n";
			cout << armour1.material << " " << armour1.price << '\n';
			cout << "      \n";
			cout << armour2.material << " " << armour2.price << '\n';
			cout << "      \n";
			cout << armour3.material << " " << armour3.price << '\n';
			cout << "      \n";
			cout << armour4.material << " " << armour4.price << '\n';

			cout << "       \n";
			cout << katana.weapon_name << " " << katana.price << " " << katana.range << " " << katana.attack_damage << " " << katana.durability << '\n';
			cout << "      \n";
			cout << axe.weapon_name << " " << axe.price << " " << axe.range << " " << axe.attack_damage << " " << axe.durability << '\n';
			cout << "      \n";
			cout << hammer.weapon_name << " " << hammer.price << " " << hammer.range << " " << hammer.attack_damage << " " << hammer.durability << '\n';

			cout << "       \n";
			cout << costumes1.costume_name << " " << costumes1.price << '\n';
			cout << "      \n";
			cout << costumes2.costume_name << " " << costumes2.price << '\n';
			cout << "      \n";
			cout << costumes3.costume_name << " " << costumes3.price << '\n';
			cout << "      \n";
			cout << costumes4.costume_name << " " << costumes4.price << '\n';
			cout << "      \n";
			cout << costumes5.costume_name << " " << costumes5.price << '\n';
			cout << "      \n";
			cout << costumes6.costume_name << " " << costumes6.price << '\n';
			cout << "       \n";
			cout << food1.food_name << " " << food1.hunger_points << " " << food1.price << '\n';
			cout << "      \n";
			cout << food2.food_name << " " << food2.hunger_points << " " << food2.price << '\n';
			cout << "      \n";
			cout << food3.food_name << " " << food3.hunger_points << " " << food3.price << '\n';
			cout << "      \n";
			cout << food4.food_name << " " << food4.hunger_points << " " << food4.price << '\n';
			cout << "      \n";
			cout << food5.food_name << " " << food5.hunger_points << " " << food5.price << '\n';
			cout << "      \n";
			cout << food6.food_name << " " << food6.hunger_points << " " << food6.price << '\n';
			cout << "      \n";
			cout << food7.food_name << " " << food7.hunger_points << " " << food7.price << '\n';
			cout << "      \n";
			cout << food8.food_name << " " << food8.hunger_points << " " << food8.price << '\n';

			cin >> buy;
			cout << "Type purchase to buy the item\n";
			cin >> purchase;
			transform(purchase.begin(), purchase.end(), purchase.begin(), ::tolower);
			transform(buy.begin(), buy.end(), buy.begin(), ::tolower);


			
			if (buy == "steel" || buy == "diamond" || buy == "leather" || buy == "tungston") {
				cout << "Safety first!\n";
			}


		}
		if (buy == "steel" && purchase == "purchase") {
			if (player1.XP_level - armour1.price < 0) {
				cout << "You do not have enough XP to buy this item\n";
			}
			else if (player1.XP_level < armour1.price) {
				cout << "You do not have enough XP to buy this item\n";
			}
			else {
				player1.XP_level -= armour1.price;
				cout << player1.XP_level;
				cout << "XP left\n";
				cout << "You have successfully purchased an item from the shop\n";

			}
		}

		if (buy == "diamond" && purchase == "purchase") {
			if (player1.XP_level - armour2.price < 0) {
				cout << "You do not have enough XP to buy this item\n";
			}
			else if (player1.XP_level < armour2.price) {
				cout << "You do not have enough XP to buy this item\n";
			}
			else {
				player1.XP_level -= armour2.price;
				cout << player1.XP_level;
				cout << "XP left\n";
				cout << "You have successfully purchased an item from the shop\n";

			}
		}
		if (buy == "leather" && purchase == "purchase") {
			if (player1.XP_level - armour3.price < 0) {
				cout << "You do not have enough XP to buy this item\n";
			}
			else if (player1.XP_level < armour3.price) {
				cout << "You do not have enough XP to buy this item\n";
			}
			else {
				player1.XP_level -= armour3.price;
				cout << player1.XP_level;
				cout << "XP left\n";
				cout << "You have successfully purchased an item from the shop\n";

			}
		}
		if (buy == "tungston" && purchase == "purchase") {
			if (player1.XP_level - armour4.price < 0) {
				cout << "You do not have enough XP to buy this item\n";
			}
			else if (player1.XP_level < armour4.price) {
				cout << "You do not have enough XP to buy this item\n";
			}
			else {
				player1.XP_level -= armour4.price;
				cout << player1.XP_level;
				cout << "XP left\n";
				cout << "You have successfully purchased an item from the shop\n";

			}
		}


		if (buy == "bow" && purchase == "purchase") {
			if (player1.XP_level - armour2.price < 0) {
				cout << "You do not have enough XP to buy this item\n";
			}
			else if (player1.XP_level < armour2.price) {
				cout << "You do not have enough XP to buy this item\n";
			}
			else {
				player1.XP_level -= armour2.price;
				cout << player1.XP_level;
				cout << "XP left\n";
				cout << "You have successfully purchased an item from the shop\n";

			}
		}
		if (buy == "shotgun" && purchase == "purchase") {
			if (player1.XP_level - armour2.price < 0) {
				cout << "You do not have enough XP to buy this item\n";
			}
			else if (player1.XP_level < armour2.price) {
				cout << "You do not have enough XP to buy this item\n";
			}
			else {
				player1.XP_level -= armour2.price;
				cout << player1.XP_level;
				cout << "XP left\n";
				cout << "You have successfully purchased an item from the shop\n";

			}
		}
		if (buy == "sniper" && purchase == "purchase") {
			if (player1.XP_level - armour2.price < 0) {
				cout << "You do not have enough XP to buy this item\n";
			}
			else if (player1.XP_level < armour2.price) {
				cout << "You do not have enough XP to buy this item\n";
			}
			else {
				player1.XP_level -= armour2.price;
				cout << player1.XP_level;
				cout << "XP left\n";
				cout << "You have successfully purchased an item from the shop\n";

			}
		}
		if (buy == "spear" && purchase == "purchase") {
			if (player1.XP_level - armour2.price < 0) {
				cout << "You do not have enough XP to buy this item\n";
			}
			else if (player1.XP_level < armour2.price) {
				cout << "You do not have enough XP to buy this item\n";
			}
			else {
				player1.XP_level -= armour2.price;
				cout << player1.XP_level;
				cout << "XP left\n";
				cout << "You have successfully purchased an item from the shop\n";

			}
		}



		if (buy == "karate" && purchase == "purchase") {
			if (player1.XP_level - armour2.price < 0) {
				cout << "You do not have enough XP to buy this item\n";
			}
			else if (player1.XP_level < armour2.price) {
				cout << "You do not have enough XP to buy this item\n";
			}
			else {
				player1.XP_level -= armour2.price;
				cout << player1.XP_level;
				cout << "XP left\n";
				cout << "You have successfully purchased an item from the shop\n";

			}
		}
		if (buy == "robot" && purchase == "purchase") {
			if (player1.XP_level - armour2.price < 0) {
				cout << "You do not have enough XP to buy this item\n";
			}
			else if (player1.XP_level < armour2.price) {
				cout << "You do not have enough XP to buy this item\n";
			}
			else {
				player1.XP_level -= armour2.price;
				cout << player1.XP_level;
				cout << "XP left\n";
				cout << "You have successfully purchased an item from the shop\n";

			}
		}
		if (buy == "medievel" && purchase == "purchase") {
			if (player1.XP_level - armour2.price < 0) {
				cout << "You do not have enough XP to buy this item\n";
			}
			else if (player1.XP_level < armour2.price) {
				cout << "You do not have enough XP to buy this item\n";
			}
			else {
				player1.XP_level -= armour2.price;
				cout << player1.XP_level;
				cout << "XP left\n";
				cout << "You have successfully purchased an item from the shop\n";

			}
		}
		if (buy == "astronaut" && purchase == "purchase") {
			if (player1.XP_level - armour2.price < 0) {
				cout << "You do not have enough XP to buy this item\n";
			}
			else if (player1.XP_level < armour2.price) {
				cout << "You do not have enough XP to buy this item\n";
			}
			else {
				player1.XP_level -= armour2.price;
				cout << player1.XP_level;
				cout << "XP left\n";
				cout << "You have successfully purchased an item from the shop\n";

			}
		}
		if (buy == "medic" && purchase == "purchase") {
			if (player1.XP_level - armour2.price < 0) {
				cout << "You do not have enough XP to buy this item\n";
			}
			else if (player1.XP_level < armour2.price) {
				cout << "You do not have enough XP to buy this item\n";
			}
			else {
				player1.XP_level -= armour2.price;
				cout << player1.XP_level;
				cout << "XP left\n";
				cout << "You have successfully purchased an item from the shop\n";

			}
		}
		if (buy == "classic" && purchase == "purchase") {
			if (player1.XP_level - armour2.price < 0) {
				cout << "You do not have enough XP to buy this item\n";
			}
			else if (player1.XP_level < armour2.price) {
				cout << "You do not have enough XP to buy this item\n";
			}
			else {
				player1.XP_level -= armour2.price;
				cout << player1.XP_level;
				cout << "XP left\n";
				cout << "You have successfully purchased an item from the shop\n";

			}
		}


		if (buy == "katana" && purchase == "purchase") {
			if (player1.XP_level - armour2.price < 0) {
				cout << "You do not have enough XP to buy this item\n";
			}
			else if (player1.XP_level < armour2.price) {
				cout << "You do not have enough XP to buy this item\n";
			}
			else {
				player1.XP_level -= armour2.price;
				cout << player1.XP_level;
				cout << "XP left\n";
				cout << "You have successfully purchased an item from the shop\n";

			}
		}

		if (buy == "axe" && purchase == "purchase") {
			if (player1.XP_level - armour2.price < 0) {
				cout << "You do not have enough XP to buy this item\n";
			}
			else if (player1.XP_level < armour2.price) {
				cout << "You do not have enough XP to buy this item\n";
			}
			else {
				player1.XP_level -= armour2.price;
				cout << player1.XP_level;
				cout << "XP left\n";
				cout << "You have successfully purchased an item from the shop\n";

			}
		}

		if (buy == "hammer" && purchase == "purchase") {
			if (player1.XP_level - armour2.price < 0) {
				cout << "You do not have enough XP to buy this item\n";
			}
			else if (player1.XP_level < armour2.price) {
				cout << "You do not have enough XP to buy this item\n";
			}
			else {
				player1.XP_level -= armour2.price;
				cout << player1.XP_level;
				cout << "XP left\n";
				cout << "You have successfully purchased an item from the shop\n";

			}
		}

		if (buy == "apple" && purchase == "purchase") {
			if (player1.XP_level - armour2.price < 0) {
				cout << "You do not have enough XP to buy this item\n";
			}
			else if (player1.XP_level < armour2.price) {
				cout << "You do not have enough XP to buy this item\n";
			}
			else {
				player1.XP_level -= armour2.price;
				cout << player1.XP_level;
				cout << "XP left\n";
				cout << "You have successfully purchased an item from the shop\n";

			}
		}

		if (buy == "banana" && purchase == "purchase") {
			if (player1.XP_level - armour2.price < 0) {
				cout << "You do not have enough XP to buy this item\n";
			}
			else if (player1.XP_level < armour2.price) {
				cout << "You do not have enough XP to buy this item\n";
			}
			else {
				player1.XP_level -= armour2.price;
				cout << player1.XP_level;
				cout << "XP left\n";
				cout << "You have successfully purchased an item from the shop\n";

			}
		}

		if (buy == "carrot" && purchase == "purchase") {
			if (player1.XP_level - armour2.price < 0) {
				cout << "You do not have enough XP to buy this item\n";
			}
			else if (player1.XP_level < armour2.price) {
				cout << "You do not have enough XP to buy this item\n";
			}
			else {
				player1.XP_level -= armour2.price;
				cout << player1.XP_level;
				cout << "XP left\n";
				cout << "You have successfully purchased an item from the shop\n";

			}
		}

		if (buy == "bread" && purchase == "purchase") {
			if (player1.XP_level - armour2.price < 0) {
				cout << "You do not have enough XP to buy this item\n";
			}
			else if (player1.XP_level < armour2.price) {
				cout << "You do not have enough XP to buy this item\n";
			}
			else {
				player1.XP_level -= armour2.price;
				cout << player1.XP_level;
				cout << "XP left\n";
				cout << "You have successfully purchased an item from the shop\n";

			}
		}

		if (buy == "grapes" && purchase == "purchase") {
			if (player1.XP_level - armour2.price < 0) {
				cout << "You do not have enough XP to buy this item\n";
			}
			else if (player1.XP_level < armour2.price) {
				cout << "You do not have enough XP to buy this item\n";
			}
			else {
				player1.XP_level -= armour2.price;
				cout << player1.XP_level;
				cout << "XP left\n";
				cout << "You have successfully purchased an item from the shop\n";

			}
		}

		if (buy == "soup" && purchase == "purchase") {
			if (player1.XP_level - armour2.price < 0) {
				cout << "You do not have enough XP to buy this item\n";
			}
			else if (player1.XP_level < armour2.price) {
				cout << "You do not have enough XP to buy this item\n";
			}
			else {
				player1.XP_level -= armour2.price;
				cout << player1.XP_level;
				cout << "XP left\n";
				cout << "You have successfully purchased an item from the shop\n";

			}
		}

		if (buy == "chicken" && purchase == "purchase") {
			if (player1.XP_level - armour2.price < 0) {
				cout << "You do not have enough XP to buy this item\n";
			}
			else if (player1.XP_level < armour2.price) {
				cout << "You do not have enough XP to buy this item\n";
			}
			else {
				player1.XP_level -= armour2.price;
				cout << player1.XP_level;
				cout << "XP left\n";
				cout << "You have successfully purchased an item from the shop\n";

			}
		}

		if (buy == "beef" && purchase == "purchase") {
			if (player1.XP_level - armour2.price < 0) {
				cout << "You do not have enough XP to buy this item\n";
			}
			else if (player1.XP_level < armour2.price) {
				cout << "You do not have enough XP to buy this item\n";
			}
			else {
				player1.XP_level -= armour2.price;
				cout << player1.XP_level;
				cout << "XP left\n";
				cout << "You have successfully purchased an item from the shop\n";

			}
		}


	}




	return 0;

}
   
