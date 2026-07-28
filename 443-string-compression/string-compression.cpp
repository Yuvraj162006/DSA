class Solution {
public:
    int compress(vector<char>& chars) {
        int n = chars.size();
        int read =0 ;
        int write =0;

        while(read < n){
            char current = chars[read]; // initialize with first char
            int count =0;

            while(read < n && chars[read]==current){
                count++;
                read++;
            }

            chars[write++] = current;

            if(count > 1){
                string cnt = to_string(count);

                for(char ch : cnt){
                    chars[write++] = ch;
                } 
            }
        }
        return write;
    }
};