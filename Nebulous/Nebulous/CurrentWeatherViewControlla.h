//
//  CurrentWeatherViewControlla.h
//  Nebulous
//
//  Created by Elyanil Liranzo Castro on 5/10/17.
//  Copyright © 2017 Elyanil Liranzo Castro. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "CurrentForecast.h"

@interface CurrentWeatherViewControlla : UIViewController
@property (weak, nonatomic) IBOutlet UILabel *currentTemperature;
@property (weak, nonatomic) IBOutlet UIImageView *weatherIcon;
@property (weak, nonatomic) IBOutlet UILabel *feelsLikeTemperature;
    @property (weak, nonatomic) IBOutlet UILabel *summary;
@property (weak, nonatomic) IBOutlet UIImageView *precipitationDrop;
@property(strong, nonatomic)CurrentForecast *currentWeather;
@property (weak, nonatomic) IBOutlet UIActivityIndicatorView *activityIndicator;
@end
