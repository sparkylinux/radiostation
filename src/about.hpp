#ifndef __ABOUT_HPP_INCLUDED__
#define __ABOUT_HPP_INCLUDED__

#include "constants.hpp"
#include <gtkmm.h>

namespace radiostation
{

class AboutDialog : public Gtk::AboutDialog
{
public:
    AboutDialog();
};

} // namespace radiostation

#endif
