//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, UIImageView, UILabel, UIVisualEffectView;
@protocol CKTitledImageBalloonViewDelegate;

@interface CKTitledImageBalloonView
{
    UIImageView *_chevron;	// 8 = 0x8
    UILabel *_titleLabel;	// 16 = 0x10
    UIVisualEffectView *_effectView;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000001e1e5e
@property(retain, nonatomic) UIVisualEffectView *effectView; // @synthesize effectView=_effectView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *chevron; // @synthesize chevron=_chevron;
@property(copy, nonatomic) NSString *title;
- (void)setOrientation:(BOOL)arg1;	// IMP=0x00000000001e1c8f
- (void)tapGestureRecognized:(id)arg1;	// IMP=0x00000000001e1ade
- (void)prepareForReuse;	// IMP=0x00000000001e1a72
- (struct UIEdgeInsets)alignmentRectInsets;	// IMP=0x00000000001e1988
- (void)prepareForDisplay;	// IMP=0x00000000001e1845
- (void)layoutSubviews;	// IMP=0x00000000001e1396
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000001e119c
- (void)configureForMediaObject:(id)arg1 previewWidth:(double)arg2 orientation:(BOOL)arg3 hasInvisibleInkEffect:(_Bool)arg4;	// IMP=0x000000000008f7dc
- (void)configureForLocatingChatItem:(id)arg1;	// IMP=0x000000000037cf40

// Remaining properties
@property(nonatomic) __weak id <CKTitledImageBalloonViewDelegate> delegate; // @dynamic delegate;

@end
