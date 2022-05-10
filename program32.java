import java.lang.*;
import java.io.*;


class Factors
{
	int iNo;
	
	Factors()
	{
		this.iNo=0;
	}
	
	int SumFactors(int iNo)
    {
        int iCnt=0;
	    int iSum=0;
	
	    if(iNo<0)
	    {
		    iNo=-iNo;
	    }
		
	    for(iCnt=1; iCnt<=(iNo/2); iCnt++)
	    {
		    if((iNo % iCnt)==0)
		    {
			    iSum = iSum+iCnt;
		    }
	    }
        return iSum;	
    }	
}

class program32
{
	public static void main(String arg[])
	{

		int iRet =0;
		
		Factors fobj = new Factors();
	     
		InputStreamReader iobj = new InputStreamReader(System.in);
		BufferedReader bobj = new BufferedReader(iobj);
		
		try
		{
			System.out.println("Enter number :");
			int iValue = Integer.parseInt(bobj.readLine());
			iRet =fobj.SumFactors(iValue);
		}
		catch(IOException obj)
		{
			System.out.println("Exception occurs");
		}
		finally
		{
			iobj = null;
			bobj= null;
		}		
		
		System.out.println("Sum of factors is : "+iRet);
			
	}
}