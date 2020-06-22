/***************************************************************************
                        stringutils.h
                        ---------------
  begin                : Jun 2020
  copyright            : (C) 2020 by Ivan Ivanov
  email                : ivan@opengis.ch
***************************************************************************/

/***************************************************************************
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 ***************************************************************************/

#ifndef STRINGUTILS_H
#define STRINGUTILS_H

#include <QObject>


class StringUtils : public QObject
{
    Q_OBJECT

  public:


    explicit StringUtils( QObject *parent = nullptr );


    /**
     * Checks whether the provided string is a relative url (has no protocol or starts with `file://`).
     */
    static Q_INVOKABLE bool isRelativeUrl( const QString &url );


    /**
     * Returns a string with any URL (e.g., http(s)/ftp) and mailto: text converted to valid HTML <a …> links.
     */
    static Q_INVOKABLE QString insertLinks( const QString &string );
};

#endif // STRINGUTILS_H
