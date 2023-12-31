import java.util.*;
public class main
{
    public static void main(String [] args)
    {
        //take inputs from user
        Scanner sc=new Scanner(System.in);
        System.out.print("enter a number \n");
        int num=sc.nextInt();
        if(num%2==0)
        {
            System.out.print("given number is even : \n");
        }
        else
        {
            System.out.print("given number is odd :\n");
        }
    }
}


// comparision between two number 
import java.util.*;
public class main
{
    public static void main(String [] args)
    {
        //take inputs from user
        Scanner sc=new Scanner(System.in);
        System.out.print("enter two  number \n");
        int a=sc.nextInt();
        int b=sc.nextInt();
        
        if(a==b)
        {
            System.out.print("a is equal to b \n");
        }
        else if(a<b)
        {
            System.out.print("a is less the b \n");
        }
        else
        {
        System.out.print("a is grater then b \n");
        }
        
    }
}

//switch case 
import java.util.*;
public class main
{
    public static void main(String [] args)
    {
        //take input 
        Scanner sc=new Scanner(System.in);
        System.out.print("enter one button (from 1-7 ):\n");
        int button=sc.nextInt();
        switch(button)
        {
            case 1:
                {
                    System.out.print("hello");
                    break;
                }
                case 2:
                {
                    System.out.print("Namaste");
                    break;
                }
                case 3:
                {
                    System.out.print("Bonjour");
                    break;
                }
                case 4:
                {
                    System.out.print("GoodMorning");
                    break;
                }
                case 5:
                {
                    System.out.print("GoodAfternoon");
                    break;
                }
                case 6:
                {
                    System.out.print("GoodEvening");
                    break;
                }
                case 7:
                {
                    System.out.print("GoodNight");
                    break;
                }
                default:
                {
                    System.out.print("envalid input");
                }
        }
    }
    
}

//dino ke name print -> according  to its precidance 
import java.util.*;
public class main
{
    public static void main(String [] args)
    {
        //take input 
        System.out.println(" we are printing week days name :");
        System.out.print("enter one button (from 1-7 ):\n");
        System.out.print(" 1 for Monday:\n");
        System.out.print(" 2 for Tuesday:\n");
        System.out.print(" 3 for Wednesday:\n");
        System.out.print(" 4 for Thursday:\n");
        System.out.print(" 5 for Friday:\n");
        System.out.print(" 6 for Saturday:\n");
        System.out.print(" 7 for sunday:\n");
        Scanner sc=new Scanner(System.in);
        System.out.print("\n");
        int button=sc.nextInt();
        switch(button)
        {
            case 1:
                {
                  System.out.print("Monday");
                    break;  
                }
                case 2:
                {
                    System.out.print("Tuesday");
                    break;
                }
                case 3:
                {
                    System.out.print("Wednesday");
                    break;
                }
                case 4:
                {
                    System.out.print("Thursday");
                    break;
                }
                case 5:
                {
                    System.out.print("Friday");
                    break;
                }
                case 6:
                {
                    System.out.print("Saturday");
                    break;
                }
                case 7:
                {
                    System.out.print("Sunday");
                    break;
                }
                default:
                {
                    System.out.print("envalid input");
                }
        }
    }
    
}
    
//using for loop
import java.util.*;
public class main
{
    public static void main(String [] args)
    {
        Scanner sc=new Scanner(System.in);
        System.out.print(" enter how many times you went to print: \n ");
        int n=sc.nextInt();
        int count=0;
        for(int i=0;i<n;i++)
        {
            System.out.print(" jay shree ram \n");
            count++;
            System.out.print(count);
            System.out.print("\n");
        }
    }
    
}
    

    

//sum of two integer using function 
import java.util.*;
class Function  {
    public static int calculateSum(int a,int b)
    {
        int sum=a+b;
        return sum;
    }
    public static void main(String[] args) {
        System.out.println(" we are calculate the sum of two integer value :");
        System.out.println(" enter two value :");
       Scanner sc=new Scanner(System.in);
       int a=sc.nextInt();
       int b=sc.nextInt();
       int sum=calculateSum(a,b);
       System.out.println(" the sum of 2 integer value is ->"+sum);
    }
}


//calculate product of two integer value 
import java.util.*;
public class function{
public static int calculateProduct(int num1,int num2)
{
    return num1*num2;
}
    public static void main(String ram[])
    {
        System.out.println(" product of two integer value  :");
        System.out.println(" entetr two number :");
        Scanner sc=new Scanner(System.in);
        int num1=sc.nextInt();
        int num2=sc.nextInt();
        System.out,println(" the product of two integer value is :"+calculateProduct(num1,num2));
    }
}


//finding the factorrial of a given number 
import java.util.*;
public class function{
    public static int factorial(int n)
    {
        int product=1;
        for(int i=1;i<=n;i++)
        {
          product*=i;
        }
        return product;
    }
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        Ststem.out.println(" enter value whoes factorial you wont");
        int n=sc.nextInt();
        System.out.println("the factorial of a given number is :"+factorial(n));


    }
}

//using array 
import java.util.*;
public class function{
    public static void main(String args[])
    {
        System.out.println("your subjectiv marks is :");
      int[] marks=new int[3];
      marks[0]=97;//physics marks 
      marks[1]=89;//chemistry marks
      marks[2]=99;//maths marks 
      for(int i=0;i<3;i++)
      {
          System.out.println(marks[i]);
      }
    }
}


//take input from user and then outputs the value 
import java.util.*;
public class Array {
    public static void main(String[] args) {
         //int[] marks=new int[size];
         //int marks[]=new int[size];
        int marks[]=new int[];
        Scanner sc=new Scanner(System.in);
        for(int i=0;i<3;i++)
        {
             marks[i]=sc.nextInt();
        }
        int size=marks.length;//bracket nahi lagte hai 
        for(int i=0;i<size;i++)
        {
            System.out.print(marks[i]+"\n");
        }
    }
}
// enter element in 2d array and then print :
//import java.util.*;
public class TwoD_Array {
    public static void main(String[] args) {
         //int[] marks=new int[size];
         Scanner sc=new Scanner(System.in);
         System.out.println(" enter the size of row and column :");
         int row=sc.nextInt();
         int col=sc.nextInt();
         int[][] matrix=new int[row][col];
         System.out.println(" enter 2D array element:");
         for(int i=0;i<row;i++)
         {
             for(int j=0;j<col;j++)
             {
                 matrix[i][j]=sc.nextInt();
             }
         }
         System.out.println(" now we will print the 2D element:");
         for(int i=0;i<row;i++)
         {
             for(int j=0;j<col;j++)
             {
                 System.out.println(matrix[i][j]+" ");
             }
             System.out.println();
         }
         
    }
}


// Use this editor to write, compile and run your Java code online
import java.util.*;
public class Arrays {
    public static void main(String[] args) {
    StringBuilder sb=new StringBuilder("tony");
   // System.out.println(sb);
    //char at index 0;;
    /*System.out.println(sb.setCharAt(0));*/
    //sb.setCharAt(0,'p');
     System.out.println(sb);
     sb.insert(2,'s');
     System.out.println(sb);
    
    //delete subarray in string2t0 4 tak delete kar dega
     sb.delete(2,5);
     System.out.println(sb);
     
     //appending in string 
     sb.append("ob");
     System.out.println(sb);
     System.out.println(sb.length());
     
    
    }
}

//set bits programs 
import java.util.*;
public class HelloWorld {
   public static void main(String[] args) {
      Scanner sc=new Scanner(System.in);
      int n=5;
      int pos=3;
      int bitmask=1<<pos;
      int ans=bitmask^n;
      System.out.println(ans);
    }
}

//Getbits program
import java.util.*;
public class HelloWorld {
   public static void main(String[] args) {
      Scanner sc=new Scanner(System.in);
      int n=5;
      int pos=3;
      int bitmask=1<<pos;
      if((bitmask&n)==1)
      System.out.println("1");
      else
      System.out.println("1");
    }
}


//clearbits program
import java.util.*;
public class HelloWorld {
   public static void main(String[] args) {
      Scanner sc=new Scanner(System.in);
      int n=13;
      int pos=3;
      int bitmask=~(1<<pos)
      int ans=bitmask&n;
      System.out.println(ans);
}
}


//Tower of Hannoi
 // Online Java Compiler
// Use this editor to write, compile and run your Java code online
import java.util.*;
public class Recursions
{
    public static void towerOfHannoi(int n,String src,String help,String dest)
    {
        //base case
        if(n==1)
        {
            System.out.println(" Transfer Disk "+ n + " from " + src + " to "+ dest);
            return ;
        }
        towerOfHannoi(n-1,src,dest,help);
        System.out.println(" Transfer Disk "+ n + " from " + src + " to "+ dest);
        towerOfHannoi(n-1,help,src,dest);
    }
    public static void main(String[] args)
    {
      int n=3;
      towerOfHannoi(n,"S","H","D");
    }
}
/*
outputs for disk n=3;
 Transfer Disk 1 from S to D
Transfer Disk 2 from S to H
Transfer Disk 1 from D to H
 Transfer Disk 3 from S to D
 Transfer Disk 1 from H to S
 Transfer Disk 2 from H to D
 Transfer Disk 1 from S to D
 */

 //Remove all Duplicate char in the given String 
import java.util.*;
public class Recursion {
    public static boolean[] map=new boolean[26];
    public static void removeDuplicate(String str,int index,String newString)
    {
        //base case 
        if(index==str.length())
        {
            System.out.println(newString);
            return ;
        }
        char currentChar=str.charAt(index);
        if(map[currentChar-'a']==true)
        {
            removeDuplicate(str,index+1,newString);
        }
        else
        {
           newString+=currentChar;
           map[currentChar-'a']=true;
           removeDuplicate(str,index+1,newString); 
        }
    }
    public static void main(String[] args) {
        String str="abbcda";
        removeDuplicate(str,0," ");

    }
}
import java.util.*;
public class recursion {
    public static String[] keyPaid={" "," ","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    public static void printComb(String str,int index,String combination)
    {
        //base case 
        if(index==str.length())
        {
            System.out.println(combination);
            return ;
        }
        char currentChar=str.charAt(index);
        String mapping=keyPaid(currentChar-'0');
        for(int i=0;i<mapping.length();i++)
        {
            printComb(str,index+1,combination+mapping.charAt(i));
        }
    }
    public static void main(String[] args) {
        String str="23";
        printComb(str,0," ");
        
    }
}


//keypaid permutation 
import java.util.*;
public class recursion {
    public static String[] keyPaid={" "," ","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    public static void printComb(String str,int index,String combination)
    {
        //base case 
        if(index==str.length())
        {
            System.out.println(combination);
            return ;
        }
        char currentChar=str.charAt(index);
        String mapping=keyPaid[currentChar-'0'];
        for(int i=0;i<mapping.length();i++)
        {
            printComb(str,index+1,combination+mapping.charAt(i));
        }
    }
    public static void main(String[] args) {
        String str="23";
        printComb(str,0,"");
        
    }
}

