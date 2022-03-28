#define CMDLENGTH 60
#define DELIMITER "  "
#define CLICKABLE_BLOCKS

const Block blocks[] = {
	BLOCK("sb-nettraf",    	1, 	  8),
	BLOCK("sb-network",    	5, 	  7),
	
	BLOCK("sb-smb",  		0,    9),

	BLOCK("sb-cpu",  		10,   6),
	BLOCK("sb-memory",  	10,   5),
	BLOCK("sb-disk",    	1800, 4),

	BLOCK("sb-volume",  	0,    3),
	BLOCK("sb-battery", 	5,    2),

	BLOCK("sb-date",    	1,    1)
};
