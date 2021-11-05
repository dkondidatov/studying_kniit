#pragma once
#include <string>
#include "Errors.h"

namespace Custom
{
    //Parsing string to int and validation
    System::String^ parse_int_input(System::String ^ input, int &input_value, int max_value_input, bool &valid_input) {
        int tmp_value;
        System::String^ result = "Succefully parsed: ";
        try {
            if (System::Int32::TryParse(input, tmp_value)) //Trying to parse string to int. If input is not int throw NotIntegerValueException
            {
                if (tmp_value >= 0) //Check for non negative value. If input is negative throw NegativeValueException
                {
                    if (tmp_value != 0) //Check for zero. If input is zero throw ZeroInputException
                    {
                        if (tmp_value <= max_value_input) { //Check for max value. If input bigger than max value throw InputValueTooBig
                            result = result + tmp_value;
                            input_value = tmp_value;
                            valid_input = 1;
                        }
                        else { throw StackOverflow(); result = result + tmp_value; }
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
            result = error.Print(valid_input) + "Your value is: " + input;
        }
        catch (NegativeValueException)
        {
            NegativeValueException error;
            result = error.Print(valid_input) + "Your value is: " + tmp_value;
        }
        catch (ZeroInputException)
        {
            ZeroInputException error;
            result = error.Print(valid_input) + "Your value is: " + tmp_value;
        }        
        catch (StackOverflow)
        {
            StackOverflow error;
            result = error.Print(valid_input) + "Your value is: " + tmp_value + ".\r\nUse value less than " + max_value_input;
        }
        return result;
    };
    
    int calculate_factorial(int to_calculate) { // A(n) = A(n-1) + (A(n-1) - A(n-2)) * n
        int A_1;
        int A_2;        
        if (to_calculate <= 1) {
            return 1;
        }
        else if (to_calculate == 2) {
            return 3;
        }
        else {
            A_1 = calculate_factorial(to_calculate - 1);
            A_2 = calculate_factorial(to_calculate - 2);
            return A_1 + (A_1 - A_2) * to_calculate;
        }
    }
}