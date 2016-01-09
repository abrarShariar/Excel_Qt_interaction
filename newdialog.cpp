#include "newdialog.h"

NewDialog::NewDialog(QObject *parent)
    : QAbstractItemModel(parent)
{
}

QVariant NewDialog::headerData(int section, Qt::Orientation orientation, int role) const
{
    // FIXME: Implement me!
}

QModelIndex NewDialog::index(int row, int column, const QModelIndex &parent) const
{
    // FIXME: Implement me!
}

QModelIndex NewDialog::parent(const QModelIndex &index) const
{
    // FIXME: Implement me!
}

int NewDialog::rowCount(const QModelIndex &parent) const
{
    if (!parent.isValid())
        return 0;

    // FIXME: Implement me!
}

int NewDialog::columnCount(const QModelIndex &parent) const
{
    if (!parent.isValid())
        return 0;

    // FIXME: Implement me!
}

QVariant NewDialog::data(const QModelIndex &index, int role) const
{
    if (!index.isValid())
        return QVariant();

    // FIXME: Implement me!
    return QVariant();
}
