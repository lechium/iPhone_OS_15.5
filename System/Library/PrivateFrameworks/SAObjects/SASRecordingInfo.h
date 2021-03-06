//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SAObjects/SAAceSerializable-Protocol.h>

@class NSNumber, NSString;

@interface SASRecordingInfo <SAAceSerializable>
{
}

+ (id)recordingInfoWithDictionary:(id)arg1 context:(id)arg2;	// IMP=0x000000000000ce2d
+ (id)recordingInfo;	// IMP=0x000000000000ce1b
@property(nonatomic) _Bool zeroLatencyLaunch;
@property(nonatomic) _Bool ringerSwitchOff;
@property(copy, nonatomic) NSNumber *buttonUpTime;
@property(copy, nonatomic) NSNumber *buttonDowntime;
@property(copy, nonatomic) NSNumber *beamFormingStartTime;
@property(copy, nonatomic) NSString *alertType;
@property(copy, nonatomic) NSNumber *activationTime;
@property(copy, nonatomic) NSNumber *activationHapticAlertStartTime;
@property(copy, nonatomic) NSNumber *activationHapticAlertDuration;
@property(copy, nonatomic) NSNumber *activationAudioAlertStartTime;
@property(copy, nonatomic) NSNumber *activationAudioAlertDuration;
- (id)encodedClassName;	// IMP=0x000000000000ce0e
- (id)groupIdentifier;	// IMP=0x000000000000cdfa

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

