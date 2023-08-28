for (int i = size ; i >= pos; i--) // i = size as element at size -1 was being overwritten before it was shifted, thus it becomes garbage.  
            // {
            //     a[i] = a[i - 1];
            // }