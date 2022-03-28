#define CMDLENGTH 60
#define DELIMITER "  "
#define CLICKABLE_BLOCKS

const Block blocks[] = {
	BLOCK("${HOME}/.local/statusbar/sb-nettraf",    	1, 	  8),
	BLOCK("${HOME}/.local/statusbar/sb-network",    	5, 	  7),
	
	BLOCK("${HOME}/.local/statusbar/sb-smb1",  		0,    9),
	BLOCK("${HOME}/.local/statusbar/sb-smb2",  		0,    10),
	BLOCK("${HOME}/.local/statusbar/sb-smb3",  		0,    11),

	BLOCK("${HOME}/.local/statusbar/sb-cpu",  		10,   6),
	BLOCK("${HOME}/.local/statusbar/sb-memory",  	10,   5),
	BLOCK("${HOME}/.local/statusbar/sb-disk",    	1800, 4),

	BLOCK("${HOME}/.local/statusbar/sb-volume",  	0,    3),
	BLOCK("${HOME}/.local/statusbar/sb-battery", 	5,    2),

	BLOCK("${HOME}/.local/statusbar/sb-date",    	1,    1)
};
