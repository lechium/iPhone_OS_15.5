//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol EARCaesuraSilencePosteriorGeneratorDelegate, OS_dispatch_queue;

@interface EARCaesuraSilencePosteriorGenerator : NSObject
{
    struct shared_ptr<quasar::SilencePosteriorGenerator> _silenceGenerator;	// 8 = 0x8
    NSString *_configFile;	// 24 = 0x18
    unsigned long long _samplingRate;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_spgQueue;	// 40 = 0x28
    id <EARCaesuraSilencePosteriorGeneratorDelegate> _delegate;	// 48 = 0x30
}

+ (void)initialize;	// IMP=0x0000000000661e0d
- (id).cxx_construct;	// IMP=0x000000000066278c
- (void).cxx_destruct;	// IMP=0x0000000000662752
@property(nonatomic) __weak id <EARCaesuraSilencePosteriorGeneratorDelegate> delegate; // @synthesize delegate=_delegate;
- (void)dealloc;	// IMP=0x00000000006626a3
- (void)endAudio;	// IMP=0x0000000000662690
- (void)resetForNewRequest;	// IMP=0x0000000000662571
- (void)_startComputeTask;	// IMP=0x000000000066219d
- (long long)getFrameDurationMs;	// IMP=0x000000000066218c
- (void)addAudio:(id)arg1 numSamples:(unsigned long long)arg2;	// IMP=0x000000000066211d
- (id)initWithConfigFile:(id)arg1 samplingRate:(unsigned long long)arg2 queue:(id)arg3;	// IMP=0x0000000000661ebd
- (id)initWithConfigFile:(id)arg1 samplingRate:(unsigned long long)arg2;	// IMP=0x0000000000661e4d
- (id)initWithConfigFile:(id)arg1;	// IMP=0x0000000000661e35

@end

