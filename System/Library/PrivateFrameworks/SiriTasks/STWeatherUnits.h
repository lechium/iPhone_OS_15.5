//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AssistantServices/STSiriModelObject.h>

@interface STWeatherUnits : STSiriModelObject
{
    long long _temperatureUnits;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000000b919
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000000b99e
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000000b921
- (long long)temperatureUnits;	// IMP=0x000000000000b908
- (id)_initWithTemperatureUnits:(long long)arg1;	// IMP=0x000000000000b8c4

@end

