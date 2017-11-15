public static int[] bubbleSort(int[] list)
	{
		int n = list.length;
		int temp = 0;
		for(int i = 0; i < n; i++)
		{	
			for(int j = i;j < n;j++)
			{
				if(list[i]>list[j])
				{
					temp = list[i];
					list[i] = list[j];
					list[j] = temp;
				}
			}
		}
		
		return list;
	}
