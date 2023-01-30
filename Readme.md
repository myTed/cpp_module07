cpp07 설명
=========
1. ex00 function Template
----------------------------
2. ex01 C++ overload resolution
----------------------------

* * *
```c++
template <typename T>
void	iter(T* const startAddr, int length, void (*f)(T& rT))
{
	if (startAddr == 0)
		return ;
	for (int idx = 0; idx < length; idx++)
	{
		f(startAddr[idx]);
	}
}

template <typename T>
void	iter(const T* const startAddr, int length, void (*f)(const T& rT))
{
	if (startAddr == 0)
		return ;
	for (int idx = 0; idx < length; idx++)
	{
		f(startAddr[idx]);
	}
}
```


link : [노션링크] [Notionlink]

Notionlink : https://www.notion.so/C-overload-resolution-b2c984a7c374456f9eeae7fb83dba9d5

* * *

3. ex02 What Empty Arry?
----------------------------