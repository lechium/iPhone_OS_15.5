//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol WFSettings;

@interface WFRequestFormattingRules : NSObject
{
    id <WFSettings> _settings;	// 8 = 0x8
}

+ (_Bool)aqiEnabledByRules:(id)arg1 forLocation:(id)arg2;	// IMP=0x000000000001e8a5
- (void).cxx_destruct;	// IMP=0x000000000001ea6e
@property(readonly, nonatomic) id <WFSettings> settings; // @synthesize settings=_settings;
- (long long)locationNumDecimalsOfPrecision;	// IMP=0x000000000001ea4e
- (_Bool)aqiEnabledForCountryCode:(id)arg1;	// IMP=0x000000000001e98f
- (id)initWithSettings:(id)arg1;	// IMP=0x000000000001e924

@end

