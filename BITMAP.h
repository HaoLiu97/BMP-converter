typedef unsigned char	BYTE;	/*1 byte*/
typedef unsigned short	WORD;	/*2 bytes*/
typedef unsigned int	DWORD;	/*4 bytes*/

#pragma pack(2)
typedef struct tagBITMAPFILEHEADER
{
	WORD	bfType;		/*�ļ���ʶ BM*/
	DWORD	bfSize;		/*�ļ��ܳ���*/
	WORD	bfReserved1;/*��������Ϊ0*/
	WORD	bfReserved2;/*��������Ϊ0*/
	DWORD	bfOffBits;	/*ƫ����*/
}
BITMAPFILEHEADER;
/*
typedef struct tagBITMAPINFO
{
	BITMAPINFOHEADER	bmiHeader;
	RGBQUAD				bmiColors[1];
}BITMAPINFO;
*/
#pragma pack(2)
typedef struct tagBITMAPINFOHEADER
{
	DWORD biSize;	/*BITMAPINFOHEADER�Ĵ�С*/
	DWORD biWidth;	/*λͼ���*/
	DWORD biHeight;	/*λͼ�߶�*/
	WORD  biPlanes;	/*��ɫλ��������Ϊ1*/
	WORD  biBitCount;	/*ÿ������ɫλ��1��2��4��8��24��*/
	DWORD bmCompression;/*ѹ��ģʽ��0=�ޣ�*/
	DWORD biSizelmage;	/*λͼ��С*/
	DWORD biXPelsPerMeter;	/*ˮƽ�ֱ���*/
	DWORD biYPelsPerMeter;	/*��ֱ�ֱ���*/
	DWORD biClrUsed;		/*��ʹ�õ���ɫ��*/
	DWORD beClrlmportant;	/*��Ҫ��ɫ��*/
}
BITMAPINFOHEADER;

#pragma pack(2)
typedef struct tagRGBQUAD
{
	BYTE	rgbBlue;
	BYTE	rgbGreen;
	BYTE	rgbRed;
	BYTE	rgbReserved;
}
RGBQUAD;
