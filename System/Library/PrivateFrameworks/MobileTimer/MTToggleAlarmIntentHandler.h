//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MobileTimer/MTDisableAlarmIntentHandling-Protocol.h>
#import <MobileTimer/MTEnableAlarmIntentHandling-Protocol.h>
#import <MobileTimer/MTToggleAlarmIntentHandling-Protocol.h>

@class NSString;

@interface MTToggleAlarmIntentHandler <MTEnableAlarmIntentHandling, MTDisableAlarmIntentHandling, MTToggleAlarmIntentHandling>
{
}

- (void)handleMTDisableAlarm:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000088bf
- (void)confirmMTDisableAlarm:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000088ad
- (void)handleMTEnableAlarm:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000000889b
- (void)confirmMTEnableAlarm:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000008889
- (id)_alarmUserActivityWithDisableIntent:(id)arg1;	// IMP=0x000000000000876a
- (id)_alarmUserActivityWithEnableIntent:(id)arg1;	// IMP=0x000000000000864b
- (id)updateEnableStateForAlarm:(id)arg1 enabled:(_Bool)arg2;	// IMP=0x00000000000085a9
- (_Bool)getEnableStateForAlarm:(id)arg1;	// IMP=0x0000000000008535
- (void)_toggleAlarm:(id)arg1 alarmIDString:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000007be7
- (void)resolveOperationForToggleAlarm:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000007b25
- (void)handleToggleAlarm:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000000787b
- (void)confirmToggleAlarm:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000007813
- (void)provideAlarmOptionsForToggleAlarm:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000007654
- (void)resolveStateForToggleAlarm:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x000000000000755e
- (void)resolveAlarmForToggleAlarm:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000007153
- (void)handleDisableAlarm:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000006fb0
- (void)handleEnableAlarm:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000006df6
- (void)confirmDisableAlarm:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000006d44
- (void)confirmEnableAlarm:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000006c92

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

