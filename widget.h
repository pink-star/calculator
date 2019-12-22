#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QString>

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = nullptr);
    ~Widget();
    QString str;
    QString run;
    QString history;
    bool defult = true;
    bool eandpi = true;
    bool num = true;
    bool dian = true;
    bool sincostan = true;
    bool lg_ln = true;
    bool JC = false;
    bool cimi = false;
    bool Daoshu = false;
    bool genhao = true;
    bool left = true;
    bool right = false;
    bool fan = false;
    bool other = false;
    int leftcount = 0;
    int rightcount = 0;

private slots:
    void on_btn_1_clicked();

    void on_btn_0_clicked();

    void on_btn_2_clicked();

    void on_btn_3_clicked();

    void on_btn_4_clicked();

    void on_btn_7_clicked();

    void on_btn_5_clicked();

    void on_btn_6_clicked();

    void on_btn_8_clicked();

    void on_btn_9_clicked();

    void on_btn_back_clicked();

    void on_btn_sin_clicked();

    void on_btn_cos_clicked();

    void on_btn_tan_clicked();

    void on_btn_lg_clicked();

    void on_btn_ln_clicked();

    void on_btn_jiecheng_clicked();

    void on_btn_mi_clicked();

    void on_btn_daoshu_clicked();

    void on_btn_pi_clicked();

    void on_btn_genhao_clicked();

    void on_btn_left_clicked();

    void on_btn_right_clicked();

    void on_btn_e_clicked();

    void on_btn_result_clicked();

    void on_btn_jia_clicked();

    void on_btn_jian_clicked();

    void on_btn_cheng_clicked();

    void on_btn_chu_clicked();

    void on_btn_C_clicked();

    void on_btn_dian_clicked();

    void on_btn_help_clicked();

    void on_btn_to16_clicked();

    void on_btn_to2_clicked();

    void on_btn_to8_clicked();

    void on_btn_Xor_clicked();

    void on_btn_And_clicked();

    void on_btn_Not_clicked();

    void on_btn_Or_clicked();

    void on_btn_00_clicked();

private:
    Ui::Widget *ui;
};

#endif // WIDGET_H
