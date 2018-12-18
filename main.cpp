#include <QGuiApplication>
#include <QQmlApplicationEngine>

#include <QQmlComponent>
#include <QQmlContext>

#include <changedstate.h>
int main(int argc, char *argv[])
{
    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);

    QGuiApplication app(argc, argv);

    ChangedState device;

    QQmlApplicationEngine engine;



     qmlRegisterType<ChangedState>("Astus", 1,0, "Ikegami");

    engine.rootContext()->setContextProperty("changedDevice",&device);
    engine.load(QUrl(QStringLiteral("qrc:/main.qml")));
    if (engine.rootObjects().isEmpty())
        return -1;


    return app.exec();
}
