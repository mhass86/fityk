// Header of class PhilipsRdDataSet
// Licence: Lesser GNU Public License 2.1 (LGPL) 
// $Id: ds_philips_rd.h $

#ifndef PHILIPS_RD_H
#define PHILIPS_RD_H

#include "xylib.h"


namespace xylib {
    class PhilipsRdDataSet : public DataSet
    {
    public:
        PhilipsRdDataSet()
            : DataSet(fmt_info.ftype) {}

        // implement the interfaces specified by DataSet
        void load_data(std::istream &f);

        static bool check(std::istream &f);

        const static FormatInfo fmt_info;
    }; 
}
#endif // #ifndef PHILIPS_RD_H
