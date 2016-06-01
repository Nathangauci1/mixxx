#ifndef WBUTTONBAR_H
#define WBUTTONBAR_H

#include <QWidget>
#include <QLayout>

class WButtonBar : QWidget
{
  Q_OBJECT  
  public:
    WButtonBar(QWidget* parent = nullptr);
    
    void addItem(QIcon icon, QVariant title, QVariant data);
    
  signals:
    
    void clicked(QVariant data);
    
    QLayout* m_pLayout;
};

#endif // WBUTTONBAR_H
