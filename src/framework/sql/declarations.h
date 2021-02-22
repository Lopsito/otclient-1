/*
 * Copyright (c) 2010-2013 OTClient <https://github.com/edubart/otclient>
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 */

#ifdef FW_SQL

#ifndef FRAMEWORK_SQL_DECLARATIONS_H
#define FRAMEWORK_SQL_DECLARATIONS_H

#include <framework/global.h>

class Database;
class DBResult;

typedef stdext::shared_object_ptr<Database> DatabasePtr;
typedef stdext::shared_object_ptr<DBResult> DBResultPtr;

// MySQL
class DatabaseMySQL;
class MySQLResult;

typedef stdext::shared_object_ptr<DatabaseMySQL> DatabaseMySQLPtr;
typedef stdext::shared_object_ptr<MySQLResult> MySQLResultPtr;

#endif

#endif