//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <WebCore/AVPlayerItemLegibleOutputPushDelegate-Protocol.h>
#import <WebCore/AVPlayerItemMetadataCollectorPushDelegate-Protocol.h>
#import <WebCore/AVPlayerItemMetadataOutputPushDelegate-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface WebCoreAVFMovieObserver : NSObject <AVPlayerItemLegibleOutputPushDelegate, AVPlayerItemMetadataOutputPushDelegate, AVPlayerItemMetadataCollectorPushDelegate>
{
    struct WeakPtr<WebCore::MediaPlayerPrivateAVFoundationObjC, WTF::EmptyCounter> m_player;	// 8 = 0x8
    int m_delayCallbacks;	// 16 = 0x10
    struct RefPtr<WTF::WorkQueue, WTF::RawPtrTraits<WTF::WorkQueue>, WTF::DefaultRefDerefTraits<WTF::WorkQueue>> m_backgroundQueue;	// 24 = 0x18
}

- (id).cxx_construct;	// IMP=0x000000000014fb60
- (void).cxx_destruct;	// IMP=0x000000000014fae0
- (void)metadataCollector:(id)arg1 didCollectDateRangeMetadataGroups:(id)arg2 indexesOfNewGroups:(id)arg3 indexesOfModifiedGroups:(id)arg4;	// IMP=0x000000000014f900
- (void)metadataOutput:(id)arg1 didOutputTimedMetadataGroups:(id)arg2 fromPlayerItemTrack:(id)arg3;	// IMP=0x000000000014f720
- (void)outputSequenceWasFlushed:(id)arg1;	// IMP=0x000000000014f680
- (void)legibleOutput:(id)arg1 didOutputAttributedStrings:(id)arg2 nativeSampleBuffers:(id)arg3 forItemTime:(CDStruct_198678f7)arg4;	// IMP=0x000000000014f560
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(int)arg4;	// IMP=0x000000000014f270
- (void)chapterMetadataDidChange:(id)arg1;	// IMP=0x000000000014f1d0
- (void)didEnd:(id)arg1;	// IMP=0x000000000014f130
- (void)metadataLoaded;	// IMP=0x000000000014f090
- (void)disconnect;	// IMP=0x000000000014f060
- (id)initWithPlayer:(void *)arg1;	// IMP=0x000000000014ef60

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

