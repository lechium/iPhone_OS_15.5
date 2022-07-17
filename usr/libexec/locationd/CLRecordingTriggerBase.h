//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CLWorkoutRecorderPublisher, CLWorkoutRecording;
@protocol CLIntersiloUniverse, CLRecordingTriggerDelegate><CLWorkoutRecordingDelegate><CLWorkoutRecorderPublisherDelegate><CLWeatherServiceClientProtocol, OS_dispatch_source;

@interface CLRecordingTriggerBase : NSObject
{
    id <CLRecordingTriggerDelegate><CLWorkoutRecordingDelegate><CLWorkoutRecorderPublisherDelegate><CLWeatherServiceClientProtocol> _delegate;	// 8 = 0x8
    id <CLIntersiloUniverse> _universe;	// 16 = 0x10
    NSObject<OS_dispatch_source> *_deferredStopTimer;	// 24 = 0x18
    struct unique_ptr<CLPowerAssertion, std::default_delete<CLPowerAssertion>> _powerAssertion;	// 32 = 0x20
    CLWorkoutRecording *_recording;	// 40 = 0x28
    unique_ptr_4889cf95 _settings;	// 48 = 0x30
    CLWorkoutRecorderPublisher *_publisher;	// 56 = 0x38
}

- (id).cxx_construct;	// IMP=0x0020000000b2995f
- (void).cxx_destruct;	// IMP=0x0010000000b2991b
- (_Bool)isRecording;	// IMP=0x0010000000b2990d
- (id)getDeferredStopTimer;	// IMP=0x0010000000b29903
- (id)getUniverse;	// IMP=0x0010000000b298f9
- (id)getDelegate;	// IMP=0x0010000000b298ef
- (void)handlePublisherResponse:(id)arg1;	// IMP=0x0010000000b2982b
- (void)publishRecording;	// IMP=0x0010000000b297a5
- (void)stopRecordingShouldPublish:(_Bool)arg1;	// IMP=0x0010000000b295db
- (void)cancelDeferredStopTimer;	// IMP=0x0010000000b295ac
- (void)feedWeatherData:(id)arg1;	// IMP=0x0010000000b2958f
- (void)scheduleStop:(double)arg1 withHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000b2923a
- (void)startRecordingSpecifyTriggerDelay:(double)arg1;	// IMP=0x0010000000b28eb9
- (void)initializePowerAssertion;	// IMP=0x0010000000b28e0b
- (void)dealloc;	// IMP=0x0010000000b28d91
- (id)initWithDelegate:(id)arg1 universe:(id)arg2 andSettings:(unique_ptr_4889cf95)arg3;	// IMP=0x0010000000b28c5f

@end
