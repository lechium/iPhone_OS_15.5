//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class UIScrollView;

__attribute__((visibility("hidden")))
@interface OverflowView : UIView
{
    UIScrollView *_scrollView;	// 8 = 0x8
    struct CGSize _lastLayoutSize;	// 16 = 0x10
    UIView *_contentView;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0020000000868d00
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
- (void)_addContentView:(id)arg1;	// IMP=0x0010000000868c49
- (void)resetContentOffset;	// IMP=0x0010000000868c1c
- (void)willMoveToWindow:(id)arg1;	// IMP=0x0010000000868b81
- (void)layoutSubviews;	// IMP=0x0010000000868abb
- (id)_initialConstraintsForContentView:(id)arg1;	// IMP=0x00100000008686d7
- (id)_initialScrollViewConstraints;	// IMP=0x00100000008683e9
- (id)initWithContentView:(id)arg1;	// IMP=0x00100000008682a5

@end
