
namespace mynamespace
{
	public class MyClass
	{
		// static constructor
		static MyClass()
		{
			privateStaticMember = 0;
			publicStaticMember = 10;
			protectedStaticMember = 20;
		}

		// private members
		private int privateInstanceMember;
		private static int privateStaticMember;
		private static void privateStaticMethod()
		{ // inline implementation 
		}
		private void privateMethod()
		{ }

		// public members
		public int publicInstanceMember;
		public static int publicStaticMember;
		public static void publicStaticMethod()
		{ }
		public void publicMethod()
		{ }

		// protected members
		protected int protectedInstanceMember;
		protected static int protectedStaticMember;
		protected static void protectedStaticMethod()
		{ }
		protected void protectedMethod()
		{ }



		void fixwarnings()
		{
			privateInstanceMember = 10;
			privateInstanceMember++;
			MyClass.privateStaticMember++;
			MyClass.protectedStaticMember++;
		}
	}

	public class MyBaseClass
	{
		public virtual void methodToOverride()
		{}
	}

	public class MyDerivedClass : MyBaseClass
	{
		public override virtual void methodToOverride()
		{}
	}

	public abstract class MyAbstractClass
	{
		public abstract void methodToImplement();
	}

	public class MyConcreteClass : MyAbstractClass
	{
		public void methodToImplement()
		{
		}
	}
}
