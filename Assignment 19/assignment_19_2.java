// 2. Write a program to display grades based on marks

class Logic
{
    void displayGrade(int iNo)
    {
        if(iNo >= 90 && iNo <= 100)
        {
            System.out.println("Grade: A+");
        }
        else if(iNo >= 80 && iNo < 90)
        {
            System.out.println("Grade: A");
        }
        else if(iNo >= 70 && iNo < 80)
        {
            System.out.println("Grade: B");
        }
        else if(iNo >= 50 && iNo < 70)
        {
            System.out.println("Grade: C");
        }
        else if(iNo >= 34 && iNo < 50)
        {
            System.out.println("Grade: D");
        }
        else
        {
            System.out.println("Grade: F");
        }
    }
}
public class assignment_19_2 
{
    public static void main(String[] args) 
    {
        Logic obj = new Logic();
        obj.displayGrade(82);
    }
}
