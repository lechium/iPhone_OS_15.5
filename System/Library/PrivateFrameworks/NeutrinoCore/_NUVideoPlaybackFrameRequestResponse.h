//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <NeutrinoCore/NUVideoPlaybackFrameResult-Protocol.h>

@class NSString;
@protocol NURenderStatistics;

@interface _NUVideoPlaybackFrameRequestResponse <NUVideoPlaybackFrameResult>
{
    struct __CVBuffer *_frame;	// 8 = 0x8
}

@property(retain) struct __CVBuffer *frame; // @synthesize frame=_frame;
- (void)dealloc;	// IMP=0x00000000001faf87

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) id <NURenderStatistics> statistics;
@property(readonly) Class superclass;

@end

