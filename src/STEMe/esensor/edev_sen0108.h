#ifndef EDEV_SEN0108_H
#define EDEV_SEN0108_H
#include <esensor/esensor_base.h>
#include <esensor/esensors.h>
#include <vroot/vdevicecalibration.h>
#include <esensor/echarts.h>

class EDev_Sen0108 : public ESensor_Base
{
    //////////////////////////////////////////////////////////////////////////Basics///////////////////////////
    public:
        EDev_Sen0108();
        virtual ~EDev_Sen0108();
        enum SensorUnits{
            SSU_default,
            SSU_percentVolt,
            SSU_mg
        };
        //properties=================================
        //Units
        inline SensorUnits sensorUnit(){return m_sensorUnit;}
        inline void setSensorUnit(SensorUnits unit){m_sensorUnit = unit;}
        inline void setTemperature(double temp){m_temperature = temp;}
        QString sensorUnitText();
        //Functions========================================
        double temperature();
        void writeZero(QVector<quint16>  values);
        void writeFastCalib(QVector<quint16>  values);
    private:
        SensorUnits m_sensorUnit=SSU_default;
        double m_temperature=25;
        //Private Function
        double sensorConvertUnits(double value);
        void calculatorValue();
        void calculatorValueCalib();
};

#endif // EDEV_SEN0108_H
