import java.util.*;
class PosNegZero
{
    public static void main(String []s)
    {
        int num;
        Scanner sc=new Scanner(System.in);
         System.out.print("Enter any integer number: ");
        num=sc.nextInt();
         if(num>0)
            System.out.println(num + " is POSITIVE NUMBER.");
        else if(num<0)
            System.out.println(num + " is NEGATIVE NUMBER.");
        else
            System.out.println("IT's ZERO.");
         
    }
}
