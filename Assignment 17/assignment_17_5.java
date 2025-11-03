// 5. Write program to print multiplication table of a number

class Logic
{
    void printTable(int iNo)
    {
        int iCnt = 0;
        int iTable = 0;

        for(iCnt = 1 ; iCnt <= 10 ; iCnt++)
        {
            iTable = iNo * iCnt;

            System.out.println(iNo + " x " + iCnt + " = " + iTable);
        }
    }
}
public class assignment_17_5 
{
    public static void main(String[] args) 
    {
        Logic obj = new Logic();
        obj.printTable(5);
    }
}
