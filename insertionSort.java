public static int[] insertionSort(int[] list)
	{
		int n = list.length;
		int temp = 0;
		for(int i = 1; i<n; i++)
		{
			int j = i;
			while(list[j]>list[j-1])
			{
				temp = list[j];
				list[j] = list[j-1];
				list[j-1] = temp;	
				j--;
			}
		}
		return list;
	}
