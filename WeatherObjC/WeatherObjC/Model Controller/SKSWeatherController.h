//
//  SKSWeatherController.h
//  WeatherObjC
//
//  Created by Lambda_School_Loaner_204 on 1/21/20.
//  Copyright © 2020 Lambda School. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface SKSWeatherController : NSObject

@property NSMutableArray *forecasts;

- (void)searchForForecastsByZipCode:(NSString *)zipcode completion:(void (^)(NSError *error))completion;

@end

NS_ASSUME_NONNULL_END
