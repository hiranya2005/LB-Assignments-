// 3. Write a program to display all factors of given number

class Logic
{
    void displayFactors(int iNo)
    {
        int iCnt = 0;

        for(iCnt = 1 ; iCnt <= iNo ; iCnt++)
        {
            if(iNo % iCnt == 0)
            {
                System.out.println(iCnt);
            }
        }
    }
}

public class assignment_21_3 
{
    public static void main(String[] args) 
    {
        Logic obj = new Logic();
        obj.displayFactors(12);
    }
}
