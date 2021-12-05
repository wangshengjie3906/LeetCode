class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        
        // �ų��쳣�ı߽������Ҳ�޶���ģʽ���ĳ���
        if(s1.size() > s2.size()) return false;
        
        // ƥ����õĴ��ڴ�СΪģʽ����С
        int windowSize = s1.size();
        
        // ģʽ�����ֵ䣺���Կ���һ��Ƶ�ʷֲ�
        vector<int> hashmap1(26, 0);
        // ��̬���µ�ƥ�䴰���ֵ�
        vector<int> hashmap2(26, 0);
        
        // �����ֵ�
        for(int i = 0; i < windowSize; i++) {
            hashmap1[s1[i] - 'a']++;
            hashmap2[s2[i] - 'a']++;
        }
        
        // ����ÿһ�ֻ�����ѯ����������ֵ����(Ƶ�ʷֲ�һ��)��������
        for(int i = windowSize; i < s2.size(); i++) {
            // �����ֵ����(Ƶ�ʷֲ�һ��)��������
            if(hashmap1 == hashmap2) return true;
            
            // �������һ������������� hash ��Ĳ�����Ϊ��ӦƵ�ʵ�����
            hashmap2[s2[i - windowSize] - 'a']--;
            hashmap2[s2[i] - 'a']++;
        }
        
        // �����㷨��������ҿ����䣬��������һ������û���ж�
        return hashmap1 == hashmap2;
    }
};