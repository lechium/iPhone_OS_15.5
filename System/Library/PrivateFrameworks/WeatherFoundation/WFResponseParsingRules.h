//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol WFSettings;

@interface WFResponseParsingRules : NSObject
{
    id <WFSettings> _settings;	// 8 = 0x8
}

+ (_Bool)aqiEnabledByRules:(id)arg1 forLocation:(id)arg2;	// IMP=0x000000000005382b
- (void).cxx_destruct;	// IMP=0x00000000000539de
@property(readonly, nonatomic) id <WFSettings> settings; // @synthesize settings=_settings;
- (_Bool)aqiEnabledForCountryCode:(id)arg1;	// IMP=0x0000000000053915
- (id)initWithSettings:(id)arg1;	// IMP=0x00000000000538aa

@end

