//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class UIBezierPath, UIColor;

@interface CARWidgetFocusRingView : UIView
{
    double _cornerRadius;	// 8 = 0x8
    UIColor *_ringColor;	// 16 = 0x10
    UIBezierPath *_focusPath;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x002000000001e13d
@property(retain, nonatomic) UIBezierPath *focusPath; // @synthesize focusPath=_focusPath;
@property(retain, nonatomic) UIColor *ringColor; // @synthesize ringColor=_ringColor;
@property(nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
- (void)drawRect:(struct CGRect)arg1;	// IMP=0x001000000001df2e
- (void)layoutSubviews;	// IMP=0x001000000001deed
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x001000000001de7f
- (void)_updateFocusRect;	// IMP=0x001000000001de18
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x001000000001dd3b

@end
