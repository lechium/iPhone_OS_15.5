//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AXMediaUtilities/AXMTaskDispatcherDelegate-Protocol.h>

@class AXMAudioSession, AXMOutputManagerConfiguration, AXMSoundComponent, AXMSpeechComponent, AXMTaskDispatcher, NSArray, NSString;
@protocol OS_dispatch_queue;

@interface AXMOutputManager : NSObject <AXMTaskDispatcherDelegate>
{
    AXMTaskDispatcher *_outputRequests;	// 8 = 0x8
    _Bool _usesPrivateAudioSession;	// 16 = 0x10
    AXMAudioSession *_audioSession;	// 24 = 0x18
    long long _state;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_queue;	// 40 = 0x28
    AXMSoundComponent *_queue_soundComponent;	// 48 = 0x30
    AXMSpeechComponent *_queue_speechComponent;	// 56 = 0x38
    NSArray *_queue_activeComponents;	// 64 = 0x40
    AXMOutputManagerConfiguration *_configuration;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x00000000000a0c86
@property(retain, nonatomic) AXMOutputManagerConfiguration *configuration; // @synthesize configuration=_configuration;
- (void)dispatcher:(id)arg1 handleTask:(id)arg2;	// IMP=0x00000000000a07c0
- (id)playActiveSound:(id)arg1;	// IMP=0x00000000000a06fa
- (void)playSound:(id)arg1;	// IMP=0x00000000000a0679
- (void)interruptPolitely;	// IMP=0x00000000000a05f9
- (void)interruptImmediately;	// IMP=0x00000000000a0579
- (void)interrupt:(id)arg1;	// IMP=0x00000000000a04e6
- (void)speak:(id)arg1;	// IMP=0x00000000000a0465
- (id)dispatchRequest:(id)arg1;	// IMP=0x00000000000a033f
- (void)enableWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000009fe2d
- (void)disable;	// IMP=0x000000000009fd54
@property(readonly, copy) NSString *description;
- (id)initWithConfiguration:(id)arg1;	// IMP=0x000000000009f9e3
- (id)initWithComponents:(unsigned long long)arg1 options:(unsigned long long)arg2;	// IMP=0x000000000009f93c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

