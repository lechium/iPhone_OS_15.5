//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSURL;

@interface MPCAssistantGeniusPlaybackQueue
{
    NSURL *_seedTrack;	// 80 = 0x50
}

+ (id)geniusQueueWithContextID:(id)arg1 seedTrack:(id)arg2;	// IMP=0x00000000000e1438
- (void).cxx_destruct;	// IMP=0x00000000000e1425
@property(readonly, nonatomic) NSURL *seedTrack; // @synthesize seedTrack=_seedTrack;
- (struct _MRSystemAppPlaybackQueue *)createRemotePlaybackQueue;	// IMP=0x00000000000e12fd
- (id)description;	// IMP=0x00000000000e1246
- (id)initWithContextID:(id)arg1 seedTrack:(id)arg2;	// IMP=0x00000000000e11c2

@end

