#include <iostream>
#include <string.h>
#include <sstream>

using namespace::std;


class OtherError
{
public:
	virtual void print() { cerr << "Прочая ошибка\n"; }
};

class CustomError : public OtherError
{
	int max_rank;
	int number;
public:
	CustomError(int max_rank, int number) : max_rank(max_rank), number(number) { };
	void print() { cerr << "The number is too big! And I cant proccess this part of number: " << number << " Max rank size is " << max_rank << endl; }
};

class integer {

public:
	//Override conversion function to integer
	operator int() const { return get_value(); };
	//explicit operator int* () const { return nullptr; };

	int get_rank() const { return number_rank; }; //Getting the digits of a number 

	void set_value(int new_value) { 
		fulling_from_integer(new_value); 
	
	}; //Setting new value

	//Get value
	int get_value() const {
		int temp;
		int result_value = 0;
		int i = number_rank;
		
		while (i != 0) //Listing array per elements and multiplying elements on powers of 10   
		{
			temp = value[i]*pow(10,i);
			result_value += temp;
			i--;
		}
		result_value += value[i]; //Adding sign
		
		if (negative)
			result_value = -result_value;

		return result_value;
	};

	//Translation from decimal to bynary 
	string bynary_translation() {
		string result = "";
		int temp = get_value();
		do
		{
			result.append(to_string(temp % 2));
			temp = temp / 2;
		} while (temp > 0);

		return std::string(result.crbegin(), result.crend());
	};

	//Constructor for class from int value
	integer(int input_number = 0) { fulling_from_integer(input_number);	};
	//Destructor
	~integer() { };

private:
	int number_rank = 0; //Variable that contains number of ranks
	int max_rank = 5; 
	int value[10] = {0}; //Array that contains numbers
	bool negative = false; //Variable that contains number sign
	bool is_empty = true;

	void fulling_from_integer(int input_number = 0)
	{
		
		if (!is_empty) {
			for (int j = 0; j < number_rank; j++)
				value[j] = 0;
			number_rank = 0;
			is_empty = true;
			negative = false;
		}

		//Checking for sign
		if (input_number < 0) {
			input_number = -input_number;
			negative = true;
		}

		if (input_number != 0) is_empty = false;

		try {
			int temp = 0;
			int i = 0;
			//if (0) throw i;
			//Separate numbers of value to array
			while (input_number != 0)
			{
				if (i >= max_rank) throw CustomError(max_rank, input_number);
				temp = input_number % 10;
				input_number /= 10;
				value[i] = temp;
				number_rank++;
				i++;
				cout << "Do" << i << endl;
			}			
		}
		catch (CustomError& m)
		{
			m.print();
		}
		catch (...)
		{
			cout << "Some error" << endl;
		}
	};
};

//Override addition operator for class 
integer operator+(const integer& d1, const integer& d2)
{
	//int result_value = d1.get_value();
	return  (d1.get_value() + d2.get_value());
}

//Override difference operator for class
integer operator-(const integer& d1, const integer& d2)
{
	//int result_value = d1.get_value();
	return  (d1.get_value() - d2.get_value());
}

//Override division operator for class
integer operator/(const integer& d1, const integer& d2)
{
	//int result_value = d1.get_value();
	return  (d1.get_value() / d2.get_value());
}

//Override multiply operator for class
integer operator*(const integer& d1, const integer& d2)
{
	//int result_value = d1.get_value();
	return  (d1.get_value() * d2.get_value());
}

//Override remainder division operator for class
integer operator%(const integer& d1, const integer& d2)
{
	//int result_value = d1.get_value();
	return  (d1.get_value() % d2.get_value());
}

//Override comparison operator for class
integer operator==(const integer& d1, const integer& d2)
{
	//int result_value = d1.get_value();
	return  (d1.get_value() == d2.get_value());
}

int main()
{
	//integer a = integer(241);
	integer b = integer(-10);
	//cout << a.get_value() << endl;
	cout << b.get_value() << endl;
	b.set_value(96687952);
	cout << b.get_value() << endl;
	//bool number = (a == b);
	//cout << number;

	//cout << a.bynary_translation();
	//int sz = a.get_size();
	//cout << sz << endl;
	//system("pause");
}