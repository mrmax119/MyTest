#ifndef delimiter 
#define delimiter 
#endif 


#ifndef enumeration_begin 
#define enumeration_begin(arg) enum arg { 
#endif 

#ifndef enumeration_end 
#ifdef last_enumerator 
#define enumeration_end delimiter last_enumerator } 
#else 
#define enumeration_end } 
#endif 
#endif 

#ifndef declare_member 
#define declare_member(arg) arg 
#endif 

#ifndef member_value 
#define member_value(arg) = arg 
#endif 