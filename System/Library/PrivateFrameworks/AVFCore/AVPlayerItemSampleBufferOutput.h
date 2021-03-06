//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class AVPlayerItemSampleBufferOutputInternal, NSObject;
@protocol AVPlayerItemSampleBufferOutputDelegate, OS_dispatch_queue;

@interface AVPlayerItemSampleBufferOutput
{
    AVPlayerItemSampleBufferOutputInternal *_internal;	// 16 = 0x10
}

+ (void)initialize;	// IMP=0x000000000013b4bd
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue;
@property(readonly) __weak id <AVPlayerItemSampleBufferOutputDelegate> delegate;
- (void)setDelegate:(id)arg1 queue:(id)arg2;	// IMP=0x000000000013bc31
- (void)_figPlaybackItemTrackOutputSequenceWasFlushedForTrackID:(int)arg1 extractionID:(int)arg2;	// IMP=0x000000000013bb14
- (void)_figPlaybackItemTrackSampleBufferDidBecomeAvailableForTrackID:(int)arg1 extractionID:(int)arg2;	// IMP=0x000000000013b9f7
- (struct opaqueCMSampleBuffer *)copyNextSampleBufferForTrackID:(int)arg1 flags:(unsigned int *)arg2;	// IMP=0x000000000013b94f
- (id)_weakReferenceToPlayerItemTrack;	// IMP=0x000000000013b93a
- (void)_setFigPlaybackItem:(struct OpaqueFigPlaybackItem *)arg1;	// IMP=0x000000000013b7d9
- (struct OpaqueFigPlaybackItem *)_figPlaybackItem;	// IMP=0x000000000013b7c4
- (void)dealloc;	// IMP=0x000000000013b594
- (id)init;	// IMP=0x000000000013b4ce
- (void)_setExtractionID:(int)arg1;	// IMP=0x000000000013bf09
- (int)_extractionID;	// IMP=0x000000000013bef5
- (void)_setTrackID:(int)arg1;	// IMP=0x000000000013bee1
- (int)_trackID;	// IMP=0x000000000013becd
- (void)_detachFromPlayerItemTrack;	// IMP=0x000000000013be2d
- (void)_attachToPlayerItemTrack:(id)arg1 figPlaybackItem:(struct OpaqueFigPlaybackItem *)arg2;	// IMP=0x000000000013bd5b

@end

