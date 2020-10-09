# include <iostream>
// Sum numbers from 50 to 100

int main()
{
    int sum = 0, val = 50;
    while(val <101) {
        sum += val;
        ++val;
    }
    std::cout << "The sum is: " << sum << std::endl;
    return 0;
}
