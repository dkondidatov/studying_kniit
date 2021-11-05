#include <iostream>;
#include <string>;

using namespace::std;

//Exception for invalid input
class input_error {
public:
	void print() {
		cerr << "invalid input!" << endl;
	}
};

//Creating parent class for all other vehicles 
class vehicle {
public:
	void describe() //Full describe procedure
	{
		if (!is_empty) { //If class is empty then skip that part
			cout << "This vehicle is " << vehicle_type << ". It has " << count_of_wheels << " wheels and " << color << " color.";
			cout << " Mass of this " << vehicle_type << " is " << mass << ". This lenght is " << length << " and width is " << width;
			cout << ". This " << vehicle_type << " can moving with " << max_speed << " speed!" << endl;
		}
		else {
			cout << "You don't have a " << vehicle_type << "!" << endl;
		}
	};

	void structured_desc()  //Structured describe like JSON
	{
		if (!is_empty) {
			cout << endl << "{" << endl;
			cout << "  vehicle_type:    " << vehicle_type << endl;
			cout << "  color:           " << color << endl;
			cout << "  count_of_wheels: " << count_of_wheels << endl;
			cout << "  length:          " << length << endl;
			cout << "  width:           " << width << endl;
			cout << "  mass:            " << mass << endl;
			cout << "  max_speed:       " << max_speed << endl;
			cout << "}" << endl << endl;
		}
		else {
			cout << "You don't have a " << vehicle_type << "!" << endl;
		}
	};

protected:
	int count_of_wheels = 0;
	int length = 0;
	int width = 0;
	int mass = 0;
	int max_speed = 0;
	string color = "";
	string vehicle_type = "vehicle";
	bool is_empty = true;
	
	
	bool is_digits(const std::string& s)
	{
		if (s.end() == std::find_if(s.begin(), s.end(),
			[](unsigned char c)->bool { return !isdigit(c); })) {
			//std::cout << "string '" << s << "' contains only digits\n";
			return 1;
		}
		return 0;
	}
	void choose_vehicle()
	{
		try { // Use it for manual input parameters for vehicle
			string temp_input = "";
			cout << "Length of this " << vehicle_type << " is: " << endl;
			cin >> temp_input;
			if (!is_digits(temp_input)) throw input_error();
			length = stoi(temp_input);
			cout << "Width of this " << vehicle_type << " is: " << endl;
			if (!is_digits(temp_input)) throw input_error();
			cin >> temp_input;
			width = stoi(temp_input);
			cout << "Color of this " << vehicle_type << " is: " << endl;
			cin >> temp_input;
			color = temp_input;
			cout << "Mass of this " << vehicle_type << " is: " << endl;
			cin >> temp_input;
			if (!is_digits(temp_input)) throw input_error();
			mass = stoi(temp_input);
			max_speed = 80 + rand() % 130 ;

			is_empty = false;
		}
		catch (input_error& error) { error.print(); }
	}

	//Random generating procedure like interface
	virtual void try_your_luck() { }
};

//Creating child class Car from vehicle
class car : public vehicle {
public: 
	car(bool certain = 0) //Default constructor
	{
		count_of_wheels = 4;
		vehicle_type = "car";
		if (certain) {
			choose_vehicle();
		}
		else {
			try_your_luck();
		}
	}
private: 
	//Override random generating procedure. Its unique for all classes
	void try_your_luck() {
		length = 2 + rand() % 4;
		width = 1 + rand() % 2;
		mass = 1 + rand() % 3;
		color = "perfect";
		max_speed = 80 + rand() % 130;
		is_empty = false;
	}
};

//Creating child class Motorcycle from vehicle
class motorcycle : public vehicle {
public:
	motorcycle(bool certain = 0) //Default constructor
	{
		count_of_wheels = 2;
		vehicle_type = "motorcycle";
		if (certain) {
			choose_vehicle();
		}
		else {
			try_your_luck();
		}
	}

private:
	//Override random generating procedure. Its unique for all classes
	void try_your_luck() {
		length = 2;
		width = 1;
		mass = 1;
		color = "metallic";
		max_speed = 80 + rand() % 130;
		is_empty = false;
	}
};

//Creating child class Plane from vehicle
class plane : public vehicle {
public:
	
	plane(bool certain = 0) //Default constructor
	{
		count_of_wheels = 12;
		vehicle_type = "plane";
		if (certain) {
			choose_vehicle();
		}
		else {
			try_your_luck();
		}
	}
	
	void describe() //Override describe
	{
		if (!is_empty) {
			cout << "This vehicle is " << vehicle_type << " AND IT CAN FLY! It has " << count_of_wheels << " wheels and " << color << " color.";
			cout << " Mass of this " << vehicle_type << " is " << mass << ". This lenght is " << length << " and width is " << width;
			cout << ". This " << vehicle_type << " can moving with " << max_speed << " speed!" << endl << "IT CAN FLY!";
		}
		else {
			cout << "You don't have a " << vehicle_type << "!" << endl;
		}
	};

protected: //This procedure in protected section for child class
	//Override random generating procedure. Its unique for all classes
	void try_your_luck() {
		length = 15;
		width = 10;
		mass = 5;
		color = "white";
		max_speed = 300 + rand() % 130;
		is_empty = false;
	}
};

//Creating child class papper plane from plane
class papper_plane : public plane {
public:
	//Default constructor
	papper_plane (bool certain = 0)
	{
		count_of_wheels = 0;
		vehicle_type = "papper_plane";
		if (certain) {
			choose_vehicle();
		}
		else {
			try_your_luck();
		}
	}

	//Override default description of class
	void structured_desc()
	{
		if (!is_empty) {
			cout << "vehicle_type:    " << vehicle_type << endl;
			cout << "color:           " << color << endl;
			cout << "count_of_wheels: " << "I'm from papper and don't have it!" << endl;
			cout << "length:          " << "Length of A4" << endl;
			cout << "width:           " << "Half of width of A4" << endl;
			cout << "mass:            " << mass << endl;
			cout << "max_speed:       " << max_speed << endl;
		}
		else {
			cout << "You don't have a " << vehicle_type << "!" << endl;
		}
	};

private:
	//Override random generating procedure
	void try_your_luck() {
		length = 0;
		width = 0;
		mass = 0;
		color = "checkered white";
		max_speed = 3 + rand() % 13;
		is_empty = false;
	}
};


int main()
{
	cout << "This is my car!" << endl; //Creating and describe car class
	car car_1;
	car_1.structured_desc();
	cout << "This is my moto!" << endl; //Creating and describe moto class
	motorcycle motorcycle_1;
	motorcycle_1.structured_desc();
	cout << "This is my plane!" << endl;//Creating and describe plane class
	plane plane_1;
	plane_1.structured_desc();
	cout << "This is my papper plane!" << endl; //Creating and describe papper plane class
	papper_plane papper_plane_1;
	papper_plane_1.structured_desc();
	system("pause");
	return 0;
};