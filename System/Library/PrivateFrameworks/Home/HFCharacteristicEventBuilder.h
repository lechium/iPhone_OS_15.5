//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Home/NAEquatable-Protocol.h>

@class HMCharacteristic, NSString;

@interface HFCharacteristicEventBuilder <NAEquatable>
{
    HMCharacteristic *_characteristic;	// 8 = 0x8
}

+ (id)characteristicEventBuildersForEvents:(id)arg1 inHome:(id)arg2;	// IMP=0x000000000001f517
- (void).cxx_destruct;	// IMP=0x000000000001fb24
@property(readonly, nonatomic) HMCharacteristic *characteristic; // @synthesize characteristic=_characteristic;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000001f390
- (id)eventType;	// IMP=0x000000000001f383
- (_Bool)wouldFireForCharacteristic:(id)arg1 value:(id)arg2;	// IMP=0x000000000001f37b
- (id)triggeringValues;	// IMP=0x000000000001f2e1
- (void)copyValuesFromCharacteristicEventBuilder:(id)arg1;	// IMP=0x000000000001f2a5
- (id)_initWithCharacteristic:(id)arg1;	// IMP=0x000000000001f235
- (id)_initWithEvent:(id)arg1;	// IMP=0x000000000001f105

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
