//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CSAudioInjectionEngine, CSSyncKeywordAnalyzerQuasar, EARSyncPSRAudioProcessor, MISSING_TYPE, NSString, OSDAnalyzer;
@protocol OS_dispatch_queue;

@interface CSModelBenchmarker : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    CSSyncKeywordAnalyzerQuasar *_vtSecondPassAnalyzer;	// 16 = 0x10
    EARSyncPSRAudioProcessor *_psrAudioProcessor;	// 24 = 0x18
    OSDAnalyzer *_osdAnalyzer;	// 32 = 0x20
    CDUnknownBlockType _completion;	// 40 = 0x28
    CSAudioInjectionEngine *_audioInjectionEngine;	// 48 = 0x30
    NSObject<OS_dispatch_queue> *_modelExeQueue;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x002000000005e583
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *modelExeQueue; // @synthesize modelExeQueue=_modelExeQueue;
@property(retain, nonatomic) CSAudioInjectionEngine *audioInjectionEngine; // @synthesize audioInjectionEngine=_audioInjectionEngine;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(retain, nonatomic) OSDAnalyzer *osdAnalyzer; // @synthesize osdAnalyzer=_osdAnalyzer;
@property(retain, nonatomic) EARSyncPSRAudioProcessor *psrAudioProcessor; // @synthesize psrAudioProcessor=_psrAudioProcessor;
@property(retain, nonatomic) CSSyncKeywordAnalyzerQuasar *vtSecondPassAnalyzer; // @synthesize vtSecondPassAnalyzer=_vtSecondPassAnalyzer;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void)_setupAudioInjectionEngineWithAudioURL:(id)arg1;	// IMP=0x001000000005e253
- (void)audioEngineAudioChunkForTvAvailable:(id)arg1 audioChunk:(id)arg2;	// IMP=0x001000000005e24d
- (void)audioEngineDidStopRecord:(id)arg1 audioStreamHandleId:(unsigned long long)arg2 reason:(unsigned long long)arg3;	// IMP=0x001000000005dfda
- (MISSING_TYPE *)audioEngineBufferAvailable:audioStreamHandleId:buffer:remoteVAD:atTime: /* Error: Ran out of types for this method. */;	// IMP=0x001000000005de70
- (void)audioEngineDidStartRecord:(id)arg1 audioStreamHandleId:(unsigned long long)arg2 successfully:(_Bool)arg3 error:(id)arg4;	// IMP=0x001000000005dddc
- (void)runOSDAnalyzerWithConfig:(id)arg1 withUrl:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000005dc09
- (void)runVTSecondPassModelWithConfig:(id)arg1 locale:(id)arg2 withUrl:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x001000000005d9b1
- (void)runLstmPhsModelWithConfig:(id)arg1 withUrl:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000005d7a8
- (void)pingpong:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000005d6c9
- (id)init;	// IMP=0x001000000005d5cb

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
