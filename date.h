#include <iostream>
#include <sstream>
using namespace std;

struct Date	{
	int year;
	int month;
	int day;
};

istream& operator>>(istream& in, Date &d)	{
	string input;
	char trash;
	in >> input;
	
	stringstream ss;
	ss << input;
	ss >> d.month >> trash >> d.day >> trash >> d.year;
	
	return in;
}

ostream& operator<<(ostream& out, Date d)	{
	return out << d.month << "/" << d.day << "/" << d.year;
}

Date operator+(Date a, int b)	{
	a.day += b;
	if (a.month == 2)	{
		if (a.year % 400 == 0)	{
			while (a.day > 29)	{
				a.day -= 29;
				a.month++;
			}
		}	else if (a.year % 4 == 0 and a.year % 100 != 0)	{
			while (a.day > 29)	{
				a.day -= 29;
				a.month++;
			}
		}	else	{
			while (a.day > 28)	{
				a.day -= 28;
				a.month++;
			}
		}
	}	else if (a.month == 4 or a.month == 6 or a.month == 9 or a.month == 11)	{
		while (a.day > 30)	{
			a.day -= 30;
			a.month++;
		}
	}	else	{
		while (a.day > 31)	{
			a.day -= 31;
			a.month++;
		}
	}
	while (a.month > 12)	{
		a.month -= 12;
		a.year++;
	}
	return a;
}

Date getTomorrow(Date a)	{
	a.day++;
	if (a.month == 2)	{
		if (a.year % 400 == 0)	{
			while (a.day > 29)	{
				a.day -= 29;
				a.month++;
			}
		}	else if (a.year % 4 == 0 and a.year % 100 != 0)	{
			while (a.day > 29)	{
				a.day -= 29;
				a.month++;
			}
		}	else	{
			while (a.day > 28)	{
				a.day -= 28;
				a.month++;
			}
		}
	}	else if (a.month == 4 or a.month == 6 or a.month == 9 or a.month == 11)	{
		while (a.day > 30)	{
			a.day -= 30;
			a.month++;
		}
	}	else	{
		while (a.day > 31)	{
			a.day -= 31;
			a.month++;
		}
	}
	while (a.month > 12)	{
		a.month -= 12;
		a.year++;
	}
	return a;
}

bool operator<(Date a, Date b)	{
	if (a.year < b.year)	{
		return true;
	}	else if (a.year > b.year)	{
		return false;
	}
	
	if (a.month < b.month)	{
		return true;
	}	else if (a.month > b.month)	{
		return false;
	}
	
	if (a.day < b.day)	{
		return true;
	}	else if (a.day > b.day)	{
		return false;
	}
	return false;
}

bool operator<=(Date a, Date b)	{
	if (a.year <= b.year)	{
		return true;
	}	else if (a.year >= b.year)	{
		return false;
	}
	
	if (a.month <= b.month)	{
		return true;
	}	else if (a.month >= b.month)	{
		return false;
	}
	
	if (a.day <= b.day)	{
		return true;
	}	else if (a.day >= b.day)	{
		return false;
	}
	return false;
}

bool operator>(Date a, Date b)	{
	if (a.year > b.year)	{
		return true;
	}	else if (a.year < b.year)	{
		return false;
	}
	
	if (a.month > b.month)	{
		return true;
	}	else if (a.month < b.month)	{
		return false;
	}
	
	if (a.day > b.day)	{
		return true;
	}	else if (a.day < b.day)	{
		return false;
	}
	return false;
}

bool operator>=(Date a, Date b)	{
	if (a.year >= b.year)	{
		return true;
	}	else if (a.year <= b.year)	{
		return false;
	}
	
	if (a.month >= b.month)	{
		return true;
	}	else if (a.month <= b.month)	{
		return false;
	}
	
	if (a.day >= b.day)	{
		return true;
	}	else if (a.day <= b.day)	{
		return false;
	}
	return false;
}

bool operator==(Date a, Date b)	{
	if (a.year == b.year)	{
		if (a.month == b.month)	{
			if (a.day == b.day)	{
			return true;
		}	else if (a.day != b.day)	{
			return false;
		}
		}	else if (a.month != b.month)	{
			return false;
		}
	}	else if (a.year != b.year)	{
		return false;
	}
	return false;	
}
