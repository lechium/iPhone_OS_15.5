//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@protocol HUQuickControlAuxiliaryView;

@interface HUQuickControlAuxiliaryHostView : UIView
{
    UIView<HUQuickControlAuxiliaryView> *_auxiliaryView;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000012cb43
@property(retain, nonatomic) UIView<HUQuickControlAuxiliaryView> *auxiliaryView; // @synthesize auxiliaryView=_auxiliaryView;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x000000000012ca7d
- (void)updateConstraints;	// IMP=0x000000000012c773

@end

