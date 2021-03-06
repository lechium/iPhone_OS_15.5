//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class NSArray, NSLayoutConstraint;

__attribute__((visibility("hidden")))
@interface PUCropHandleView : UIView
{
    _Bool _lineWeightHeavy;	// 8 = 0x8
    _Bool _overlayHidden;	// 9 = 0x9
    unsigned long long _handle;	// 16 = 0x10
    NSArray *__lineViews;	// 24 = 0x18
    NSArray *__overlayViews;	// 32 = 0x20
    UIView *__layoutReferenceView;	// 40 = 0x28
    NSLayoutConstraint *__lineWidthConstraint;	// 48 = 0x30
}

+ (id)allHandles;	// IMP=0x00000000000ee694
- (void).cxx_destruct;	// IMP=0x00000000000ee641
@property(retain, nonatomic, setter=_setLineWidthConstraint:) NSLayoutConstraint *_lineWidthConstraint; // @synthesize _lineWidthConstraint=__lineWidthConstraint;
@property(retain, nonatomic, setter=_setLayoutReferenceView:) UIView *_layoutReferenceView; // @synthesize _layoutReferenceView=__layoutReferenceView;
@property(retain, nonatomic, setter=_setOverlayViews:) NSArray *_overlayViews; // @synthesize _overlayViews=__overlayViews;
@property(retain, nonatomic, setter=_setLineViews:) NSArray *_lineViews; // @synthesize _lineViews=__lineViews;
@property(nonatomic, getter=isOverlayHidden) _Bool overlayHidden; // @synthesize overlayHidden=_overlayHidden;
@property(nonatomic, getter=isLineWeightHeavy) _Bool lineWeightHeavy; // @synthesize lineWeightHeavy=_lineWeightHeavy;
@property(readonly, nonatomic) unsigned long long handle; // @synthesize handle=_handle;
@property(readonly, nonatomic) NSArray *adjacentHandles;
@property(readonly, nonatomic) unsigned long long oppositeHandle;
@property(readonly, nonatomic, getter=isLateral) _Bool lateral;
@property(readonly, nonatomic, getter=isCorner) _Bool corner;
@property(readonly, nonatomic, getter=isBottom) _Bool bottom;
@property(readonly, nonatomic, getter=isRight) _Bool right;
@property(readonly, nonatomic, getter=isLeft) _Bool left;
@property(readonly, nonatomic, getter=isTop) _Bool top;
@property(readonly, nonatomic) id layoutReferenceItem;
- (id)_createCornerOverlayView;	// IMP=0x00000000000ee336
- (id)_createLineView;	// IMP=0x00000000000ee2ae
- (void)_updateLineWidth;	// IMP=0x00000000000ee1f5
- (id)initForHandle:(unsigned long long)arg1;	// IMP=0x00000000000ed641
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000000ed62a

@end

