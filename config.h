#define CMDLENGTH 60
#define DELIMITER "  "
#define CLICKABLE_BLOCKS

const Block blocks[] = {
	BLOCK("sb-nettraf",    	1, 	  10),
	BLOCK("sb-network",    	5, 	  18),
	
	BLOCK("sb-memory",  	10,   20),
	BLOCK("sb-disk",    	1800, 19),

	BLOCK("sb-volume",  	0,    22),
	BLOCK("sb-battery", 	5,    23),

	BLOCK("sb-date",    	1,    24)
};
