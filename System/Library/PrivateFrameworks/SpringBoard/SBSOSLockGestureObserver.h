//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SpringBoard/SBPressSequenceRecognizerDelegate-Protocol.h>

@class BSAction, NSString, SBPressSequenceObserver, SBPressSequenceRecognizer, SBPressSequenceSettings, SBPressSequenceValidator;
@protocol SBSOSLockGestureObserverDelegate;

@interface SBSOSLockGestureObserver : NSObject <SBPressSequenceRecognizerDelegate>
{
    SBPressSequenceRecognizer *_recognizer;	// 8 = 0x8
    SBPressSequenceValidator *_validator;	// 16 = 0x10
    SBPressSequenceSettings *_settings;	// 24 = 0x18
    _Bool _lastKnownActiveState;	// 32 = 0x20
    BSAction *_triggerAction;	// 40 = 0x28
    _Bool _gestureLoggingEnabled;	// 48 = 0x30
    _Bool _sosEnabled;	// 49 = 0x31
    SBPressSequenceObserver *_sosLockPressSequenceObserver;	// 56 = 0x38
    id <SBSOSLockGestureObserverDelegate> _delegate;	// 64 = 0x40
    long long _configuration;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x00000000004c581d
@property(nonatomic, getter=isSOSEnabled, setter=setSOSEnabled:) _Bool sosEnabled; // @synthesize sosEnabled=_sosEnabled;
@property(nonatomic, getter=isGestureLoggingEnabled) _Bool gestureLoggingEnabled; // @synthesize gestureLoggingEnabled=_gestureLoggingEnabled;
@property(readonly, nonatomic) long long configuration; // @synthesize configuration=_configuration;
@property(nonatomic) __weak id <SBSOSLockGestureObserverDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) SBPressSequenceObserver *sosLockPressSequenceObserver; // @synthesize sosLockPressSequenceObserver=_sosLockPressSequenceObserver;
- (double)_watchdogInterval;	// IMP=0x00000000004c57ba
- (double)_intervalThatSucceeds;	// IMP=0x00000000004c57a4
- (unsigned long long)_numberOfPressesThatActivate;	// IMP=0x00000000004c5799
- (unsigned long long)_numberOfPressesThatTrigger;	// IMP=0x00000000004c5783
- (id)_validator;	// IMP=0x00000000004c5775
- (void)_setRecognizer:(id)arg1;	// IMP=0x00000000004c572f
- (void)_configureSettings;	// IMP=0x00000000004c5536
- (void)_configure;	// IMP=0x00000000004c546b
- (void)_noteTriggerDidBecomeInactive;	// IMP=0x00000000000d076c
- (void)_noteTriggerDidBecomeActive;	// IMP=0x00000000004c5435
- (void)_noteTriggerActionRecievedResponse;	// IMP=0x00000000004c5404
- (void)pressSequenceRecognizerDidFail:(id)arg1;	// IMP=0x00000000000d075a
- (void)pressSequenceRecognizer:(id)arg1 didBeginPressDownAtIndex:(unsigned long long)arg2;	// IMP=0x00000000000c3eaa
- (void)pressSequenceRecognizerDidCompleteSequence:(id)arg1;	// IMP=0x00000000004c520e
- (void)noteDidBeginSOSWithUUID:(id)arg1;	// IMP=0x00000000004c51f8
- (void)resetWithNewConfiguration:(long long)arg1;	// IMP=0x00000000004c51a2
- (void)registerPressUpWithTimestamp:(double)arg1;	// IMP=0x00000000000c7990
- (void)registerPressDownWithTimestamp:(double)arg1;	// IMP=0x00000000000c3d6f
@property(readonly, nonatomic) long long triggerMechanism;
- (id)initWithConfiguration:(long long)arg1;	// IMP=0x00000000004c4ff7
- (id)init;	// IMP=0x00000000004c4fe0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

