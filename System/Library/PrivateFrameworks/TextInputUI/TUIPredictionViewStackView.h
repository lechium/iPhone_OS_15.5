//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

@class TUIPredictionViewStackContentView;

@interface TUIPredictionViewStackView : UIView
{
    long long _layoutDirection;	// 8 = 0x8
    TUIPredictionViewStackContentView *_contentView;	// 16 = 0x10
    struct UIEdgeInsets _contentMargin;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000003a2fd
@property(retain, nonatomic) TUIPredictionViewStackContentView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) long long layoutDirection; // @synthesize layoutDirection=_layoutDirection;
@property(nonatomic) struct UIEdgeInsets contentMargin; // @synthesize contentMargin=_contentMargin;
- (void)layoutSubviews;	// IMP=0x0000000000039e71
- (id)arrangedSubviews;	// IMP=0x0000000000039e21
- (void)addArrangedSubview:(id)arg1;	// IMP=0x0000000000039da2
- (long long)_layoutTypeForSubview:(id)arg1;	// IMP=0x0000000000039d4b
- (id)subStackViews;	// IMP=0x0000000000039bbd
- (id)allVisibleCells;	// IMP=0x0000000000039994
- (id)visibleCells;	// IMP=0x00000000000398e5
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000039804

@end

