//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVSampleBufferVideoOutputInternal;
@protocol AVSampleBufferVideoOutputPullDelegate, OS_dispatch_queue;

@interface AVSampleBufferVideoOutput : NSObject
{
    AVSampleBufferVideoOutputInternal *_videoOutputInternal;	// 8 = 0x8
}

- (void)_dispatchOutputSequenceWasFlushed;	// IMP=0x00000000000176e0
- (struct OpaqueFigVisualContext *)_visualContext;	// IMP=0x00000000000176d2
- (void)_resetLastImageTime;	// IMP=0x000000000001765f
- (_Bool)_configureWithVideoQueue:(struct OpaqueFigVideoQueue *)arg1;	// IMP=0x0000000000017578
- (struct __CVBuffer *)copyLastPixelBuffer:(CDStruct_1b6d18a9 *)arg1;	// IMP=0x0000000000017419
- (struct __CVBuffer *)copyPixelBufferForSourceTime:(CDStruct_1b6d18a9)arg1 sourceTimeForDisplay:(CDStruct_1b6d18a9 *)arg2;	// IMP=0x0000000000017402
- (_Bool)hasNewPixelBufferForSourceTime:(CDStruct_1b6d18a9)arg1;	// IMP=0x00000000000173a8
- (struct __CVBuffer *)_copyPixelBufferForItemTimeWithOptions:(CDStruct_1b6d18a9)arg1 itemTimeForDisplay:(CDStruct_1b6d18a9 *)arg2 options:(unsigned int)arg3;	// IMP=0x00000000000172ba
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue;
@property(readonly, nonatomic) __weak id <AVSampleBufferVideoOutputPullDelegate> outputDelegate;
- (void)setOutputDelegate:(id)arg1 queue:(id)arg2;	// IMP=0x00000000000171bb
- (id)_weakReference;	// IMP=0x00000000000171a4
- (void)dealloc;	// IMP=0x00000000000170b7
- (id)init;	// IMP=0x0000000000016ffd
- (_Bool)setUpWithOutputSettings:(id)arg1 outputSettingsArePixelBufferAttributes:(_Bool)arg2 withExceptionReason:(id *)arg3;	// IMP=0x0000000000016dff

@end

