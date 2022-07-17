//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AVConference/VCStreamInputCaptureSourceDelegate-Protocol.h>

@class NSNumber, NSObject, NSString;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface VCStreamInput <VCStreamInputCaptureSourceDelegate>
{
    NSNumber *_streamInputID;	// 8 = 0x8
    struct opaqueCMFormatDescription *_format;	// 16 = 0x10
    id _delegate;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_delegateQueue;	// 32 = 0x20
    _Bool _isStarted;	// 40 = 0x28
}

@property(readonly, nonatomic) NSNumber *streamInputID; // @synthesize streamInputID=_streamInputID;
- (void)pushSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;	// IMP=0x000000000012ad06
- (struct opaqueCMFormatDescription *)streamFormat;	// IMP=0x000000000012acf5
- (void)didStopStreamInputCaptureSource;	// IMP=0x000000000012ac2a
- (void)didStartStreamInputCaptureSource;	// IMP=0x000000000012ab5f
@property(readonly, nonatomic) _Bool isStarted; // @synthesize isStarted=_isStarted;
- (id)delegate;	// IMP=0x000000000012aa77
- (void)dealloc;	// IMP=0x000000000012a9d7
- (id)initWithStreamInputID:(id)arg1 format:(struct opaqueCMFormatDescription *)arg2 delegate:(id)arg3 delegateQueue:(id)arg4;	// IMP=0x000000000012a808

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
