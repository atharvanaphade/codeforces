tc = int(input())
for _ in range(tc):
    n = int(input())
    s = input()
    if((n == 3 or n < 2) and s != 'TMT'):
        print("NO")
    else:
        t_count = 0
        m_count = 0
        if(s[0] == s[n - 1] and s[0] == 'T'):
            for i in range(n):
                if(s[i] == 'T'):
                    t_count += 1
                elif(s[i] == 'M'):
                    m_count += 1
            if((t_count - m_count) == m_count):
                print("YES")
            else:
                print("NO")
        else:
            for i in range(n):
                if(s[i] == 'T'):
                    t_count += 1
                elif(s[i] == 'M'):
                    m_count += 1
            if((t_count - m_count) == m_count and s[0] == s[n - 1] == 'T'):
                print("YES")
            else:
                print("NO")