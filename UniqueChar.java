import java.io.*;

public class UniqueChar_01 {

	public static void main(String[] args) throws IOException {
		// TODO Auto-generated method stub
		
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		String s = br.readLine();		
		System.out.println(checkUnique(s));
		
		
	}
	
	public static boolean checkUnique(String s)
	{
		boolean[] buffer = new boolean[128];
		for (int i = 0; i< s.length(); i++)
		{
			int index = s.charAt(i);
			if(buffer[index])
				return false;
			buffer[index] = true;			
		}
		return true;			
	}

}
