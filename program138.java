// 32 31 30 29  28 27 26 25  24 23 22 21  20 19 18 17  16 15 14 13  12 11 10 9  8 7 6 5  4 3 2 1
// 0  0  0  0   0  0  0  0   0  0  0  0   0  0  0  0   0  0  0  0   0  0  0  1  1 1 0 0  0 0 0 1
// 8  4  2  1   8  4  2  1   8  4  2  1   8  4  2  1   8  4  2  1   8  4  2  1  8 4 2 1  8 4 2 1
//    0            0           0             0             0           1         C        0 
import java.lang.*;
import java.util.*;
//bitwise problems 
// check wether the 7,8 9 th bit is on or off 


class Bitwise
{
  public boolean CheckBit(int iNo)
   {
         int iMask=0X000001C0 ;
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

class program304
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