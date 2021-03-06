//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/PXChangeObserver-Protocol.h>
#import <PhotosUICore/PXGNamedImageSource-Protocol.h>
#import <PhotosUICore/PXGScrollLayoutDelegate-Protocol.h>
#import <PhotosUICore/PXGStringSource-Protocol.h>
#import <PhotosUICore/PXGSublayoutProvider-Protocol.h>
#import <PhotosUICore/PXStoryScrollContentLayoutDelegate-Protocol.h>

@class NSString, NSTimer, PXGScrollLayout, PXNumberAnimator, PXStoryChromeButtonConfiguration, PXStoryRelatedLayoutGenerator, PXStoryRelatedOverlayItemDecorationSource, PXStoryScrollContentLayout, PXStoryViewModel;

@interface PXStoryRelatedOverlayLayout <PXGStringSource, PXGNamedImageSource, PXGSublayoutProvider, PXChangeObserver, PXStoryScrollContentLayoutDelegate, PXGScrollLayoutDelegate>
{
    CDStruct_af00bf4e _updateFlags;	// 8 = 0x8
    _Bool _shouldIgnoreContentScrollOffsetChanges;	// 32 = 0x20
    unsigned int _titleSpriteIndex;	// 36 = 0x24
    unsigned short _titleVersion;	// 40 = 0x28
    unsigned int _countDownSpriteIndex;	// 44 = 0x2c
    unsigned int _countDownDecorationSpriteIndex;	// 48 = 0x30
    unsigned int _navigationButtonSpriteIndex;	// 52 = 0x34
    unsigned int _navigationHitTestVisabilitySpriteIndex;	// 56 = 0x38
    struct _NSRange _relatedSublayoutIndexRange;	// 64 = 0x40
    long long _scrollSublayoutIndex;	// 80 = 0x50
    long long _capacity;	// 88 = 0x58
    struct CGRect *_relatedDefaultFrames;	// 96 = 0x60
    _Bool _isRelatedOverlayScrolledIntoView;	// 104 = 0x68
    _Bool _shouldCountDown;	// 105 = 0x69
    _Bool _wantsNavigationButton;	// 106 = 0x6a
    _Bool _wasAnimatingScrollOffsetForNavigation;	// 107 = 0x6b
    PXStoryViewModel *_viewModel;	// 112 = 0x70
    struct _PXGSpriteIndexRange _relatedSelectionSpriteIndexRange;	// 120 = 0x78
    PXStoryRelatedLayoutGenerator *_layoutGenerator;	// 128 = 0x80
    PXStoryScrollContentLayout *_scrollContentLayout;	// 136 = 0x88
    PXGScrollLayout *_scrollLayout;	// 144 = 0x90
    PXNumberAnimator *_countDownAlphaAnimator;	// 152 = 0x98
    NSTimer *_countDownTimer;	// 160 = 0xa0
    long long _countDownValue;	// 168 = 0xa8
    long long _selectedIndex;	// 176 = 0xb0
    PXNumberAnimator *_navigationButtonAlphaAnimator;	// 184 = 0xb8
    long long _navigationButtonDirection;	// 192 = 0xc0
    PXStoryChromeButtonConfiguration *_navigationButtonConfiguration;	// 200 = 0xc8
    long long _navigationButtonVersion;	// 208 = 0xd0
    PXNumberAnimator *_navigationButtonScrollAnimator;	// 216 = 0xd8
    double _navigationButtonScrollAnimatorTarget;	// 224 = 0xe0
    PXStoryRelatedOverlayItemDecorationSource *_decorationSource;	// 232 = 0xe8
}

- (void).cxx_destruct;	// IMP=0x00000000009b6e7b
@property(readonly, nonatomic) PXStoryRelatedOverlayItemDecorationSource *decorationSource; // @synthesize decorationSource=_decorationSource;
@property(nonatomic) double navigationButtonScrollAnimatorTarget; // @synthesize navigationButtonScrollAnimatorTarget=_navigationButtonScrollAnimatorTarget;
@property(readonly, nonatomic) PXNumberAnimator *navigationButtonScrollAnimator; // @synthesize navigationButtonScrollAnimator=_navigationButtonScrollAnimator;
@property(nonatomic) _Bool wasAnimatingScrollOffsetForNavigation; // @synthesize wasAnimatingScrollOffsetForNavigation=_wasAnimatingScrollOffsetForNavigation;
@property(nonatomic) long long navigationButtonVersion; // @synthesize navigationButtonVersion=_navigationButtonVersion;
@property(copy, nonatomic) PXStoryChromeButtonConfiguration *navigationButtonConfiguration; // @synthesize navigationButtonConfiguration=_navigationButtonConfiguration;
@property(nonatomic) long long navigationButtonDirection; // @synthesize navigationButtonDirection=_navigationButtonDirection;
@property(nonatomic) _Bool wantsNavigationButton; // @synthesize wantsNavigationButton=_wantsNavigationButton;
@property(readonly, nonatomic) PXNumberAnimator *navigationButtonAlphaAnimator; // @synthesize navigationButtonAlphaAnimator=_navigationButtonAlphaAnimator;
@property(nonatomic) long long selectedIndex; // @synthesize selectedIndex=_selectedIndex;
@property(nonatomic) long long countDownValue; // @synthesize countDownValue=_countDownValue;
@property(retain, nonatomic) NSTimer *countDownTimer; // @synthesize countDownTimer=_countDownTimer;
@property(nonatomic) _Bool shouldCountDown; // @synthesize shouldCountDown=_shouldCountDown;
@property(nonatomic) _Bool isRelatedOverlayScrolledIntoView; // @synthesize isRelatedOverlayScrolledIntoView=_isRelatedOverlayScrolledIntoView;
@property(readonly, nonatomic) PXNumberAnimator *countDownAlphaAnimator; // @synthesize countDownAlphaAnimator=_countDownAlphaAnimator;
@property(readonly, nonatomic) PXGScrollLayout *scrollLayout; // @synthesize scrollLayout=_scrollLayout;
@property(readonly, nonatomic) PXStoryScrollContentLayout *scrollContentLayout; // @synthesize scrollContentLayout=_scrollContentLayout;
@property(readonly, nonatomic) PXStoryRelatedLayoutGenerator *layoutGenerator; // @synthesize layoutGenerator=_layoutGenerator;
@property(readonly, nonatomic) struct _PXGSpriteIndexRange relatedSelectionSpriteIndexRange; // @synthesize relatedSelectionSpriteIndexRange=_relatedSelectionSpriteIndexRange;
@property(readonly, nonatomic) PXStoryViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (_Bool)axGroup:(id)arg1 didRequestToPerformAction:(long long)arg2 userInfo:(id)arg3;	// IMP=0x00000000009b6bd1
- (id)preferredFocusLayouts;	// IMP=0x00000000009b6b4b
- (unsigned int)axSpriteIndexClosestToSpriteIndex:(unsigned int)arg1 inDirection:(unsigned long long)arg2;	// IMP=0x00000000009b6b39
- (id)axVisibleSpriteIndexes;	// IMP=0x00000000009b6b27
- (id)axSpriteIndexes;	// IMP=0x00000000009b6aca
- (void)scrollLayoutWillEndScrolling:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;	// IMP=0x00000000009b6982
- (void)scrollLayoutWillBeginScrolling:(id)arg1;	// IMP=0x00000000009b693e
- (void)scrollContentLayoutScrollOffsetDidChange:(id)arg1;	// IMP=0x00000000009b691d
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;	// IMP=0x00000000009b6740
- (id)_firstRelatedSublayout;	// IMP=0x00000000009b66ec
- (long long)_sublayoutIndexForFirstRelated;	// IMP=0x00000000009b66bd
- (long long)_sublayoutIndexForRelatedIndex:(long long)arg1;	// IMP=0x00000000009b6615
- (long long)_relatedIndexForSublayoutIndex:(long long)arg1;	// IMP=0x00000000009b65e4
- (id)layout:(id)arg1 createSublayoutAtIndex:(long long)arg2;	// IMP=0x00000000009b6459
- (struct CGSize)layout:(id)arg1 estimatedContentSizeForSublayoutAtIndex:(long long)arg2 referenceSize:(struct CGSize)arg3;	// IMP=0x00000000009b6355
- (id)viewUserDataForSpriteAtIndex:(unsigned int)arg1 inLayout:(id)arg2;	// IMP=0x00000000009b628f
- (Class)viewClassForSpriteAtIndex:(unsigned int)arg1 inLayout:(id)arg2;	// IMP=0x00000000009b61cd
- (id)imageConfigurationAtIndex:(unsigned int)arg1 inLayout:(id)arg2;	// IMP=0x00000000009b60c2
- (id)stringAttributesAtIndex:(unsigned int)arg1 inLayout:(id)arg2;	// IMP=0x00000000009b5fb7
- (id)stringAtIndex:(unsigned int)arg1 inLayout:(id)arg2;	// IMP=0x00000000009b5e48
- (long long)verticalAlignmentForStringAtIndex:(unsigned int)arg1 inLayout:(id)arg2;	// IMP=0x00000000009b5d8f
- (id)attributedStringForSpriteAtIndex:(unsigned int)arg1 inLayout:(id)arg2;	// IMP=0x00000000009b5c6f
- (id)axLocalizedLabel;	// IMP=0x00000000009b5c57
- (void)_updateAXGroupRole;	// IMP=0x00000000009b5c51
- (void)_invalidateAXGroupRole;	// IMP=0x00000000009b5b5d
- (void)_updateContent;	// IMP=0x00000000009b59a9
- (_Bool)_needsRTLFlip;	// IMP=0x00000000009b59a1
- (void)_invalidateTitleContent;	// IMP=0x00000000009b5984
- (void)_invalidateContent;	// IMP=0x00000000009b587d
- (void)_updateNavigationButton;	// IMP=0x00000000009b574e
- (void)_invalidateNavigationButton;	// IMP=0x00000000009b565a
- (void)_updateShouldCountDown;	// IMP=0x00000000009b55a3
- (void)_invalidateShouldCountDown;	// IMP=0x00000000009b549c
- (void)_arrangeSublayoutAtIndex:(long long)arg1 frame:(struct CGRect)arg2 zIndex:(long long *)arg3;	// IMP=0x00000000009b53d2
- (void)_updateSublayoutPositions;	// IMP=0x00000000009b4d80
- (void)_invalidateSublayoutPositions;	// IMP=0x00000000009b4c79
- (void)_updateScrollSpritesAndSublayouts;	// IMP=0x00000000009b4b16
- (void)_invalidateScrollSpritesAndSublayouts;	// IMP=0x00000000009b4a22
- (void)_updateRelatedSpritesAndSublayouts;	// IMP=0x00000000009b48d8
- (void)_invalidateRelatedSpritesAndSublayouts;	// IMP=0x00000000009b47e4
- (void)update;	// IMP=0x00000000009b41c9
- (long long)relatedCardOverlayStartIndex;	// IMP=0x00000000009b41b9
- (void)_autoplayUpNext;	// IMP=0x00000000009b4175
- (void)_setFirstRelatedLayoutCountdownValue:(long long)arg1;	// IMP=0x00000000009b416f
- (void)_considerChangingToSelectedRelatedMemory;	// IMP=0x00000000009b406e
- (void)_createRelatedAnimationIfNeeded;	// IMP=0x00000000009b3f04
- (_Bool)allowsDanglingUpdatesAssertions;	// IMP=0x00000000009b3efc
- (void)showOrHideFullRelated:(_Bool)arg1;	// IMP=0x00000000009b39da
- (void)_handleNavigationButton:(id)arg1;	// IMP=0x00000000009b39a3
- (void)_handleCountDownTimer:(id)arg1;	// IMP=0x00000000009b3794
- (void)_selectRelatedMemoryAtIndex:(long long)arg1;	// IMP=0x00000000009b3352
- (id)hitTestResultForSpriteIndex:(unsigned int)arg1;	// IMP=0x00000000009b324a
- (void)alphaDidChange;	// IMP=0x00000000009b3209
- (void)screenScaleDidChange;	// IMP=0x00000000009b31c8
- (void)referenceDepthDidChange;	// IMP=0x00000000009b3187
- (void)referenceSizeDidChange;	// IMP=0x00000000009b3117
- (void)dealloc;	// IMP=0x00000000009b30be
- (id)initWithViewModel:(id)arg1;	// IMP=0x00000000009b2dfd
- (id)init;	// IMP=0x00000000009b2d83

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

