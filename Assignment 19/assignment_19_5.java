// 5. Write a program to calculate power of number using loops

class Logic
{
    void calculatePower(int iBase , int iExpo)
    {
        int iCnt = 0;
        int iTable = 1;

        for(iCnt = 1 ; iCnt <= iExpo ; iCnt++)
        {
            iTable = iTable * iBase;
        }

        System.out.println(iTable);
    }
}

public class assignment_19_5 
{
    public static void main(String[] args) 
    {
        Logic obj = new Logic();
        obj.calculatePower(2, 5);
    }
}
