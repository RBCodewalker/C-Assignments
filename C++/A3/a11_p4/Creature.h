/*
   CH-230-A
   Creature.h
   Rajdeep Bastakoti
   r.bastakoti@jacobs-university.de
 */

// CLASSES DEFINITION

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

class Wizard : public Creature
{
	public:
		// constructors and destructor for Wizard class
        Wizard();
		void hover() const;
        ~Wizard();

	private:
		int distFactor;
};

class Hedgehog : public Creature
{
	public:
		// constructors and destructor for Creature class
        Hedgehog();
		void dash() const;
        ~Hedgehog();

	private:
		int speed;
};

class Goblin : public Creature
{
	public:
		// constructors and destructor for Goblin class
        Goblin();
		void jog() const;
        ~Goblin();

	private:
		int slowdown;
};