//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <DTXConnectionServices/DTXService.h>

#import <DVTInstrumentsFoundation/DTSamplingServiceAuthorizedAPI-Protocol.h>

@class NSString;

@interface DTSamplingService : DTXService <DTSamplingServiceAuthorizedAPI>
{
    struct sampling_context_t *_context;	// 8 = 0x8
    _Bool _doCollectData;	// 16 = 0x10
    unsigned long long _samplingRate;	// 24 = 0x18
    unsigned long long _outputRate;	// 32 = 0x20
    unsigned long long _outputRateDelta;	// 40 = 0x28
    unsigned long long *_backtraceBuffer;	// 48 = 0x30
    unsigned long long _backtraceBufferSize;	// 56 = 0x38
    unsigned long long _backtraceBufferUsedSize;	// 64 = 0x40
    unsigned int _task;	// 72 = 0x48
}

+ (void)registerCapabilities:(id)arg1;	// IMP=0x000000000000b26e
- (void)addSampleWithTimeInfo:(struct __CFDictionary *)arg1 useZeroDelta:(_Bool)arg2;	// IMP=0x000000000000b7bd
- (void)collectData;	// IMP=0x000000000000b61d
- (void)_allocateBuffer;	// IMP=0x000000000000b5d3
- (void)_outputData;	// IMP=0x000000000000b543
- (void)stopSampling;	// IMP=0x000000000000b532
- (void)startSampling;	// IMP=0x000000000000b4d8
- (void)setTargetPid:(id)arg1;	// IMP=0x000000000000b454
- (void)setOutputRate:(id)arg1;	// IMP=0x000000000000b413
- (void)setSamplingRate:(id)arg1;	// IMP=0x000000000000b3e8
- (void)dealloc;	// IMP=0x000000000000b359
- (id)initWithChannel:(id)arg1;	// IMP=0x000000000000b307

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

