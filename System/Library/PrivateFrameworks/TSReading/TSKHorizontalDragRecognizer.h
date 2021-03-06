//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIGestureRecognizer.h>

@class UIScrollView;

@interface TSKHorizontalDragRecognizer : UIGestureRecognizer
{
    struct CGPoint mStartPoint;	// 8 = 0x8
    UIScrollView *mContainingScrollView;	// 24 = 0x18
}

@property(nonatomic) UIScrollView *containingScrollView; // @synthesize containingScrollView=mContainingScrollView;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000095a9c
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000095a46
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;	// IMP=0x000000000009591a
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000095885
- (_Bool)canBePreventedByGestureRecognizer:(id)arg1;	// IMP=0x00000000000957e4

@end

