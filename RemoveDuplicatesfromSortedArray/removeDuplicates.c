int removeDuplicates(int* nums, int numsSize) {
    int i = 0;
    int j;
    if(numsSize == 0) return 0;
    for(j = 1; j < numsSize; j++){//已排序只需遍历一遍
        if(nums[i] != nums[j]){        
            nums[i+1] = nums[j];
             i++;
        } 
    }
    return i+1;
} 
