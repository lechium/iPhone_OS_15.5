//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class _GCControllerManagerAppClient;
@protocol GCAdaptiveTriggers, GCControllerHIDInfo;

@interface GCDualSenseAdaptiveTrigger
{
    _GCControllerManagerAppClient *_controllerManagerApp;	// 8 = 0x8
    id <GCControllerHIDInfo> _hidInfo;	// 16 = 0x10
    id <GCAdaptiveTriggers> _adaptiveTriggers;	// 24 = 0x18
    float _armPosition;	// 32 = 0x20
    int _index;	// 36 = 0x24
    long long _mode;	// 40 = 0x28
    long long _status;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000000001d47c
@property(nonatomic) int index; // @synthesize index=_index;
@property(nonatomic) float armPosition; // @synthesize armPosition=_armPosition;
@property(nonatomic) long long status; // @synthesize status=_status;
@property(nonatomic) long long mode; // @synthesize mode=_mode;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x000000000001d334
- (void)updateStatus;	// IMP=0x000000000001d116
- (void)stopObservingChangesForAdaptiveTriggers:(id)arg1;	// IMP=0x000000000001d0bd
- (void)observeChangesForAdaptiveTriggers:(id)arg1;	// IMP=0x000000000001d05e
- (void)sendAdaptiveTriggerPayloadDict:(id)arg1;	// IMP=0x000000000001cf63
- (void)sendAdaptiveTriggerPayload:(id)arg1;	// IMP=0x000000000001ce90
- (void)locateAdaptiveTriggerComponent;	// IMP=0x000000000001cc57
- (void)locateControllerManagerApp;	// IMP=0x000000000001c934
- (void)setModeOff;	// IMP=0x000000000001c8e1
- (void)setModeVibrationWithAmplitudes:(CDStruct_dd47a48c)arg1 frequency:(float)arg2;	// IMP=0x000000000001c814
- (void)setModeVibrationWithStartPosition:(float)arg1 amplitude:(float)arg2 frequency:(float)arg3;	// IMP=0x000000000001c77d
- (void)setModeFeedbackWithResistiveStrengths:(CDStruct_dd47a48c)arg1;	// IMP=0x000000000001c6ba
- (void)setModeWeaponWithStartPosition:(float)arg1 endPosition:(float)arg2 resistiveStrength:(float)arg3;	// IMP=0x000000000001c622
- (void)setModeFeedbackWithStartPosition:(float)arg1 resistiveStrength:(float)arg2;	// IMP=0x000000000001c5a2
- (void)setModeSlopeFeedbackWithStartPosition:(float)arg1 endPosition:(float)arg2 startStrength:(float)arg3 endStrength:(float)arg4;	// IMP=0x000000000001c4c1
- (void)dealloc;	// IMP=0x000000000001c478

@end
