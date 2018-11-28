#include <QtTest>
#include <QtGui>
#include <QLineEdit>
#include "test_qlineedit.h"

void Test_QLineEdit::edit()
{
    QLineEdit a;
    QTest::keyClicks(&a, "TEST");

    QCOMPARE(a.text(), QString("TEST"));
    QVERIFY(a.isModified());
}
