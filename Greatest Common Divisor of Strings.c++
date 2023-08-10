class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        int l1 = str1.length(), l2 = str2.length();
        if (l1 < l2) return gcdOfStrings(str2, str1);
        if (l2 == 0) return str1;
        if (str1.substr(0, l2) == str2) 
            return gcdOfStrings(str1.substr(l2), str2);
        return "";

    }
};

str1 = "ABCABC", str2 = "ABC"
l1 = 6, l2 = 3
str1.substr(0, l2) = "ABC" == str2
return gcdOfStrings("ABCABC".substr(3), "ABC")
return gcdOfStrings("ABC", "ABC")
l1 = 3, l2 = 3
str1.substr(0, l2) = "ABC" == str2
return gcdOfStrings("ABC".substr(3), "ABC")

