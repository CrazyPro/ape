#ifdef _WIN32
#ifndef _TCRDB_H
#define _TCRDB_H

/**
* �ļ���д��ʽ��ģ��tt�Ľӿ�
* �����Ҫʹ���µĽӿڣ��Ǿ���Ӱ�
**/

typedef struct {
	int ecode;
} TCRDB;

enum {
	TTESUCCESS,
	TTEINVALID,
	TTENOHOST,
	TTEREFUSED,
	TTESEND,
	TTERECV,
	TTEKEEP,
	TTENOREC,
	TTEMISC = 9999
};

const char *tcrdberrmsg(int ecode);
void tcrdbsetecode(TCRDB *rdb, int ecode);
TCRDB *tcrdbnew(void);
void tcrdbdel(TCRDB *rdb);
int tcrdbecode(TCRDB *rdb);
bool tcrdbopen(TCRDB *rdb, const char *host, int port);
bool tcrdbclose(TCRDB *rdb);
bool tcrdbput(TCRDB *rdb, const void *kbuf, int ksiz, const void *vbuf, int vsiz);
bool tcrdbput2(TCRDB *rdb, const char *kstr, const char *vstr);
bool tcrdbout(TCRDB *rdb, const void *kbuf, int ksiz);
bool tcrdbout2(TCRDB *rdb, const char *kstr);
void *tcrdbget(TCRDB *rdb, const void *kbuf, int ksiz, int *sp);
char *tcrdbget2(TCRDB *rdb, const char *kstr);

#endif

#endif
/* END OF FILE */
