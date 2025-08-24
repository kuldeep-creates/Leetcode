class Solution {
public:
    string generateTag(string caption) {
        if (caption.empty()) {
            return "#";
        }

        string k = "#";
        for (int i = 0; i < caption.size(); i++) {
            if (isspace(caption[i])) {
                if (i + 1 < caption.size() && isalpha(caption[i + 1])) {
                    k += (char)toupper(caption[i + 1]);
                    i++;
                }
            } else if (isalpha(caption[i])) {
                k += (char)tolower(caption[i]);
            }
        }

        if (k.size() > 1) {
            k[1] = tolower(k[1]);
        }


        return k.size() < 100 ? k : k.substr(0, 100);
    }
};
