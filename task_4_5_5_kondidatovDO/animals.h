#pragma once
#include <string>
#include <cmath>

//using namespace::System;
namespace Custom {

	using namespace::Custom;

	int cow_id;
	int sheep_id;
	int goat_id;

	ref class Animal {
	public:
		System::String^ describe()		{
			System::String^ temp_desc = gcnew System::String(kind + " ID: [" + id + "] Age: " + age);
			return temp_desc;
		}
		int get_id()		{
			return id;
		};
		System::String^ get_kind()		{
			return kind;
		};
		System::String^ get_age()		{
			return age;
		};
		float get_productivity()		{
			return productivity;
		}
		float get_income()		{
			return income;
		}

	protected:
		System::String^ kind;
		System::String^ age;
		int id = 0;
		float productivity = 1;
		float income = 0;
		bool is_empty = true;
		int basic_income = 0;

		float calculate_income() {
			return round((basic_income * productivity) * 100) / 100;

		}
		float rnd_between(float smallNumber, float bigNumber) {
			float diff = bigNumber - smallNumber;
			return (float)(round(((((float)rand() / RAND_MAX) * diff) + smallNumber) * 100) / 100);
		}
	};

	ref class Cow : public Custom::Animal {
	public:
		Cow() {
			kind = "Cow"; //Kind of animal
			Custom::cow_id++; //Inc global ID
			id = Custom::cow_id; //Set global ID as its own

			set_age(); //Set age and calculate productivity
				
			basic_income = 500; //Set basic income for kind and calculate total income
			income = calculate_income(); 
			
			is_empty = false;
		}

	private:
		void set_age() {
			int max_age_mature = 4;
			int max_age_young = 2;
			int max_age = 5;

			int age_temp = 1 + rand() % max_age;

			if (age_temp >= max_age_mature) {
				age = "old";
				productivity = rnd_between(0.3, 0.9);
			}
			else if (age_temp >= max_age_young)	{
				age = "mature";
				productivity = rnd_between(0.8, 2);
			}
			else {
				age = "young";
				productivity = rnd_between(0.4, 1.2);
			}
		}
	};

	ref class Sheep : public Custom::Animal {
	public:
		Sheep() {
			kind = "Sheep"; //Kind of animal
			Custom::sheep_id++; //Inc global ID
			id = Custom::sheep_id; //Set global ID as its own
			
			set_age(); //Set age and calculate productivity
						
			basic_income = 300;
			income = calculate_income();//Set basic income for kind and calculate total income
		
			is_empty = false;
		}

	private:
		void set_age()
		{
			int max_age_mature = 3;
			int max_age_young = 1;
			int max_age = 4;

			int age_temp = 1 + rand() % max_age;

			if (age_temp >= max_age_mature) {
				age = "old";
				productivity = rnd_between(0.3, 0.9);
			}
			else if (age_temp >= max_age_young) {
				age = "mature";
				productivity = rnd_between(0.8, 2);
			}
			else {
				age = "young";
				productivity = rnd_between(0.4, 1.2);
			}
		}
	};

	ref class Goat : public Custom::Animal {
	public:
		Goat() {
			kind = "Goat"; //Kind of animal
			Custom::goat_id++; //Inc global ID
			id = Custom::goat_id; //Set global ID as its own
			
			set_age(); //Set age and calculate productivity
						
			basic_income = 200; //Set basic income for kind and calculate total income 
			income = calculate_income();

			is_empty = false;
		}

	private:
		void set_age()
		{
			int max_age_mature = 3;
			int max_age_young = 1;
			int max_age = 4;

			int age_temp = 1 + rand() % max_age;

			if (age_temp >= max_age_mature) {
				age = "old";
				productivity = rnd_between(0.3, 0.9);
			}
			else if (age_temp >= max_age_young) {
				age = "mature";
				productivity = rnd_between(0.8, 2);
			}
			else {
				age = "young";
				productivity = rnd_between(0.4, 1.2);
			}
		}
	};
}
