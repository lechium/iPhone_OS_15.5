//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSDictionary, PGMusicCurationRecentlyUsedSongs;

@interface PGMusicCuratorContext : NSObject
{
    MISSING_TYPE *configuration;	// 8 = 0x8
    MISSING_TYPE *blocklistConfiguration;	// 376 = 0x178
    MISSING_TYPE *cache;	// 392 = 0x188
    MISSING_TYPE *photoLibrary;	// 400 = 0x190
    MISSING_TYPE *musicBag;	// 408 = 0x198
    MISSING_TYPE *adamIDsWithNegativeUserFeedback;	// 416 = 0x1a0
    MISSING_TYPE *allowExplicitMusicContent;	// 424 = 0x1a8
    MISSING_TYPE *useOnlyMusicForTopicInTopPickSuggestions;	// 425 = 0x1a9
    MISSING_TYPE *allowChillMixElection;	// 426 = 0x1aa
    MISSING_TYPE *allowGetUpMixElection;	// 427 = 0x1ab
    MISSING_TYPE *refreshSongMetadata;	// 428 = 0x1ac
    MISSING_TYPE *forceShareableInBestSuggestions;	// 429 = 0x1ad
    MISSING_TYPE *recentlyUsedSongs;	// 432 = 0x1b0
    MISSING_TYPE *musicCurationOverrideDictionary;	// 440 = 0x1b8
    MISSING_TYPE *musicForTopicUseTopicOnly;	// 448 = 0x1c0
    MISSING_TYPE *$__lazy_storage_$_keywordsByAdamID;	// 496 = 0x1f0
}

+ (id)contextWithPhotoLibrary:(id)arg1 adamIDsWithNegativeUserFeedback:(id)arg2 allowExplicitMusicContent:(id)arg3 cache:(id)arg4 musicBag:(id)arg5 recentlyUsedSongs:(id)arg6 error:(id *)arg7;	// IMP=0x00000000000c5d00
- (void).cxx_destruct;	// IMP=0x00000000000c5f70
- (id)init;	// IMP=0x00000000000c5f10
@property(nonatomic, copy) NSDictionary *musicCurationOverrideDictionary;
@property(nonatomic, readonly) PGMusicCurationRecentlyUsedSongs *recentlyUsedSongs; // @synthesize recentlyUsedSongs;
@property(nonatomic) _Bool forceShareableInBestSuggestions; // @synthesize forceShareableInBestSuggestions;
@property(nonatomic) _Bool refreshSongMetadata; // @synthesize refreshSongMetadata;
@property(nonatomic) _Bool allowGetUpMixElection; // @synthesize allowGetUpMixElection;
@property(nonatomic) _Bool allowChillMixElection; // @synthesize allowChillMixElection;
@property(nonatomic) _Bool useOnlyMusicForTopicInTopPickSuggestions; // @synthesize useOnlyMusicForTopicInTopPickSuggestions;

@end

