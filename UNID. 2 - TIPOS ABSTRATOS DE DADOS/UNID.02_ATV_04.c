#include <stdio.h>

// Definindo os tipos de sensores
typedef enum
{
    TEMPERATURE,
    LIGHT,
    MOVEMENT
} SensorType;

// Definindo a estrutura do sensor
typedef struct
{
    SensorType type;
    union
    {
        float temperature;
        float light;
        int movement;
    } data;
} Sensor;

// Função para cadastrar um novo sensor
void registerSensor(Sensor *sensor, SensorType type, float data)
{
    sensor->type = type;
    switch (type)
    {
    case TEMPERATURE:
        sensor->data.temperature = data;
        break;
    case LIGHT:
        sensor->data.light = data;
        break;
    case MOVEMENT:
        sensor->data.movement = (int)data;
        break;
    }
}

// Função para exibir as informações do sensor
void displaySensorInfo(Sensor sensor)
{
    switch (sensor.type)
    {
    case TEMPERATURE:
        printf("Temperatura: %.1f°C\n", sensor.data.temperature);
        break;
    case LIGHT:
        printf("Luminosidade: %.1f%%\n", sensor.data.light);
        break;
    case MOVEMENT:
        printf("Movimento detectado: %s\n", sensor.data.movement ? "Sim" : "Não");
        break;
    }
}

int main()
{
    Sensor sensors[10];
    registerSensor(&sensors[0], TEMPERATURE, 23.5);
    registerSensor(&sensors[1], LIGHT, 75.0);
    registerSensor(&sensors[2], MOVEMENT, 1);

    for (int i = 0; i < 3; i++)
    {
        displaySensorInfo(sensors[i]);
    }

    return 0;
}
