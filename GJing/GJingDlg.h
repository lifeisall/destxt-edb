// GJingDlg.h : ͷ�ļ�
//

#pragma once


// CGJingDlg �Ի���
class CGJingDlg : public CDialog
{
// ����
public:
	CGJingDlg(CWnd* pParent = NULL);
// ��׼���캯��

    CString File_in;
	CString File_out;
	CString Psd;
	CStatic* pWnd;
 
	
// �Ի�������
	enum { IDD = IDD_GJING_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV ֧��


// ʵ��
protected:
	HICON m_hIcon;

	// ���ɵ���Ϣӳ�亯��
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedButton1();
	afx_msg void OnBnClickedButton2();
	afx_msg void OnBnClickedButton3();
	afx_msg void OnBnClickedButton4();
	afx_msg void OnBnClicked10006();
	afx_msg void OnBnClicked10007();
	afx_msg void OnBnClickedButton5();
};