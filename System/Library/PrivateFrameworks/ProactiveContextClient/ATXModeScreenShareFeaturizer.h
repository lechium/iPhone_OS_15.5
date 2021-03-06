//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ProactiveContextClient/ATXModeFeaturizer-Protocol.h>

@class BMBiomeScheduler, BPSSink, NSString;
@protocol ATXModeFeaturizerDelegate, OS_dispatch_queue;

@interface ATXModeScreenShareFeaturizer : NSObject <ATXModeFeaturizer>
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    BMBiomeScheduler *_scheduler;	// 16 = 0x10
    BPSSink *_sink;	// 24 = 0x18
    id <ATXModeFeaturizerDelegate> _delegate;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000000574f
@property(nonatomic) __weak id <ATXModeFeaturizerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)stopListening;	// IMP=0x00000000000056de
- (void)beginListening;	// IMP=0x0000000000005291
- (void)_processNewScreenShareEvent:(id)arg1;	// IMP=0x0000000000005205
- (id)_provideFeaturesWithScreenShareEvent:(id)arg1;	// IMP=0x00000000000050c8
- (id)provideFeatures;	// IMP=0x0000000000004e2b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

