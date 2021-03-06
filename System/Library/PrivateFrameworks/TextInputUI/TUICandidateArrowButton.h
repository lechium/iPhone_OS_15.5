//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIButton.h>

@class NSString, TUICandidateBackdropView, UIView;
@protocol TUICandidateViewStyle;

@interface TUICandidateArrowButton : UIButton
{
    _Bool _showsBackground;	// 8 = 0x8
    NSString *_arrowImageName;	// 16 = 0x10
    long long _arrowDirection;	// 24 = 0x18
    id <TUICandidateViewStyle> _style;	// 32 = 0x20
    UIView *_contentView;	// 40 = 0x28
    UIView *_highlightBackgroundView;	// 48 = 0x30
    UIView *_backgroundView;	// 56 = 0x38
    TUICandidateBackdropView *_backdropView;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x000000000003b37a
@property(retain, nonatomic) TUICandidateBackdropView *backdropView; // @synthesize backdropView=_backdropView;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) UIView *highlightBackgroundView; // @synthesize highlightBackgroundView=_highlightBackgroundView;
@property(readonly, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) id <TUICandidateViewStyle> style; // @synthesize style=_style;
@property(nonatomic) long long arrowDirection; // @synthesize arrowDirection=_arrowDirection;
@property(copy, nonatomic) NSString *arrowImageName; // @synthesize arrowImageName=_arrowImageName;
@property(nonatomic) _Bool showsBackground; // @synthesize showsBackground=_showsBackground;
- (void)updateStyle;	// IMP=0x000000000003b07e
- (id)rotatedImageForImage:(id)arg1 scale:(double)arg2;	// IMP=0x000000000003afe1
- (double)imageViewAlpha;	// IMP=0x000000000003af5c
- (void)udpateBackgroundColor;	// IMP=0x000000000003ad6a
- (void)setHighlighted:(_Bool)arg1;	// IMP=0x000000000003ad29
- (void)layoutSubviews;	// IMP=0x000000000003a829
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000003a7ba
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000003a75d
- (void)commonInit;	// IMP=0x000000000003a4d9

@end

