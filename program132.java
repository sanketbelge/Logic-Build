import java.lang.*;
import java.util.*;

// check wheather 7th & 15th 21 28 bit is on
// 0000 1000 0001 0000 0100 0000 0100 0000
//  0     8    1    0    4   0     4    0

class BitWise
{
	public boolean ChkBit(int no)
	{
		int iMask = 0X08104040;
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

class program 293
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