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

    //Calculation factorial
    int calculate_factorial(int to_calculate) {
        int factorial;
        int sum = 0;
        for (int i = 1; i <= to_calculate; i++) {
            factorial = 1;
            for (int j = 1; j <= i; j++) {
                factorial = factorial * j;
            }
            sum += factorial;
        }
        return sum;
    }
}