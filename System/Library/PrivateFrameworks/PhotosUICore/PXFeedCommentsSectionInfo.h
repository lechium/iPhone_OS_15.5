//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface PXFeedCommentsSectionInfo
{
    _Bool __hasLikes;	// 8 = 0x8
}

@property(nonatomic, setter=_setHasLikes:) _Bool _hasLikes; // @synthesize _hasLikes=__hasLikes;
- (_Bool)isMine;	// IMP=0x000000000007df5e
- (unsigned long long)assetsCount;	// IMP=0x000000000007de49
- (id)assets;	// IMP=0x000000000007dda1
- (long long)indexOfItemWithComment:(id)arg1;	// IMP=0x000000000007dc74
- (long long)indexOfItemWithAsset:(id)arg1;	// IMP=0x000000000007dc0a
- (_Bool)containsAsset:(id)arg1;	// IMP=0x000000000007daba
- (void)getCommentCount:(out unsigned long long *)arg1 likeCount:(out unsigned long long *)arg2;	// IMP=0x000000000007d8c6
- (id)likesForItemAtIndex:(long long)arg1;	// IMP=0x000000000007d781
- (id)commentTextForItemAtIndex:(long long)arg1;	// IMP=0x000000000007d670
- (id)commentForItemAtIndex:(long long)arg1;	// IMP=0x000000000007d4fa
- (id)assetsForItemAtIndex:(long long)arg1 maximumCount:(long long)arg2;	// IMP=0x000000000007d3ac
- (_Bool)hasMultipleAssetsForItemAtIndex:(long long)arg1;	// IMP=0x000000000007d292
- (id)assetForItemAtIndex:(long long)arg1;	// IMP=0x000000000007d14d
- (long long)typeForItemAtIndex:(long long)arg1;	// IMP=0x000000000007d122
- (void)updateFromCloudFeedEntry;	// IMP=0x000000000007cede
- (id)cloudFeedCommentsEntry;	// IMP=0x000000000007ce22
- (long long)sectionType;	// IMP=0x000000000007ce17

@end

