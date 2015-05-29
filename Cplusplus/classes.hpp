
#pragma once


namespace mynamespace
{

class MyClass
{
	// C++ does not have static constructors

	// private members (default)
	int privateInstanceMember;
	static int privateStaticMember;
	static void privateStaticMethod();
	void privateMethod();

public:
	// public members
	int publicInstanceMember;
	static int publicStaticMember;
	static void publicStaticMethod();
	void publicMethod();

protected:
	// protected members
	int protectedInstanceMember;
	static int protectedStaticMember;
	static void protectedStaticMethod();
	void protectedMethod();

private:
	// more private members
};


	class MyBaseClass
	{
	public:
		virtual void methodToOverride();
	};

	class MyDerivedClass : public MyBaseClass
	{
	public:
		virtual void methodToOverride() override;
	};

	class MyAbstractClass
	{
	public:
		virtual void methodToImplement() = 0;
	};

	class MyConcreteClass
	{
	public:
		virtual void methodToImplement();
	};

} // mynamespace