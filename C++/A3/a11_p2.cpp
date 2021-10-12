/*
   CH-230-A
   a11_p2.cpp
   Rajdeep Bastakoti
   r.bastakoti@jacobs-university.de
 */

#include <iostream>

using namespace std;

class Creature
{
	public:
		// constructors and destructor for Creature class
        Creature();  
		void run() const;
        ~Creature();

	protected:
		int distance;
};

Creature::~Creature() {}

Creature::Creature(): distance(10) {}    

void Creature::run() const
{ 
    cout << "running " << distance << " meters!\n";
}  

class Wizard : public Creature
{
	public:
		// constructor, method and destructor for Wizard class
        Wizard();
		void hover() const;
        ~Wizard();

	private:
		int distFactor;
};

Wizard::~Wizard()
{
    cout << "\nDestructing Wizard object!!!" << endl;;
}

Wizard::Wizard() : distFactor(3)
{}  

void Wizard::hover() const
{
    cout << "hovering " << (distFactor * distance) << " meters!\n";
}

class Hedgehog : public Creature
{
	public:
		// constructor, method and destructor for Creature class
        Hedgehog();
		void dash() const;
        ~Hedgehog();

	private:
		int speed;
};

Hedgehog::~Hedgehog()
{
    cout << "\nDestructing Hedgehog object!!!" << endl;
}

Hedgehog::Hedgehog() : speed(100)
{}  

void Hedgehog::dash() const
{
    cout << "dashing " << (speed * distance) << " meters!\n";
}

class Goblin : public Creature
{
	public:
		// constructor, method and destructor for Goblin class
        Goblin();
		void jog() const;
        ~Goblin();

	private:
		int slowdown;
};

Goblin::~Goblin()
{
    cout << "\nDesctructing Goblin object!!!" << endl;
}

Goblin::Goblin() : slowdown(2)
{}  

void Goblin::jog() const
{
    cout << "jogging " << (distance / slowdown) << " meters!\n";
}

int main()
{ 
    // executing and desplaying the required output
    
    cout << "Creating a Creature.\n";
    Creature c;
    c.run();

    cout << "\nCreating a Wizard.\n";
    Wizard w;
    w.run();
    w.hover();

    cout << "\nCreating a Hedgehog.\n";
    Hedgehog h;
    h.run();
    h.dash();

    cout << "\nCreating a Goblin.\n";
    Goblin g;
    g.run();
    g.jog();

    return 0;
} 