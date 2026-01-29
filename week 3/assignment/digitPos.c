
int main

int digitPos1(int num, int digit)
{

    int pos = 1;
    int last_digit;
    int remaining_num = num;

    while (remaining_num > 0)
    {
        last_digit = remaining_num % 10;
        if (last_digit == digit)
        {
            return pos;
        }
        remaining_num = (remaining_num - last_digit) / 10;
        pos++;
    }
    return 0;
}