#pragma once
class Counter
{
private:
	unsigned int count;
public:
	Counter() :count(0)     //condtractor
	{

	}
	Counter(int c) :count(c)        //condtractor
	{

	}
	int get_count()      //return count
	{
		return count;
	}
	Counter operator ++ ()  //prefix ++i;
	{
		++count;
		return Counter (count);
	}
	Counter operator -- ()
	{
		--count;
		return Counter(count);
	}
	Counter operator ++ (int) //post i++;
	{
	count++;
		return Counter(count);
	}
	Counter operator -- (int)
	{
		count--;
		return Counter(count);
	}

};

