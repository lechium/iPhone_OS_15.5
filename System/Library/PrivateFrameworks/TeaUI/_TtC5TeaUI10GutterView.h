//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIScrollView.h>

@class MISSING_TYPE;

@interface _TtC5TeaUI10GutterView : UIScrollView
{
    MISSING_TYPE *contentView;	// 8 = 0x8
    MISSING_TYPE *childScrollView;	// 16 = 0x10
    MISSING_TYPE *gutters;	// 24 = 0x18
    MISSING_TYPE *observations;	// 40 = 0x28
    MISSING_TYPE *boundsObservers;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000000030cba0
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000030cb40
@property(nonatomic) struct CGPoint contentOffset;
- (void)layoutSubviews;	// IMP=0x000000000030c7d0
- (void)layoutMarginsDidChange;	// IMP=0x000000000030c2e0
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000030c230

@end
