/////////////////////////////////////////////////////////////////////////////
// Name:        mainform.cpp
// Purpose:     
// Author:      Sergey Talipov
// Modified by: 
// Created:     18.03.2025 15:30:26
// RCS-ID:      
// Copyright:   15681627-3C745D8E-630127F2
// Licence:     
/////////////////////////////////////////////////////////////////////////////

// For compilers that support precompilation, includes "wx/wx.h".
#include "wx/wxprec.h"

#ifdef __BORLANDC__
#pragma hdrstop
#endif

#ifndef WX_PRECOMP
#include "wx/wx.h"
#endif

////@begin includes
////@end includes

#include "mainform.h"

////@begin XPM images
#include "tsnsoft.xpm"
////@end XPM images


/*
 * MainForm type definition
 */

IMPLEMENT_CLASS( MainForm, wxFrame )


/*
 * MainForm event table definition
 */

BEGIN_EVENT_TABLE( MainForm, wxFrame )

////@begin MainForm event table entries
    EVT_LISTBOX( ID_LISTBOX, MainForm::OnListboxSelected )
    EVT_CHOICE( ID_CHOICE, MainForm::OnChoiceSelected )
    EVT_RADIOBOX( ID_RADIOBOX, MainForm::OnRadioboxSelected )
    EVT_CHECKBOX( ID_CHECKBOX, MainForm::OnCheckboxClick )
    EVT_BUTTON( ID_BUTTON, MainForm::OnButtonClick )
////@end MainForm event table entries

END_EVENT_TABLE()


/*
 * MainForm constructors
 */

MainForm::MainForm()
{
    Init();
}

MainForm::MainForm( wxWindow* parent, wxWindowID id, const wxString& caption, const wxPoint& pos, const wxSize& size, long style )
{
    Init();
    Create( parent, id, caption, pos, size, style );
}


/*
 * MainForm creator
 */

bool MainForm::Create( wxWindow* parent, wxWindowID id, const wxString& caption, const wxPoint& pos, const wxSize& size, long style )
{
////@begin MainForm creation
    wxFrame::Create( parent, id, caption, pos, size, style );

    CreateControls();
    SetIcon(GetIconResource(wxT("tsnsoft.xpm")));
    if (GetSizer())
    {
        GetSizer()->SetSizeHints(this);
    }
    Centre();
////@end MainForm creation
    return true;
}


/*
 * MainForm destructor
 */

MainForm::~MainForm()
{
////@begin MainForm destruction
////@end MainForm destruction
}


/*
 * Member initialisation
 */

void MainForm::Init()
{
////@begin MainForm member initialisation
    ListBox1 = NULL;
    Choice1 = NULL;
    RadioBox1 = NULL;
    CheckBox1 = NULL;
    StaticText1 = NULL;
////@end MainForm member initialisation
}


/*
 * Control creation for MainForm
 */

void MainForm::CreateControls()
{    
////@begin MainForm content construction
    MainForm* itemFrame1 = this;

    wxGridBagSizer* itemGridBagSizer1 = new wxGridBagSizer(0, 0);
    itemGridBagSizer1->SetEmptyCellSize(wxSize(10, 19));
    itemFrame1->SetSizer(itemGridBagSizer1);

    wxArrayString ListBox1Strings;
    ListBox1Strings.Add(wxT("C"));
    ListBox1Strings.Add(wxT("C++"));
    ListBox1Strings.Add(wxT("Java"));
    ListBox1Strings.Add(wxT("C#"));
    ListBox1Strings.Add(wxT("Python"));
    ListBox1Strings.Add(wxT("Delphi"));
    ListBox1 = new wxListBox( itemFrame1, ID_LISTBOX, wxDefaultPosition, wxDefaultSize, ListBox1Strings, wxLB_SINGLE );
    ListBox1->SetStringSelection(wxT("C++"));
    itemGridBagSizer1->Add(ListBox1, wxGBPosition(1, 2), wxGBSpan(1, 1), wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL|wxALL, 5);

    wxArrayString Choice1Strings;
    Choice1Strings.Add(wxT("C"));
    Choice1Strings.Add(wxT("C++"));
    Choice1Strings.Add(wxT("Java"));
    Choice1Strings.Add(wxT("C#"));
    Choice1Strings.Add(wxT("Python"));
    Choice1Strings.Add(wxT("Delphi"));
    Choice1 = new wxChoice( itemFrame1, ID_CHOICE, wxDefaultPosition, wxDefaultSize, Choice1Strings, 0 );
    Choice1->SetStringSelection(wxT("C++"));
    itemGridBagSizer1->Add(Choice1, wxGBPosition(2, 2), wxGBSpan(1, 1), wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL|wxALL, 5);

    wxArrayString RadioBox1Strings;
    RadioBox1Strings.Add(wxT("C"));
    RadioBox1Strings.Add(wxT("C++"));
    RadioBox1Strings.Add(wxT("Java"));
    RadioBox1Strings.Add(wxT("C#"));
    RadioBox1Strings.Add(wxT("Python"));
    RadioBox1Strings.Add(wxT("Delphi"));
    RadioBox1 = new wxRadioBox( itemFrame1, ID_RADIOBOX, wxT("Radiobox"), wxDefaultPosition, wxDefaultSize, RadioBox1Strings, 2, wxRA_SPECIFY_ROWS );
    RadioBox1->SetSelection(1);
    itemGridBagSizer1->Add(RadioBox1, wxGBPosition(1, 0), wxGBSpan(1, 1), wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL|wxALL, 5);

    CheckBox1 = new wxCheckBox( itemFrame1, ID_CHECKBOX, wxT("C++"), wxDefaultPosition, wxDefaultSize, 0 );
    CheckBox1->SetValue(false);
    itemGridBagSizer1->Add(CheckBox1, wxGBPosition(2, 0), wxGBSpan(1, 1), wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL|wxALL, 5);

    StaticText1 = new wxStaticText( itemFrame1, wxID_STATIC, wxT("Выберите чего-нибудь"), wxDefaultPosition, wxDefaultSize, 0 );
    itemGridBagSizer1->Add(StaticText1, wxGBPosition(0, 0), wxGBSpan(1, 2), wxALIGN_RIGHT|wxALIGN_CENTER_VERTICAL|wxALL, 5);

    wxButton* itemButton6 = new wxButton( itemFrame1, ID_BUTTON, wxT("Выход"), wxDefaultPosition, wxDefaultSize, 0 );
    itemGridBagSizer1->Add(itemButton6, wxGBPosition(3, 2), wxGBSpan(1, 1), wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL|wxALL, 5);

////@end MainForm content construction
}


/*
 * Should we show tooltips?
 */

bool MainForm::ShowToolTips()
{
    return true;
}

/*
 * Get bitmap resources
 */

wxBitmap MainForm::GetBitmapResource( const wxString& name )
{
    // Bitmap retrieval
////@begin MainForm bitmap retrieval
    wxUnusedVar(name);
    return wxNullBitmap;
////@end MainForm bitmap retrieval
}

/*
 * Get icon resources
 */

wxIcon MainForm::GetIconResource( const wxString& name )
{
    // Icon retrieval
////@begin MainForm icon retrieval
    wxUnusedVar(name);
    if (name == wxT("tsnsoft.xpm"))
    {
        wxIcon icon(tsnsoft_xpm);
        return icon;
    }
    return wxNullIcon;
////@end MainForm icon retrieval
}


/*
 * wxEVT_COMMAND_BUTTON_CLICKED event handler for ID_BUTTON
 */

void MainForm::OnButtonClick( wxCommandEvent& event )
{
////@begin wxEVT_COMMAND_BUTTON_CLICKED event handler for ID_BUTTON in MainForm.
    // Before editing this code, remove the block markers.
    Destroy();
////@end wxEVT_COMMAND_BUTTON_CLICKED event handler for ID_BUTTON in MainForm. 
}


/*
 * wxEVT_COMMAND_LISTBOX_SELECTED event handler for ID_LISTBOX
 */

// Обработчик выбора элемента в ListBox
void MainForm::OnListboxSelected( wxCommandEvent& event )
{
	int i = ListBox1->GetSelection(); // Получаем индекс выбранного элемента
	wxString s = ListBox1->GetString(i); // Получаем строку выбранного элемента
	StaticText1->SetLabel(s); // Устанавливаем текст статического элемента
}


/*
 * wxEVT_COMMAND_CHOICE_SELECTED event handler for ID_CHOICE
 */

// Обработчик выбора элемента в Choice (выпадающем списке)
void MainForm::OnChoiceSelected( wxCommandEvent& event )
{
	int i = Choice1->GetSelection(); // Получаем индекс выбранного элемента
	wxString s = Choice1->GetString(i); // Получаем строку выбранного элемента
	StaticText1->SetLabel(s); // Устанавливаем текст статического элемента
}


/*
 * wxEVT_COMMAND_RADIOBOX_SELECTED event handler for ID_RADIOBOX
 */

// Обработчик выбора варианта в RadioBox
void MainForm::OnRadioboxSelected( wxCommandEvent& event )
{
	int k = RadioBox1->GetSelection(); // Получаем индекс выбранного элемента
	wxString s = RadioBox1->GetString(k); // Получаем строку выбранного элемента
	StaticText1->SetLabel(s); // Устанавливаем текст статического элемента
}


/*
 * wxEVT_COMMAND_CHECKBOX_CLICKED event handler for ID_CHECKBOX
 */

// Обработчик нажатия на CheckBox
void MainForm::OnCheckboxClick( wxCommandEvent& event )
{
	bool b = CheckBox1->GetValue(); // Получаем текущее состояние чекбокса
	if (b == true) {
		StaticText1->SetLabel(wxString::FromUTF8("Да!")); // Устанавливаем "Да!" если включен
	} else {
		StaticText1->SetLabel(wxString::FromUTF8("Нет!")); // Устанавливаем "Нет!" если выключен
	}
}

