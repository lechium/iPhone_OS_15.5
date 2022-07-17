//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MPCFuture;

__attribute__((visibility("hidden")))
@interface _MPCMediaRemoteNullController
{
    MPCFuture *_playQueueIdentifiersFuture;	// 208 = 0xd0
    MPCFuture *_contentItemForIdentifierFuture;	// 216 = 0xd8
    MPCFuture *_contentItemArtworkForIdentifierFuture;	// 224 = 0xe0
}

+ (_Bool)_shouldRegisterForNotifications;	// IMP=0x00000000000dffd4
- (void).cxx_destruct;	// IMP=0x00000000000dff92
- (void)invalidateAllTokens;	// IMP=0x00000000000dff1a
- (id)contentItemArtworkForContentItemIdentifier:(id)arg1 artworkIdentifier:(id)arg2 size:(struct CGSize)arg3;	// IMP=0x00000000000dff05
- (long long)contentItemArtworkCacheStateForIdentifier:(id)arg1 size:(struct CGSize)arg2;	// IMP=0x00000000000dfefa
- (id)contentItemForIdentifier:(id)arg1;	// IMP=0x00000000000dfee5
- (long long)contentItemCacheStateForIdentifier:(id)arg1;	// IMP=0x00000000000dfeda
- (id)playingIdentifier;	// IMP=0x00000000000dfecc
- (long long)playingIdentifierCacheState;	// IMP=0x00000000000dfec1
- (id)playQueueIdentifiersForRequest:(void *)arg1;	// IMP=0x00000000000dfeac
- (id)playQueueIdentifiersForRange:(struct _MSVSignedRange)arg1;	// IMP=0x00000000000dfe97
- (long long)playQueueIdentifiersCacheStateForRange:(struct _MSVSignedRange)arg1;	// IMP=0x00000000000dfe8c
- (void)sendCommand:(unsigned int)arg1 options:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000000dfdf0
- (id)supportedCommands;	// IMP=0x00000000000dfde2
- (long long)supportedCommandsCacheState;	// IMP=0x00000000000dfdd7
- (id)playbackState;	// IMP=0x00000000000dfdc9
- (long long)playbackStateCacheState;	// IMP=0x00000000000dfdbe
- (id)_init;	// IMP=0x00000000000df934

@end
