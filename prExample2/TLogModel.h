#ifndef TLOGMODEL_H
#define TLOGMODEL_H

#include <QAbstractTableModel>

#include <vector>

#include <TCommonDefine.h>

class TLogModel : public QAbstractTableModel, public std::vector <commonDefine::TLogItem>
{
public:
    TLogModel(QObject *parent = nullptr);

    int rowCount(const QModelIndex &parent) const;
    int columnCount(const QModelIndex &parent  = QModelIndex()) const;
    QVariant data(const QModelIndex &index, int role) const;
    QVariant headerData(int section, Qt::Orientation orientation, int role = Qt::DisplayRole) const;

    void push_back (commonDefine::TLogItem) ;  // Добавление данных в конец списка
    void refreshView () ;

private:
    enum columnNumber {cnValue = 0, cnResult,  cnCount} ;  // Перечень колонок в таблице
};

#endif // TLOGMODEL_H
