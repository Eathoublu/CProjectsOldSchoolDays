//
// Created by 蓝一潇 on 2021/2/2.
//
# include"stdio.h"
int characterReplacement(char * s, int k){
    int last_time_new_char_idx=0, idx_start=0, idx_end=0, max_length=-1, current_k = k, repeat_time=1;
    char current = s[0];
    if(current=='\0'){
        return 0;
    }
    while(s[idx_end]!='\0'){
        if(s[idx_end+1]==current){
            idx_end++;
            repeat_time++;
            if(repeat_time>max_length){
                max_length = repeat_time;
            }
        }else if(current_k>0){
            if(s[idx_end+1]=='\0'){
//                if(s[idx_end]==current){
//                    repeat_time++;
//                    if(repeat_time>max_length){
//                        max_length = repeat_time;
//                    }
//                }
                /* method 1 */
                if(idx_start>=current_k){
                    repeat_time+=current_k;
                    if(repeat_time>max_length){
                        max_length = repeat_time;
                    }
                }else{
                    repeat_time+=idx_start;
                    if(repeat_time>max_length){
                        max_length = repeat_time;
                    }
                }
                /* end method 1 */
                if(last_time_new_char_idx==idx_start){
                    break;
                }else{
                    current_k = k;
                    if(k!=0){
                        idx_end = last_time_new_char_idx;}else{
                        idx_end++;
                    }
                    current = s[idx_end];
                    idx_start = idx_end;
                    if(repeat_time>max_length){
                        max_length = repeat_time;
                    }
                    repeat_time = 1;
                    continue;
                }

            }
            idx_end++;
            if(current_k==k){
            last_time_new_char_idx = idx_end;
            }
            current_k--;
            repeat_time++;
            if(repeat_time>max_length){
                max_length = repeat_time;
            }
        }else{
//            if(s[idx_end+1]=='\0'){
//                if(s[idx_end]==current){
//                    repeat_time++;
//                    if(repeat_time>max_length){
//                        max_length = repeat_time;
//                    }
//                }
//                break;
//            }
            current_k = k;
            if(k!=0){
            idx_end = last_time_new_char_idx;}else{
                idx_end++;
            }
            current = s[idx_end];
            idx_start = idx_end;
            if(repeat_time>max_length){
                max_length = repeat_time;
            }
            repeat_time = 1;
        }

    }
    return max_length;

}

//int main(){
//    char a[100] = "DECBBAAB";
//    printf("%d\n", characterReplacement(a, 2));
//    return 0;
//}