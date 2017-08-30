import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class Rotate90 {

	static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
	public static void main(String[] args) throws NumberFormatException, IOException {
		// TODO Auto-generated method stub
		
		System.out.print("Enter N : ");
		String [][] input = new String[10][10];
		int N = Integer.parseInt(br.readLine());
		input = readArray(N);
		printArray(input,N);
		input = rotate90(input,N);
		printArray(input,N);
		

	}
	
	public static String[][] readArray(int N) throws IOException
	{
		String [][] input = new String[10][10];
		for(int i=0;i<N;i++)
			for (int j=0;j<N;j++)
			{
				System.out.println("Enter Element at ("+i+","+j+") position");
				input[i][j] = br.readLine();
			}
		
		return input;
	}
	
	public static void printArray(String[][] input,int N)
	{
		for(int i=0;i<N;i++)
		{
			for (int j=0;j<N;j++)
				System.out.print(input[i][j]+' ');
			System.out.println(' ');	
			
		}
	}
	
	public static String[][] rotate90(String[][] input,int N)
	{
		String temp1,temp2,temp3,temp4;
		for(int i=0;i<N-2;i++)
		{
			for (int j=i;j<N-i-1;j++)
			{
				temp1 = input[i][j];
				temp2 = input[(N-j-1)%N][i];
				temp3 = input[(N-i-1)%N][(N-j-1)%N];
				temp4 = input[j][(N-i-1)%N];
				input[i][j] = temp2;
				input[(N-j-1)%N][i] = temp3;
				input[(N-i-1)%N][(N-j-1)%N] = temp4;
				input[j][(N-i-1)%N] = temp1;
			}				
		}
		return input;
	}
}
