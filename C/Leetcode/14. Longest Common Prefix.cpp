#include <bits/stdc++.h>

char* longestCommonPrefix(char** strs, int strsSize) {
    if (strsSize == 0 || strs == NULL) {
        char* empty = (char*)malloc(sizeof(char));
        empty[0] = '\0';
        return empty;
    }
    char *s = (char*)malloc((strlen(strs[0]) + 1) * sizeof(char));
    int i=0;
    int k=0;
    while(strs[i][k]!='\0'){
        s[k]=strs[i][k];
        k++;
    }
    s[k]='\0';
for(int i=1;i<strsSize;i++){
    int j=0;
    while(s[j] != '\0' && strs[i][j] != '\0'){
        if(s[0]=='\0'){
            return s;
        }
        if(s[j]==strs[i][j]){
            j++;
        }
        else{
            s[j]='\0';
            break;
        }
    }
    s[j] = '\0';
}
return s;

}

int main (){
// Kh?i t?o m?ng các chu?i d? ch?y th? nghi?m
    char* danh_sach_chuoi[] = {"flight", "fly", "flow"};
    int so_luong = 3;
    
    // G?i hàm x? lý
    char* ket_qua = longestCommonPrefix(danh_sach_chuoi, so_luong);
    
    // In k?t qu? ra màn hình
    printf("Tien to chung dai nhat la: \"%s\"\n", ket_qua); // Output mong mu?n: "fl"
    
    // Gi?i phóng b? nh? sau khi dùng xong
    free(ket_qua);

  return 0;
}

