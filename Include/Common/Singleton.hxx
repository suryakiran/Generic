#ifndef SINGLETON_HXX
#define SINGLETON_HXX

#define SINGLETON_CLASS(klassName)\
	public:\
		static klassName* instance (void); \
		~klassName() { }\
	protected:\
		klassName(); \
	private:\
		static klassName* m_instance 

#define SINGLETON_INSTANCE(klassName)         \
	klassName* klassName :: instance (void)      \
	{                                            \
		if (!m_instance)                         \
			m_instance = new klassName ;         \
		return m_instance ;                      \
	}

#define INIT_INSTANCE(klassName)\
	klassName* klassName :: m_instance = (klassName*) 0

#endif
