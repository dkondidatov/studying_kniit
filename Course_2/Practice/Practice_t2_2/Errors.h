#pragma once

namespace Custom {

	class NotIntegerValueException { //Processing NotIntegerValueException
	public:
		System::String^ Print(bool% valid_input)
		{
			valid_input = 0;
			return "Exception: Not integer input error.\r\n";
		}
	};

	class DevisionByZero { //Processing DevisionByZero Exception
	public:
		System::String^ Print(System::String^ variable, bool% valid_input)
		{
			valid_input = 0;
			return "Exception: Devision by zero. Caused by: " + variable + ".\r\n";
		}
	
	};



}