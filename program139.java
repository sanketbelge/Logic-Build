// 32 31 30 29  28 27 26 25  24 23 22 21  20 19 18 17  16 15 14 13  12 11 10 9  8 7 6 5  4 3 2 1
// 1  0  0  0   0  0  0  0   0  0  0  0   0  0  0  0   0  0  0  0   0  0  0  0  0 0 0 0  0 0 0 1
// 8  4  2  1   8  4  2  1   8  4  2  1   8  4  2  1   8  4  2  1   8  4  2  1  8 4 2 1  8 4 2 1
//    8            0           0             0             0           0         0         1 
import java.lang.*;
import java.util.*;
//bitwise problems 
// check wether the 1st and 32nd bit is on or off 


class Bitwise
{
  public boolean CheckBit(int iNo)
   {
         int iMask=0X80000001 ;
         int iResult=0;
           
        iResult = iNo&iMask;
         
        if (iResult ==0)
       {
         return false;
        }
     else
        {
         return false;
        }
  
   }

}

class program305
{


  public static void main (String arg[])
  {


    Scanner sobj = new Scanner(System.in);
    System.out.println("enter iNo number");
    int value = sobj.nextInt();

    Bitwise bobj = new Bitwise();
    boolean bret = bobj.CheckBit(value);

   if(bret == true)
   {
     System.out.println("bit is on");

   }
  else 

   {

     System.out.println("bit is off");
    }




  }


}