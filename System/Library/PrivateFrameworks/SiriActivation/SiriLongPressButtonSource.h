//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SiriActivation/SiriButtonSource-Protocol.h>

@class NSMutableArray, NSString, SiriLongPressButtonContext;

@interface SiriLongPressButtonSource <SiriButtonSource>
{
    double _longPressInterval;	// 24 = 0x18
    long long _buttonIdentifier;	// 32 = 0x20
    NSMutableArray *_lock_activityAssertions;	// 40 = 0x28
    SiriLongPressButtonContext *_context;	// 48 = 0x30
    CDUnknownBlockType _currentTimeGenerator;	// 56 = 0x38
}

+ (id)new;	// IMP=0x000000000001e33d
+ (id)longPressButtonForIdentifier:(long long)arg1;	// IMP=0x000000000001e26f
- (void).cxx_destruct;	// IMP=0x000000000001fe58
@property(copy, nonatomic) CDUnknownBlockType currentTimeGenerator; // @synthesize currentTimeGenerator=_currentTimeGenerator;
@property(retain, nonatomic) SiriLongPressButtonContext *context; // @synthesize context=_context;
@property(retain, nonatomic) NSMutableArray *lock_activityAssertions; // @synthesize lock_activityAssertions=_lock_activityAssertions;
@property(nonatomic) long long buttonIdentifier; // @synthesize buttonIdentifier=_buttonIdentifier;
@property(nonatomic) double longPressInterval; // @synthesize longPressInterval=_longPressInterval;
- (double)_timestampForSpeechInteractionActivityWithTimestamp:(double)arg1;	// IMP=0x000000000001fad0
- (_Bool)_shouldReplaceSpeechInteractionActivityTimestampWithPrewarmTimestamp;	// IMP=0x000000000001fab6
- (id)_deviceIdentifier;	// IMP=0x000000000001faae
- (void)didRecognizeLongPress;	// IMP=0x000000000001f8de
- (void)didRecognizeButtonSinglePressUp;	// IMP=0x000000000001f826
- (id)speechInteractionActivityWithTimestamp:(double)arg1;	// IMP=0x000000000001f34a
- (id)prepareForActivation;	// IMP=0x000000000001f2ef
- (id)prepareForActivationWithTimestamp:(double)arg1;	// IMP=0x000000000001ef2d
- (void)configureConnection;	// IMP=0x000000000001e427
- (id)_initWithButtonIdentifier:(long long)arg1;	// IMP=0x000000000001e345
- (id)init;	// IMP=0x000000000001e32f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
