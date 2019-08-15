#include "Bar.h"
#include "Foo.h"

Bar::Bar() : m_foo(new Foo)
{

}

Bar::~Bar()
{
	delete m_foo;
}

void Bar::Init(const Foo &f)
{
	*m_foo = f;
}