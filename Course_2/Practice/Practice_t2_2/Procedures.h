#pragma once
#include <string>
#include "Errors.h"

namespace Custom
{
    //Parsing string to int and validation
    System::String^ parse_int_input(System::String^ input, int& input_value, bool& valid_input) {
        int tmp_value;
        System::String^ result = "Succefully parsed: ";
        try {
            if (System::Int32::TryParse(input, tmp_value)) //Trying to parse string to int. If input is not int throw NotIntegerValueException
            {
                result = result + tmp_value + "\r\n";
                input_value = tmp_value;
                valid_input = 1;
                return result;
            }
            else { throw NotIntegerValueException(); result = result + tmp_value; }
        }
        catch (NotIntegerValueException)
        {
            NotIntegerValueException error;
            result = error.Print(valid_input);
        }
        return result;
    };

    System::String^ scope_check(int x, int y, bool& scope_check) //Check X and Y for funtion scope
    {
        System::String^ result = "";
        System::String^ caused_by_variable = "";
        scope_check = 1;       
        try{
            if ((x + 1) == 0) //If x + 1 == 0 then throw DevisionByZero
            {
                caused_by_variable = "X";
                throw DevisionByZero();
                return result;
            }
            if ((y - 5) == 0) //If Y - 5 == 0 then throw DevisionByZero
            {
                caused_by_variable = "Y";
                throw DevisionByZero();
                return result;
            }
        }
        catch (DevisionByZero)
        {
            scope_check = 0;
            DevisionByZero error;
            result = error.Print(caused_by_variable, scope_check);
        }
        return result;
    };

    //Calculate function
    float calculate_function(int x, int y)
    {
        float result;
        result = (pow(x, 3) + pow(y, 3) - cos(x)) / (pow((x + 1), 2) * (y - 5));
        return result;
    }
}