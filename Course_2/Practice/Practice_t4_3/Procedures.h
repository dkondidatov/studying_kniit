#pragma once
#include <string>
#include "Errors.h"

namespace Custom
{
    //Parsing string to int and validation
    System::String^ parse_int_input(System::String ^ input, int &input_value, bool &valid_input) {
        int tmp_value;
        System::String^ result = "Succefully parsed: ";
        try {
            if (System::Int32::TryParse(input, tmp_value)) //Trying to parse string to int. If input is not int throw NotIntegerValueException
            {
                if (tmp_value >= 0) //Check for non negative value. If input is negative throw NegativeValueException
                {
                    if (tmp_value != 0) //Check for zero. If input is zero throw ZeroInputException
                    {
                       result = result + tmp_value + "\r\n";
                       input_value = tmp_value;
                       valid_input = 1;
                    }
                    else { throw ZeroInputException(); result = result + tmp_value; }
                }
                else { throw NegativeValueException(); result = result + tmp_value; }
            }
            else { throw NotIntegerValueException(); result = result + tmp_value; }
        }

        catch (NotIntegerValueException)
        {
            NotIntegerValueException error;
            result = error.Print(valid_input) + "Your value is: " + input + "\r\n";
        }
        catch (NegativeValueException)
        {
            NegativeValueException error;
            result = error.Print(valid_input) + "Your value is: " + tmp_value + "\r\n";
        }
        catch (ZeroInputException)
        {
            ZeroInputException error;
            result = error.Print(valid_input) + "Your value is: " + tmp_value + "\r\n";
        }
        return result;
    };
    
    System::String^ validate_cell_value(System::String^ input, bool& valid_input) {
        int tmp_value;
        System::String^ result = "";
        try {
            if (System::Int32::TryParse(input, tmp_value)) //Trying to parse string to int. If input is not int throw NotIntegerValueException
            {
                valid_input = 1;
            }
            else { throw NotIntegerValueException(); return result; }
        }
        catch (NotIntegerValueException)
        {
            NotIntegerValueException error;
            result = error.Print(valid_input) + "Your value is: " + input + "\r\n";
        }
        return result;
    };
}