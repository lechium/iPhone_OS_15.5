//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

#import <FocusUI/FCUIContentSizeCategoryAdjusting-Protocol.h>
#import <FocusUI/MTVisualStylingRequiring-Protocol.h>
#import <FocusUI/UIGestureRecognizerDelegate-Protocol.h>

@class NSArray, NSMutableArray, NSMutableDictionary, NSString, UIAction, UIGestureRecognizer, UISelectionFeedbackGenerator, _FCUIActivityControlMenuFooterView;

@interface FCUIActivityControlMenuView : UIView <UIGestureRecognizerDelegate, FCUIContentSizeCategoryAdjusting, MTVisualStylingRequiring>
{
    NSArray *_menuItemViews;	// 8 = 0x8
    NSMutableArray *_outgoingMenuItemViews;	// 16 = 0x10
    NSArray *_purgeableMenuItemViews;	// 24 = 0x18
    _FCUIActivityControlMenuFooterView *_footerView;	// 32 = 0x20
    UISelectionFeedbackGenerator *_feedbackGenerator;	// 40 = 0x28
    NSMutableDictionary *_categoriesToVisualStylingProviders;	// 48 = 0x30
    _Bool _adjustsFontForContentSizeCategory;	// 56 = 0x38
    UIGestureRecognizer *_pressGestureRecognizer;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x000000000001cdd8
@property(readonly, nonatomic) UIGestureRecognizer *pressGestureRecognizer; // @synthesize pressGestureRecognizer=_pressGestureRecognizer;
@property(nonatomic) _Bool adjustsFontForContentSizeCategory; // @synthesize adjustsFontForContentSizeCategory=_adjustsFontForContentSizeCategory;
- (void)_handlePressGesture:(id)arg1;	// IMP=0x000000000001cc68
- (_Bool)_toggleHighlightForMenuElement:(id)arg1;	// IMP=0x000000000001ca84
- (void)_visualStylingProvider:(id)arg1 didChangeForCategory:(long long)arg2 outgoingProvider:(id)arg3;	// IMP=0x000000000001c786
- (void)_updateVisualStylingOfView:(id)arg1 style:(long long)arg2 visualStylingProvider:(id)arg3 outgoingProvider:(id)arg4;	// IMP=0x000000000001c703
- (void)_configureFooterViewIfNecessary;	// IMP=0x000000000001c47c
- (_Bool)adjustForContentSizeCategoryChange;	// IMP=0x000000000001c2dd
- (void)setVisualStylingProvider:(id)arg1 forCategory:(long long)arg2;	// IMP=0x000000000001bfa5
@property(readonly, copy, nonatomic) NSArray *requiredVisualStyleCategories;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;	// IMP=0x000000000001bc7a
- (void)_setContinuousCornerRadius:(double)arg1;	// IMP=0x000000000001bc5d
- (double)_continuousCornerRadius;	// IMP=0x000000000001bc40
- (void)layoutSubviews;	// IMP=0x000000000001b607
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x000000000001b3ee
@property(copy, nonatomic) UIAction *footerAction;
@property(copy, nonatomic) NSString *menuAlternativeDescription;
@property(readonly, copy, nonatomic) NSArray *menuItemElements;
@property(copy, nonatomic) NSArray *menuItemActions;
- (id)_newMenuItemView;	// IMP=0x000000000001a979
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000001a667

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(copy, nonatomic) NSString *preferredContentSizeCategory;
@property(readonly) Class superclass;

@end

