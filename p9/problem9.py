
# coding: utf-8

# In[2]:

import math


# In[17]:

def b(a):
    return (float(pow(1000,2) - 2000*a)) / (2000 - 2*a)


# In[30]:

def c(a):
    return math.sqrt(pow(a,2)+pow(b(a),2))


# In[23]:

def check(a):
    if b(a) == int(b(a)):
        return True
    else:
        return False


# In[24]:

a1 = 1
while check(a1) == False:
    a1 += 1
print a1


# In[28]:

def final_check(a):
    b1 = b(a)
    c = math.sqrt(pow(a,2) + pow(b1,2))
    if c == int(c):
        return True
    else:
        return False


# In[29]:

final_check(a1)


# In[31]:

def answer(a):
    return a * b(a) * c(a)


# In[32]:

answer(a1)


# In[ ]:



