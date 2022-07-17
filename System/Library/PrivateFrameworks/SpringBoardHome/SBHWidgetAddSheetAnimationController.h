//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/_UISheetAnimationController.h>

@class SBHAddWidgetSheetGalleryCollectionViewCell, SBHPortaledShadowedWidgetView, UIView;

@interface SBHWidgetAddSheetAnimationController : _UISheetAnimationController
{
    SBHAddWidgetSheetGalleryCollectionViewCell *_sourceCell;	// 8 = 0x8
    SBHPortaledShadowedWidgetView *_portaledShadowedWidgetView;	// 16 = 0x10
    UIView *_matchMoveView;	// 24 = 0x18
    struct CGPoint _fromPoint;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000216e6c
@property(retain, nonatomic) UIView *matchMoveView; // @synthesize matchMoveView=_matchMoveView;
@property(nonatomic) struct CGPoint fromPoint; // @synthesize fromPoint=_fromPoint;
@property(retain, nonatomic) SBHPortaledShadowedWidgetView *portaledShadowedWidgetView; // @synthesize portaledShadowedWidgetView=_portaledShadowedWidgetView;
@property(retain, nonatomic) SBHAddWidgetSheetGalleryCollectionViewCell *sourceCell; // @synthesize sourceCell=_sourceCell;
- (void)interruptAnimation;	// IMP=0x0000000000216dbf
- (id)interruptibleAnimatorForTransition:(id)arg1;	// IMP=0x0000000000215f1e
- (void)animateTransition:(id)arg1;	// IMP=0x0000000000215d76
- (id)initWithSourceCell:(id)arg1;	// IMP=0x0000000000215c66

@end
