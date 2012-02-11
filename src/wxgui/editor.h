// This file is part of fityk program. Copyright Marcin Wojdyr
// Licence: GNU General Public License ver. 2+

#ifndef FITYK_WX_EDITOR_H_
#define FITYK_WX_EDITOR_H_

class EditorDlg : public wxDialog
{
public:
    EditorDlg(wxWindow* parent);
    void OnOpenFile(wxCommandEvent&) { open_file(this); }
    void OnSave(wxCommandEvent&);
    void OnSaveAs(wxCommandEvent&);
    void OnExecSelected(wxCommandEvent&) { exec_selected(); }
    void OnStep(wxCommandEvent&);
    void OnClose(wxCommandEvent&) { Close(); }
    void OnCloseDlg(wxCloseEvent&) { Destroy(); }
    void OnTextChange(wxCommandEvent&);
    void open_file(wxWindow *parent);
    void do_open_file(const wxString& path);
    int exec_selected();
    wxString get_list_item(int i);
    void exec_line(int n);
    void save_file(const wxString& save_path);
    const wxString& get_path() const { return path_; }
protected:
    wxToolBarBase *tb;
    wxTextCtrl *txt;
    wxString dir;
    wxString path_;
    std::string script_dir;

    void set_title();
    DECLARE_EVENT_TABLE()
};

#endif