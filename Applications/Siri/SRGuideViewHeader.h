//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UICollectionReusableView.h>

@class NSString, SiriUISnippetViewController, UILabel, UIView;

@interface SRGuideViewHeader : UICollectionReusableView
{
    UIView *_contentView;	// 8 = 0x8
    UILabel *_headerLabel;	// 16 = 0x10
    NSString *_title;	// 24 = 0x18
    struct UIEdgeInsets _edgeInsets;	// 32 = 0x20
}

+ (id)_font;	// IMP=0x00200000000886f1
+ (struct UIEdgeInsets)_edgeInsets;	// IMP=0x0010000000088692
+ (id)elementKind;	// IMP=0x001000000008867e
+ (id)reuseIdentifier;	// IMP=0x0010000000088628
+ (double)firstLineBaselineOffsetFromTop;	// IMP=0x000000000008855a
+ (struct CGSize)sizeThatFits:(struct CGSize)arg1 text:(id)arg2;	// IMP=0x00100000000884be
+ (struct CGSize)sizeThatFits:(struct CGSize)arg1 text:(id)arg2 edgeInsets:(struct UIEdgeInsets)arg3;	// IMP=0x001000000008834d
+ (double)defaultHeight;	// IMP=0x00100000000881d4
- (void).cxx_destruct;	// IMP=0x0020000000088759
@property(nonatomic) struct UIEdgeInsets edgeInsets; // @synthesize edgeInsets=_edgeInsets;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void)layoutSubviews;	// IMP=0x001000000008803b
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0010000000087dc3

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) __weak SiriUISnippetViewController *snippetViewController;
@property(readonly) Class superclass;

@end

