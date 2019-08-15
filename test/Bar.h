#pragma once

struct Foo;

class Bar
{
public:
	Bar();
	~Bar();
	void Init(const Foo &);

	Foo *m_foo;
};
