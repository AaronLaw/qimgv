#ifndef VIDEO_H
#define VIDEO_H

#include "settings.h"
#include "image.h"
#include <QImage>

class Video : public Image
{
    Q_OBJECT
public:
    Video(QString _path);
    Video(FileInfo *_info);
    ~Video();

    QPixmap* getPixmap();
    const QImage* getImage();
    void load();
    void unload();
    int height();
    int width();
    QSize size();
    QString filePath();

    QImage *rotated(int grad);
    void rotate(int grad);
    QPixmap* generateThumbnail();

public slots:
    void crop(QRect newRect);
    void save();
    void save(QString destinationPath);


private:
};

#endif // VIDEO_H