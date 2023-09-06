#include <stdio.h>
#include <string.h>

struct Weather {
    char outlook[9]; //outlook {overcast,sunny,rain}
    int temperature;
    int humidity;
    char wind; //wind {T,F}
};

void playing_decision(struct Weather);

int main()
{
    int count;
    float humidity;
    struct Weather weather[6];
    scanf("%d", &count);
    for (int i = 0; i < count; i++) {
        scanf("%s %d %f %c", weather[i].outlook, &weather[i].temperature, &humidity, &weather[i].wind);
        if (humidity > 77.5) {
            weather[i].humidity = 80;
        } else {
            weather[i].humidity = humidity;
        }
        playing_decision(weather[i]);
    }
    return 0;
}

void playing_decision(struct Weather weather)
{
    if (!strcmp(weather.outlook, "overcast")) {
        printf("yes");
    } else if (!strcmp(weather.outlook, "rain")) {
        if (weather.wind == 'F') {
            printf("yes");
        } else if (weather.wind == 'T'){
            printf("no");
        }
    } else if (!strcmp(weather.outlook, "sunny")) {
        if (weather.humidity > 77.5) {
            printf("no");
        } else {
            printf("yes");
        }
    }
    printf("\n");
}
