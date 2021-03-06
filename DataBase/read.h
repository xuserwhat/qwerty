#ifndef READ_H
#define READ_H

#include <QtCore>
#include <write.h>

class read
    {
    public:

        read();
        QString getFileType(QString fileName); // 파일 타입 가져오기
        QString getFileName(QString fileName); // 파일 이름 가져오기
        QString getReply(QString fileName, int at); // 대답 가져오기
        QString getType(QString fileName); // 타입 가져오기
        QString getLang(QString fileName); // 언어 가져오기
        QString getOthers(QString fileName); // 다른 정보 가져오기 (예 : 사람이면 직업, 정보 등등)

        int getReplySize(QString fileName); // 대답을 List 로 가져올때 Size
        int getMind(QString fileName); // 그 단어에 대한 평판을 가져오기

        QStringList readFile(QString fileName);
        QStringList getAllFileName(QString source_dir, QString lang = "default");
        QString searchFile(QString source_dir, QString fileName, QString lang);
        QString randomBadReply(QString source_dir, QString lang); // 안좋은말을 랜덤으로 골라내기
        QString searchFileFromType(QString source_dir, QString type, QString lang);
};

#endif // READ_H
