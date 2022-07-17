//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class UIColor;

@interface _TVProgressBarView : UIView
{
    _Bool _useMaterial;	// 8 = 0x8
    _Bool _shouldProgressBarUseRoundCorner;	// 9 = 0x9
    double _cornerRadius;	// 16 = 0x10
    double _progress;	// 24 = 0x18
    UIColor *_progressTintColor;	// 32 = 0x20
    UIColor *_gradientStartColor;	// 40 = 0x28
    UIColor *_gradientEndColor;	// 48 = 0x30
    UIColor *_completeTintColor;	// 56 = 0x38
    struct UIEdgeInsets _padding;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x000000000008ee64
@property(nonatomic) struct UIEdgeInsets padding; // @synthesize padding=_padding;
@property(nonatomic) _Bool shouldProgressBarUseRoundCorner; // @synthesize shouldProgressBarUseRoundCorner=_shouldProgressBarUseRoundCorner;
@property(nonatomic) _Bool useMaterial; // @synthesize useMaterial=_useMaterial;
@property(retain, nonatomic) UIColor *completeTintColor; // @synthesize completeTintColor=_completeTintColor;
@property(retain, nonatomic) UIColor *gradientEndColor; // @synthesize gradientEndColor=_gradientEndColor;
@property(retain, nonatomic) UIColor *gradientStartColor; // @synthesize gradientStartColor=_gradientStartColor;
@property(retain, nonatomic) UIColor *progressTintColor; // @synthesize progressTintColor=_progressTintColor;
@property(nonatomic) double progress; // @synthesize progress=_progress;
@property(nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
- (void)setgradientEndColor:(id)arg1;	// IMP=0x000000000008ec2d
- (void)drawRect:(struct CGRect)arg1;	// IMP=0x000000000008e6b2
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000008e650

@end
