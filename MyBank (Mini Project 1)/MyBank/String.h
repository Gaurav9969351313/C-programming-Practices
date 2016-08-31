#pragma once
class String

{
private:
	char *ptr;

public:
	String();
	String(const char *p);
	const String &operator=(const String &s);

	bool operator==(const char *p);

	String(const String &s);
	void print();
	~String();
};

