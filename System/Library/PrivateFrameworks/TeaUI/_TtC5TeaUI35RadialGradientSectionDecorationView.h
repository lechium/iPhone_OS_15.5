//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UICollectionReusableView.h>

#import <TeaUI/_TtP5TeaUI24GutterViewBoundsObserver_-Protocol.h>

@class MISSING_TYPE;

@interface _TtC5TeaUI35RadialGradientSectionDecorationView : UICollectionReusableView <_TtP5TeaUI24GutterViewBoundsObserver_>
{
    MISSING_TYPE *gradientView;	// 8 = 0x8
    MISSING_TYPE *gradientSize;	// 16 = 0x10
    MISSING_TYPE *overscrollPinPosition;	// 41 = 0x29
}

- (void).cxx_destruct;	// IMP=0x00000000001d39e0
- (void)gutterViewBoundsDidChange;	// IMP=0x00000000001d3980
- (void)applyLayoutAttributes:(id)arg1;	// IMP=0x00000000001d3920
- (void)layoutSubviews;	// IMP=0x00000000001d32d0
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000001d2fc0
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000001d2eb0
- (void)didMoveToSuperview;	// IMP=0x00000000001d2bc0
- (void)willMoveToSuperview:(id)arg1;	// IMP=0x00000000001d2b60

@end

