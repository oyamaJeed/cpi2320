/*--------------------------------------
 User common header file
--------------------------------------*/
#ifdef USER_COM_ENA
	#define	COM_VALUE	100
#else
	#define COM_VALUE	200
#endif

#define COM_OK	0	//正常終了

//----構造体定義----------------------------------
struct st_exer {
	char from;
	char to;
	char msg[30];
};

typedef struct st_exer	exer;

struct st_ary	{
	char c_ary[32];
};

typedef struct st_ary	sary;

//----共用体定義----------------------------------
union uni_exer	{
	struct exer;
	struct sary;
};

typedef union uni_exer UNI_EXER;

