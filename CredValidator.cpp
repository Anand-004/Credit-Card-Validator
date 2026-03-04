// Credit card Validator program Using Luhn Algorithm

#include <iostream>

bool checkValid(std::string number);

int main()
{
    // Getiing Card number from user as input
    std::string number;
    std::cout << "\n#--------Credit card Validator----------#" << "\n";
    std::cout << "\n"
              << "Enter Your Credit Card Number : ";
    std::cin >> number;

    // Validation Function Call
    bool isValid = checkValid(number);

    // Showing result
    if (isValid)
    {
        std::cout << "\n The number " << number << " is a valid Credit Card Number\n";
    }
    else
    {
        std::cout << "\n The number " << number << " is NOT a VAlid Credit Card Number\n";
    }
    std::cout<<"\n---------------------------------------------------";
}

bool checkValid(std::string number)
{
    bool isEven = false;
    int sum = 0;
    for (int i = number.length()-1; i >=0; i--)
    {
        if (!isEven)
        {
            sum += number[i] - '0';
        }
        else
        {
            int num = (number[i]-'0') * 2;
            if (num > 9)
            {
                num = (num % 10) + (num/10%10);
            }
            sum += num;
        }
        isEven = !isEven;
    }

        if (sum % 10 == 0)
        {
            return true;
        }
        else
        {
            return false;
        }

}