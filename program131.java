import java.lang.*;
import java.util.*;

// check wheather 5th & 18th bit is on
// 0000 0000 0001 0000 0100 0000 0100 0000
//  0     0    0    2    0   0     1    0

class BitWise
{
	public boolean ChkBit(int no)
	{
		int iMask = 0X00020010;
		int result = 0;

		result = no & iMask;

		if(result == 0)
		{
			return false;
		}
		else
		{
			return true;
		}
	}
}

class program 292
{
	public static void main(String[] args)
	{
		Scanner sobj = new Scanner(System.in);

		System.out.println("Enter The No :");
		int value = sobj.nextInt();

		BitWise obj = new BitWise();

		boolean bret = obj.ChkBit(value);

		if(bret == true)
		{
			System.out.println("Bit Is On");	
		}
		else
		{
			System.out.println("Bit Is Off");
		}
	}
}