#ifndef _GDHANDLER_H_
#define _GDHANDLER_H_


#include <gd.h>
#include <gdfontmb.h>
class GDHandler
{
public:
	static GDHandler *GetInstance(void) { return &m_Instance; }
	bool Init(const char * pszFileName, const char *pszBack, int i4Width, int i4Height);
	void Release(void);

	void SetFontColor(int i4R, int i4G, int i4B);
	bool MakePngData(char *pszShow, int i4Len);
	char* GetPngData(int &nSize);
	void FreePngData(char *pszData);

	bool IsEnable(void) const { return m_bEnable; }
	void SetEnable(bool bEnable) { m_bEnable = bEnable; }
private:
	// ���ɸ���ѩ������
	bool MakePngNoiseBack();
private:
	GDHandler(void);
	virtual ~GDHandler(void);
private:
	// ���ܿ���
	bool m_bEnable;

	int m_i4Width;
	int m_i4Height;
	// ��¼����ͼƬ���ĸ����������
	int m_brect[8];
	// �����ļ���ַ
	char m_szPathTTF[48];
	// ����ɫ
	int m_i4BackColor;
	// ��֤��������ɫ
	int m_i4FontColor;
	// ���ű����ַ�
	char m_szBack[2];
	// ���ű�������
	gdFontPtr m_pBackFont;

	gdImagePtr m_pIM;
	static GDHandler m_Instance;
};

#endif

