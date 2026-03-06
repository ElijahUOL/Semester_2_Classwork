
void bubbleSort(int array[], int n);
/**
 * @brief Sorts an array of integers in ascending order using the bubble sort algorithm.
 * 
 * @param array The array of integers to be sorted.
 * @param n The number of elements in the array.
 */
void bubbleSort(int array[], int n)
{
  // code goes here
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n-1; j++)
    {
      if (array[j] > array[j+1])
      {
        int temp = array[j];
        array[j] = array[j+1];
        array[j+1] = temp;
      }
    }
  }
}