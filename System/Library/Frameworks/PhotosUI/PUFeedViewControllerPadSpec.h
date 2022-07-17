//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface PUFeedViewControllerPadSpec
{
}

- (void)configureTextCell:(id)arg1 forSectionGroupHeaderWithText:(id)arg2 collectionViewType:(long long)arg3;	// IMP=0x000000000016446a
- (void)configureTextCell:(id)arg1 forSectionFooterWithDateText:(id)arg2 collectionViewType:(long long)arg3;	// IMP=0x0000000000164231
- (void)configureTextCell:(id)arg1 forSectionFooterWithActionText:(id)arg2 collectionViewType:(long long)arg3;	// IMP=0x0000000000163f1c
- (void)configureTextCell:(id)arg1 forSectionHeaderWithDescriptionPhrase:(id)arg2 streamDisclosureLabel:(id)arg3 actionText:(id)arg4 buttonType:(long long)arg5 collectionViewType:(long long)arg6 animated:(_Bool)arg7;	// IMP=0x00000000001639e0
- (id)emphasizedTextAttributesForCollectionViewType:(long long)arg1;	// IMP=0x0000000000163989
- (id)defaultTextAttributesForCollectionViewType:(long long)arg1;	// IMP=0x0000000000163932
- (double)collectionViewContentInset;	// IMP=0x0000000000163920
- (_Bool)shouldUseFullscreenLayout;	// IMP=0x0000000000163918
- (long long)promptStyle;	// IMP=0x000000000016390d
- (id)popoverFeedViewControllerSpec;	// IMP=0x00000000001638f4
- (id)photosPickerSpec;	// IMP=0x00000000001638db
- (id)gridSpec;	// IMP=0x00000000001638c2
- (_Bool)shouldShowInvitationsInPopover;	// IMP=0x00000000001638ba
- (_Bool)shouldHideBarsInLandscape;	// IMP=0x00000000001638b2
- (void)getReferenceMaximumLength:(double *)arg1 minimumNumberOfTilesToOmit:(long long *)arg2 forSectionType:(long long)arg3 collectionViewType:(long long)arg4;	// IMP=0x0000000000163855
- (void)configureSeparatorMetrics:(inout struct PUFeedSeparatorMetrics *)arg1 betweenSectionWithInfo:(id)arg2 andSectionWithInfo:(id)arg3 joined:(_Bool)arg4 collectionViewType:(long long)arg5;	// IMP=0x00000000001637dc
- (long long)configurationForSectionHeaderType:(long long)arg1 collectionViewType:(long long)arg2;	// IMP=0x000000000016372e
- (struct CGSize)thumbnailSizeForImageSize:(struct CGSize)arg1;	// IMP=0x00000000001636d9
- (_Bool)shouldUseAspectThumbnails;	// IMP=0x00000000001636d1
- (struct CGSize)thumbnailSize;	// IMP=0x00000000001636c0
- (void)configureCommentSeparatorMetrics:(inout struct PUFeedSeparatorMetrics *)arg1;	// IMP=0x0000000000163672
- (long long)largeNumberOfSubjectsForLikes;	// IMP=0x0000000000163667
- (struct CGSize)minimumVideoTileSize;	// IMP=0x0000000000163656
- (void)configureFeedCollectionViewLayout:(id)arg1 forCollectionViewType:(long long)arg2 collectionViewSize:(struct CGSize)arg3;	// IMP=0x00000000001635d0
- (_Bool)shouldShowCommentBadgesInCollectionViewType:(long long)arg1;	// IMP=0x00000000001635c3

@end
