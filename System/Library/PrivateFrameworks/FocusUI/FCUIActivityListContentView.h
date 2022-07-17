//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

#import <FocusUI/FCUIContentSizeCategoryAdjusting-Protocol.h>

@class NSArray, NSMutableArray, NSString;
@protocol FCUIActivityDisplaying;

@interface FCUIActivityListContentView : UIView <FCUIContentSizeCategoryAdjusting>
{
    NSMutableArray *_outgoingActivityViews;	// 8 = 0x8
    NSArray *_purgeableActivityViews;	// 16 = 0x10
    _Bool _headerViewValid;	// 24 = 0x18
    _Bool _footerViewValid;	// 25 = 0x19
    _Bool _adjustsFontForContentSizeCategory;	// 26 = 0x1a
    _Bool _footerPinnedToBottom;	// 27 = 0x1b
    _Bool _contentDetached;	// 28 = 0x1c
    UIView *_headerView;	// 32 = 0x20
    UIView *_footerView;	// 40 = 0x28
    NSArray *_activityViews;	// 48 = 0x30
    UIView<FCUIActivityDisplaying> *_compactActivityView;	// 56 = 0x38
    struct CGSize _collapsedSize;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x0000000000017c18
@property(nonatomic, getter=isContentDetached) _Bool contentDetached; // @synthesize contentDetached=_contentDetached;
@property(nonatomic) struct CGSize collapsedSize; // @synthesize collapsedSize=_collapsedSize;
@property(retain, nonatomic) UIView<FCUIActivityDisplaying> *compactActivityView; // @synthesize compactActivityView=_compactActivityView;
@property(copy, nonatomic) NSArray *activityViews; // @synthesize activityViews=_activityViews;
@property(nonatomic, getter=isFooterPinnedToBottom) _Bool footerPinnedToBottom; // @synthesize footerPinnedToBottom=_footerPinnedToBottom;
@property(retain, nonatomic) UIView *footerView; // @synthesize footerView=_footerView;
@property(retain, nonatomic) UIView *headerView; // @synthesize headerView=_headerView;
@property(nonatomic) _Bool adjustsFontForContentSizeCategory; // @synthesize adjustsFontForContentSizeCategory=_adjustsFontForContentSizeCategory;
- (id)_contentSizeCategoryAdjustingViews;	// IMP=0x0000000000017ae3
- (struct CGSize)_sizeThatFits:(struct CGSize)arg1 collapsedToPill:(_Bool)arg2 includingFooter:(_Bool)arg3 forceMeasurement:(_Bool)arg4;	// IMP=0x000000000001773b
- (_Bool)adjustForContentSizeCategoryChange;	// IMP=0x00000000000175b0
- (void)layoutSubviews;	// IMP=0x00000000000169fc
- (struct CGSize)intrinsicContentSize;	// IMP=0x00000000000169ca
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x00000000000169ab
- (id)subviewFramesInBounds:(struct CGRect)arg1;	// IMP=0x0000000000015f86
- (struct CGSize)sizeThatFitsCollapsedToPill:(struct CGSize)arg1;	// IMP=0x0000000000015f64

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(copy, nonatomic) NSString *preferredContentSizeCategory;
@property(readonly) Class superclass;

@end
