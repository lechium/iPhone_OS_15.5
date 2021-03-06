//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MapsUI/MUPlaceCollectionPullQuotePlatterViewDelegate-Protocol.h>
#import <MapsUI/MUPlaceSectionControlling-Protocol.h>

@class MKPlaceReviewAvatarGenerator, MKUGCCallToActionViewAppearance, MUPlaceRatingReviewTitleBuilder, MUPlaceSectionFooterViewModel, MUPlaceSectionHeaderViewModel, MUPlaceSectionView, MUScrollableStackView, NSMutableArray, NSString, UIView, UIViewController;
@protocol MUInfoCardAnalyticsDelegate, MURatingsAndReviewsSectionControllerDelegate;

__attribute__((visibility("hidden")))
@interface MURatingsAndReviewsSectionController <MUPlaceCollectionPullQuotePlatterViewDelegate, MUPlaceSectionControlling>
{
    MUScrollableStackView *_contentStackView;	// 8 = 0x8
    MUPlaceSectionView *_sectionView;	// 16 = 0x10
    MKPlaceReviewAvatarGenerator *_avatarGenerator;	// 24 = 0x18
    NSMutableArray *_focusItems;	// 32 = 0x20
    MUPlaceRatingReviewTitleBuilder *_titleBuilder;	// 40 = 0x28
    MUPlaceSectionHeaderViewModel *_sectionHeaderViewModel;	// 48 = 0x30
    id <MURatingsAndReviewsSectionControllerDelegate> _actionDelegate;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0000000000004f64
@property(nonatomic) __weak id <MURatingsAndReviewsSectionControllerDelegate> actionDelegate; // @synthesize actionDelegate=_actionDelegate;
- (int)analyticsModuleType;	// IMP=0x0000000000004f2c
- (id)infoCardChildPossibleActions;	// IMP=0x0000000000004dc2
- (void)pullQuoteViewDidTapMore:(id)arg1;	// IMP=0x0000000000004ceb
- (void)_sectionHeaderAccessoryTapped;	// IMP=0x0000000000004c85
@property(readonly, nonatomic) UIView *sectionView;
@property(readonly, nonatomic) MUPlaceSectionHeaderViewModel *sectionHeaderViewModel; // @synthesize sectionHeaderViewModel=_sectionHeaderViewModel;
- (void)_addHorizontalTileToContentStackView:(id)arg1 items:(id)arg2;	// IMP=0x00000000000049f1
- (void)_addPlaceCollectionPullQuotesIfNeeded:(id)arg1;	// IMP=0x00000000000045ea
- (void)_addRatingSnippets:(id)arg1 withCellItems:(id)arg2;	// IMP=0x00000000000040db
- (void)_addUserReviewCategoryTilesIfNeeded:(id)arg1;	// IMP=0x0000000000003d36
- (void)_addAppleRatingsCategoryTileIfNeeded:(id)arg1;	// IMP=0x000000000000395b
- (void)_setupRatingRows;	// IMP=0x000000000000336a
- (id)initWithMapItem:(id)arg1;	// IMP=0x0000000000003254

// Remaining properties
@property(nonatomic, getter=isActive) _Bool active;
@property(nonatomic) __weak id <MUInfoCardAnalyticsDelegate> analyticsDelegate;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) _Bool hasContent;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) MUPlaceSectionFooterViewModel *sectionFooterViewModel;
@property(readonly, nonatomic) UIViewController *sectionViewController;
@property(retain, nonatomic) MKUGCCallToActionViewAppearance *submissionStatus;
@property(readonly) Class superclass;

@end

