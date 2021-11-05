#pragma once

namespace Custom {

	class ZeroInputException { //Processing ZeroInputException
	public:
		System::String^ Print(bool% valid_input)
		{
			valid_input = 0;
			return "Exception: Zero input error. ";
		}
	};

	class NegativeValueException { //Processing NegativeValueException
	public:
		System::String^ Print(bool% valid_input)
		{
			valid_input = 0;
			return "Exception: Negative input error. ";
		}
	};

	class NotIntegerValueException { //Processing NotIntegerValueException
	public:
		System::String^ Print(bool% valid_input)
		{
			valid_input = 0;
			return "Exception: Not integer input error. " ;
		}
	};

	class InputValueTooBig { //Processing InputValueTooBig
	public:
		System::String^ Print(bool% valid_input)
		{
			valid_input = 0;
			return "Exception: Too big input error. ";
		}
	};



}