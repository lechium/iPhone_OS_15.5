//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreUtils/VSSpeechSynthesizerDelegate-Protocol.h>

@class CUVoiceRequest, NSMutableArray, NSString, VSSpeechSynthesizer;
@protocol OS_dispatch_queue;

@interface CUVoiceSession : NSObject <VSSpeechSynthesizerDelegate>
{
    CUVoiceRequest *_currentRequest;	// 8 = 0x8
    _Bool _invalidateCalled;	// 16 = 0x10
    _Bool _invalidateDone;	// 17 = 0x11
    unsigned int _invalidateFlags;	// 20 = 0x14
    NSMutableArray *_requests;	// 24 = 0x18
    VSSpeechSynthesizer *_speechSynthesizer;	// 32 = 0x20
    struct LogCategory *_ucat;	// 40 = 0x28
    NSMutableArray *_voiceRequests;	// 48 = 0x30
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 56 = 0x38
    CDUnknownBlockType _invalidationHandler;	// 64 = 0x40
    NSString *_label;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x00000000000c4c92
@property(copy, nonatomic) NSString *label; // @synthesize label=_label;
@property(copy, nonatomic) CDUnknownBlockType invalidationHandler; // @synthesize invalidationHandler=_invalidationHandler;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
- (void)speechSynthesizer:(id)arg1 didFinishSpeakingRequest:(id)arg2 successfully:(_Bool)arg3 withError2:(id)arg4;	// IMP=0x00000000000c49d2
- (void)speechSynthesizer:(id)arg1 didFinishSpeakingRequest:(id)arg2 successfully:(_Bool)arg3 phonemesSpoken:(id)arg4 withError:(id)arg5;	// IMP=0x00000000000c48e7
- (void)speechSynthesizer:(id)arg1 didStartSpeakingRequest:(id)arg2;	// IMP=0x00000000000c47d2
- (void)_completeRequest:(id)arg1 error:(id)arg2;	// IMP=0x00000000000c4733
- (void)_completeAllRequestsWithError:(id)arg1;	// IMP=0x00000000000c45c6
- (void)_processQueuedRequests;	// IMP=0x00000000000c43aa
- (void)stopSpeaking;	// IMP=0x00000000000c435f
- (void)_speakText:(id)arg1 flags:(unsigned int)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000000c4043
- (void)speakText:(id)arg1 flags:(unsigned int)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000000c3f83
- (void)_invalidated;	// IMP=0x00000000000c3f01
- (void)_invalidate;	// IMP=0x00000000000c3d58
- (void)invalidateWithFlags:(unsigned int)arg1;	// IMP=0x00000000000c3d0a
- (void)invalidate;	// IMP=0x00000000000c3cbf
- (void)dealloc;	// IMP=0x00000000000c3bfd
- (id)init;	// IMP=0x00000000000c3b82

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

