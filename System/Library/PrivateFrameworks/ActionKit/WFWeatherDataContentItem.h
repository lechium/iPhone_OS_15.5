//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ContentKit/WFContentItem.h>

#import <ActionKit/WFContentItemClass-Protocol.h>

@interface WFWeatherDataContentItem : WFContentItem <WFContentItemClass>
{
}

+ (id)propertyBuilders;	// IMP=0x0000000000399aba
+ (id)countDescription;	// IMP=0x0000000000399aa2
+ (id)pluralTypeDescription;	// IMP=0x0000000000399a83
+ (id)typeDescription;	// IMP=0x0000000000399a64
+ (id)contentCategories;	// IMP=0x00000000003999fa
+ (id)outputTypes;	// IMP=0x0000000000399940
+ (id)ownedTypes;	// IMP=0x00000000003998c4
- (id)generateObjectRepresentationForClass:(Class)arg1 options:(id)arg2 error:(id *)arg3;	// IMP=0x00000000003997b8
- (id)pollutants;	// IMP=0x0000000000399768
- (id)localizedAirQualityCategory;	// IMP=0x0000000000399718
- (id)localizedAirQualityIndex;	// IMP=0x00000000003996c8
- (id)sunsetTime;	// IMP=0x0000000000399678
- (id)sunriseTime;	// IMP=0x0000000000399628
- (id)uvIndex;	// IMP=0x00000000003995d8
- (id)windDirection;	// IMP=0x0000000000399588
- (id)windSpeed;	// IMP=0x0000000000399538
- (id)precipitationChance;	// IMP=0x00000000003994e8
- (id)precipitationAmount;	// IMP=0x0000000000399498
- (id)pressure;	// IMP=0x0000000000399448
- (id)humidity;	// IMP=0x00000000003993f8
- (id)dewpoint;	// IMP=0x00000000003993a8
- (id)visibility;	// IMP=0x0000000000399358
- (id)localizedConditionString;	// IMP=0x0000000000399308
- (id)feelsLikeTemperature;	// IMP=0x00000000003992b8
- (id)lowTemperature;	// IMP=0x0000000000399268
- (id)highTemperature;	// IMP=0x0000000000399218
- (id)temperature;	// IMP=0x00000000003991c8
- (id)location;	// IMP=0x0000000000399178
- (id)date;	// IMP=0x0000000000399128
- (id)weatherData;	// IMP=0x00000000003990fa

@end

