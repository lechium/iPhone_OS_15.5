//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Home/HFCharacteristicLikeEvent-Protocol.h>

@class HMCharacteristic, NSSet, NSString;
@protocol NSCopying;

@interface HFCharacteristicMultiValueEventBuilder <HFCharacteristicLikeEvent>
{
    NSSet *_triggerValues;	// 16 = 0x10
    id <NSCopying> _representativeTargetValue;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000219ce
@property(retain, nonatomic) id <NSCopying> representativeTargetValue; // @synthesize representativeTargetValue=_representativeTargetValue;
@property(retain, nonatomic) NSSet *triggerValues; // @synthesize triggerValues=_triggerValues;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000217ea
@property(readonly, nonatomic) id hf_representativeTriggerValue;
- (id)naturalLanguageNameWithOptions:(id)arg1;	// IMP=0x000000000002166b
- (id)buildNewEventsFromCurrentState;	// IMP=0x0000000000021556
- (void)copyValuesFromCharacteristicEventBuilder:(id)arg1;	// IMP=0x0000000000021483
- (id)comparisonKey;	// IMP=0x000000000002133b
- (_Bool)wouldFireForCharacteristic:(id)arg1 value:(id)arg2;	// IMP=0x00000000000212c4
- (id)triggeringValues;	// IMP=0x00000000000212b2
- (id)initWithCharacteristic:(id)arg1 values:(id)arg2;	// IMP=0x0000000000021214

// Remaining properties
@property(readonly, nonatomic) HMCharacteristic *characteristic;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
