///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Mar 19 2008)
// http://www.wxformbuilder.org/
//
// PLEASE DO "NOT" EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#include "commentpagebase.h"

///////////////////////////////////////////////////////////////////////////

CommentPageBase::CommentPageBase( wxWindow* parent, wxWindowID id, const wxPoint& pos, const wxSize& size, long style ) : wxPanel( parent, id, pos, size, style )
{
	wxBoxSizer* bSizer1;
	bSizer1 = new wxBoxSizer( wxVERTICAL );
	
	wxBoxSizer* bSizer2;
	bSizer2 = new wxBoxSizer( wxHORIZONTAL );
	
	m_staticText1 = new wxStaticText( this, wxID_ANY, wxT("General:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText1->Wrap( -1 );
	m_staticText1->SetFont( wxFont( wxNORMAL_FONT->GetPointSize(), 70, 90, 92, false, wxEmptyString ) );
	
	bSizer2->Add( m_staticText1, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	m_staticline1 = new wxStaticLine( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLI_HORIZONTAL );
	bSizer2->Add( m_staticline1, 1, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	bSizer1->Add( bSizer2, 0, wxEXPAND, 5 );
	
	m_checkBoxContCComment = new wxCheckBox( this, wxID_ANY, wxT("When hitting <ENTER> in a C style comment section,automatically add '*' at the next line"), wxDefaultPosition, wxDefaultSize, 0 );
	m_checkBoxContCComment->SetValue(true);
	
	bSizer1->Add( m_checkBoxContCComment, 0, wxALL, 5 );
	
	m_checkBoxContinueCppComment = new wxCheckBox( this, wxID_ANY, wxT("When hitting <ENTER> in a C++ style comment section,automatically add '//' at the next line"), wxDefaultPosition, wxDefaultSize, 0 );
	
	bSizer1->Add( m_checkBoxContinueCppComment, 0, wxALL, 5 );
	
	wxBoxSizer* bSizer21;
	bSizer21 = new wxBoxSizer( wxHORIZONTAL );
	
	m_staticText11 = new wxStaticText( this, wxID_ANY, wxT("Doxygen:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText11->Wrap( -1 );
	m_staticText11->SetFont( wxFont( wxNORMAL_FONT->GetPointSize(), 70, 90, 92, false, wxEmptyString ) );
	
	bSizer21->Add( m_staticText11, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	m_staticline11 = new wxStaticLine( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLI_HORIZONTAL );
	bSizer21->Add( m_staticline11, 1, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	bSizer1->Add( bSizer21, 0, wxEXPAND, 5 );
	
	m_checkBoxUseSlash2Starts = new wxCheckBox( this, wxID_ANY, wxT("Use '/**' as doxygen block start (else use '/*!')"), wxDefaultPosition, wxDefaultSize, 0 );
	m_checkBoxUseSlash2Starts->SetValue(true);
	
	bSizer1->Add( m_checkBoxUseSlash2Starts, 0, wxALL, 5 );
	
	m_checkBoxUseShtroodel = new wxCheckBox( this, wxID_ANY, wxT("Use '@' as doxygen keywrod prefix"), wxDefaultPosition, wxDefaultSize, 0 );
	
	bSizer1->Add( m_checkBoxUseShtroodel, 0, wxALL, 5 );
	
	m_staticline4 = new wxStaticLine( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLI_HORIZONTAL );
	bSizer1->Add( m_staticline4, 0, wxEXPAND | wxALL, 5 );
	
	m_staticText4 = new wxStaticText( this, wxID_ANY, wxT("CodeLite contains a built-in doxygen documentation generator which can add doxygen comments to your code.\nhere you will be able to set the prefix to be used by CodeLite for the various types"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText4->Wrap( -1 );
	bSizer1->Add( m_staticText4, 0, wxALL|wxEXPAND, 5 );
	
	wxFlexGridSizer* fgSizer1;
	fgSizer1 = new wxFlexGridSizer( 3, 3, 0, 0 );
	fgSizer1->AddGrowableCol( 1 );
	fgSizer1->SetFlexibleDirection( wxBOTH );
	fgSizer1->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
	
	m_staticText6 = new wxStaticText( this, wxID_ANY, wxT("Class pattern:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText6->Wrap( -1 );
	fgSizer1->Add( m_staticText6, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	m_textCtrlClassPattern = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer1->Add( m_textCtrlClassPattern, 0, wxALL|wxEXPAND|wxALIGN_CENTER_VERTICAL, 5 );
	
	m_buttonClassPattern = new wxButton( this, wxID_ANY, wxT("..."), wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer1->Add( m_buttonClassPattern, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	m_staticText7 = new wxStaticText( this, wxID_ANY, wxT("Function pattern:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText7->Wrap( -1 );
	fgSizer1->Add( m_staticText7, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	m_textCtrlFunctionPattern = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer1->Add( m_textCtrlFunctionPattern, 0, wxALL|wxEXPAND|wxALIGN_CENTER_VERTICAL, 5 );
	
	m_buttonFunctionPattern = new wxButton( this, wxID_ANY, wxT("..."), wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer1->Add( m_buttonFunctionPattern, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	bSizer1->Add( fgSizer1, 0, wxEXPAND, 5 );
	
	m_staticline5 = new wxStaticLine( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLI_HORIZONTAL );
	bSizer1->Add( m_staticline5, 0, wxEXPAND | wxALL, 5 );
	
	m_staticText12 = new wxStaticText( this, wxID_ANY, wxT("The following macros can be used in doxygen pattern:\n$(CurrentFileName), $(CurrentFilePath), $(User), $(Date), $(Name)\n$(CurrentFileFullPath), $(CurrentFileExt)"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText12->Wrap( -1 );
	bSizer1->Add( m_staticText12, 1, wxALL|wxEXPAND, 5 );
	
	this->SetSizer( bSizer1 );
	this->Layout();
	
	// Connect Events
	m_buttonClassPattern->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( CommentPageBase::OnClassPattern ), NULL, this );
	m_buttonFunctionPattern->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( CommentPageBase::OnFunctionPattern ), NULL, this );
}

CommentPageBase::~CommentPageBase()
{
	// Disconnect Events
	m_buttonClassPattern->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( CommentPageBase::OnClassPattern ), NULL, this );
	m_buttonFunctionPattern->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( CommentPageBase::OnFunctionPattern ), NULL, this );
}
