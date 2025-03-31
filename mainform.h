/////////////////////////////////////////////////////////////////////////////
// Name:        mainform.h
// Purpose:     
// Author:      Sergey Talipov
// Modified by: 
// Created:     18.03.2025 15:30:26
// RCS-ID:      
// Copyright:   15681627-3C745D8E-630127F2
// Licence:     
/////////////////////////////////////////////////////////////////////////////

#ifndef _MAINFORM_H_
#define _MAINFORM_H_


/*!
 * Includes
 */

////@begin includes
#include "wx/frame.h"
#include "wx/gbsizer.h"
////@end includes

/*!
 * Forward declarations
 */

////@begin forward declarations
////@end forward declarations

/*!
 * Control identifiers
 */

////@begin control identifiers
#define ID_MAINFORM 10000
#define ID_LISTBOX 10001
#define ID_CHOICE 10002
#define ID_RADIOBOX 10003
#define ID_CHECKBOX 10004
#define ID_BUTTON 10005
#define SYMBOL_MAINFORM_STYLE wxCAPTION|wxSYSTEM_MENU|wxCLOSE_BOX
#define SYMBOL_MAINFORM_TITLE wxT("Компоненты выбора")
#define SYMBOL_MAINFORM_IDNAME ID_MAINFORM
#define SYMBOL_MAINFORM_SIZE wxSize(500, 500)
#define SYMBOL_MAINFORM_POSITION wxDefaultPosition
////@end control identifiers


/*!
 * MainForm class declaration
 */

class MainForm: public wxFrame
{    
    DECLARE_CLASS( MainForm )
    DECLARE_EVENT_TABLE()

public:
    /// Constructors
    MainForm();
    MainForm( wxWindow* parent, wxWindowID id = SYMBOL_MAINFORM_IDNAME, const wxString& caption = SYMBOL_MAINFORM_TITLE, const wxPoint& pos = SYMBOL_MAINFORM_POSITION, const wxSize& size = SYMBOL_MAINFORM_SIZE, long style = SYMBOL_MAINFORM_STYLE );

    bool Create( wxWindow* parent, wxWindowID id = SYMBOL_MAINFORM_IDNAME, const wxString& caption = SYMBOL_MAINFORM_TITLE, const wxPoint& pos = SYMBOL_MAINFORM_POSITION, const wxSize& size = SYMBOL_MAINFORM_SIZE, long style = SYMBOL_MAINFORM_STYLE );

    // Универсальный обработчик выбора пользователя
    void UpdateSelectedValue(const wxString& selectedValue);

    /// Destructor
    ~MainForm();

    /// Initialises member variables
    void Init();

    /// Creates the controls and sizers
    void CreateControls();
    

////@begin MainForm event handler declarations

    /// wxEVT_COMMAND_LISTBOX_SELECTED event handler for ID_LISTBOX
    void OnListboxSelected( wxCommandEvent& event );

    /// wxEVT_COMMAND_CHOICE_SELECTED event handler for ID_CHOICE
    void OnChoiceSelected( wxCommandEvent& event );

    /// wxEVT_COMMAND_RADIOBOX_SELECTED event handler for ID_RADIOBOX
    void OnRadioboxSelected( wxCommandEvent& event );

    /// wxEVT_COMMAND_CHECKBOX_CLICKED event handler for ID_CHECKBOX
    void OnCheckboxClick( wxCommandEvent& event );

    /// wxEVT_COMMAND_BUTTON_CLICKED event handler for ID_BUTTON
    void OnButtonClick( wxCommandEvent& event );

////@end MainForm event handler declarations

////@begin MainForm member function declarations

    /// Retrieves bitmap resources
    wxBitmap GetBitmapResource( const wxString& name );

    /// Retrieves icon resources
    wxIcon GetIconResource( const wxString& name );
////@end MainForm member function declarations

    /// Should we show tooltips?
    static bool ShowToolTips();

////@begin MainForm member variables
    wxListBox* ListBox1;
    wxChoice* Choice1;
    wxRadioBox* RadioBox1;
    wxCheckBox* CheckBox1;
    wxStaticText* StaticText1;
////@end MainForm member variables
};

#endif
    // _MAINFORM_H_
