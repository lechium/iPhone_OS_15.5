//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitEventRouter/HMEEvent.h>

@class HMImmutableSettingValue;

@interface HMImmutableSettingValueEvent : HMEEvent
{
    HMImmutableSettingValue *_settingValue;	// 8 = 0x8
}

+ (id)decodeSettingValueFromEvent:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000e86a0
- (void).cxx_destruct;	// IMP=0x00000000000e89b0
@property(readonly, nonatomic) HMImmutableSettingValue *settingValue; // @synthesize settingValue=_settingValue;
- (id)encodedData;	// IMP=0x00000000000e8925
- (id)initSettingValue:(id)arg1 eventSource:(id)arg2 eventTimestamp:(double)arg3;	// IMP=0x00000000000e885c

@end

