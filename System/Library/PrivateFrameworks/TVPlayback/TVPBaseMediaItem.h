//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TVPlayback/TVPMediaItem-Protocol.h>

@class NSMutableDictionary, NSString;

@interface TVPBaseMediaItem : NSObject <TVPMediaItem>
{
    NSMutableDictionary *_metadataDictionary;	// 8 = 0x8
    NSMutableDictionary *_transactionDictionary;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000006294c
- (void)_postMetadataDidChangeNotificationWithMetadataProperties:(id)arg1;	// IMP=0x000000000006285b
- (void)_postMetadataWillChangeNotificationWithMetadataProperties:(id)arg1;	// IMP=0x000000000006276a
- (void)_setMetadata:(id)arg1 forProperty:(id)arg2 postNotification:(_Bool)arg3;	// IMP=0x00000000000625ca
@property(readonly, copy) NSString *description;
- (id)reportingDelegate;	// IMP=0x0000000000062509
- (void)updatePlayCountForElapsedTime:(double)arg1 duration:(double)arg2;	// IMP=0x0000000000062503
- (void)updateBookmarkWithSuggestedTime:(double)arg1 forElapsedTime:(double)arg2 duration:(double)arg3 playbackOfMediaItemIsEnding:(_Bool)arg4;	// IMP=0x00000000000624a6
- (void)removeMediaItemMetadataForProperty:(id)arg1;	// IMP=0x0000000000062411
- (void)setMediaItemMetadata:(id)arg1 forProperty:(id)arg2;	// IMP=0x0000000000062386
- (void)performMediaItemMetadataTransactionWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000006226d
- (id)mediaItemMetadataForProperty:(id)arg1;	// IMP=0x0000000000062257
- (_Bool)hasTrait:(id)arg1;	// IMP=0x000000000006224f
- (_Bool)isEqualToMediaItem:(id)arg1;	// IMP=0x0000000000062243
- (id)mediaItemURL;	// IMP=0x000000000006223b
- (id)init;	// IMP=0x000000000006214f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
