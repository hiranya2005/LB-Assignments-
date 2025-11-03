// 1. Write a program to check whether the given year is leap year or not

class Logic
{
    void checkLeapYear(int iNo)
    {
        if(iNo % 400 == 0 || iNo % 4 == 0)
        {
            System.out.println("Given year is a leap year");
        }
        else
        {
            System.out.println("Given year is Not a leap year");
        }
    }
}

public class assignment_19_1 
{
    public static void main(String[] args) 
    {
        Logic obj = new Logic();
        obj.checkLeapYear(2024);
    }
}
