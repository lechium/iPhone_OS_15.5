//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TemplateKit/NUIContainerViewDelegate-Protocol.h>

@class NSArray, NSString, TLKImage, TLKImageView, TLKKeyValueGridView, TLKStackView;

@interface TLKKeyValueView <NUIContainerViewDelegate>
{
    NSArray *_leadingTuples;	// 8 = 0x8
    NSArray *_trailingTuples;	// 16 = 0x10
    TLKImage *_image;	// 24 = 0x18
    TLKKeyValueGridView *_leadingGrid;	// 32 = 0x20
    TLKKeyValueGridView *_trailingGrid;	// 40 = 0x28
    TLKImageView *_imageView;	// 48 = 0x30
    double _lastMeasuredWidth;	// 56 = 0x38
}

+ (unsigned long long)visibleRowsInGrid:(id)arg1;	// IMP=0x0000000000036ed4
- (void).cxx_destruct;	// IMP=0x000000000003706e
@property(nonatomic) double lastMeasuredWidth; // @synthesize lastMeasuredWidth=_lastMeasuredWidth;
@property(retain, nonatomic) TLKImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) TLKKeyValueGridView *trailingGrid; // @synthesize trailingGrid=_trailingGrid;
@property(retain, nonatomic) TLKKeyValueGridView *leadingGrid; // @synthesize leadingGrid=_leadingGrid;
@property(retain, nonatomic) TLKImage *image; // @synthesize image=_image;
@property(retain, nonatomic) NSArray *trailingTuples; // @synthesize trailingTuples=_trailingTuples;
@property(retain, nonatomic) NSArray *leadingTuples; // @synthesize leadingTuples=_leadingTuples;
- (id)leadingTextKeyLabels;	// IMP=0x0000000000036c9b
- (unsigned long long)numberOfVisibleRowsForTrailingGrid;	// IMP=0x0000000000036c3d
- (unsigned long long)numberOfVisibleRowsForLeadingGrid;	// IMP=0x0000000000036bdf
- (_Bool)trailingGridIsHidden;	// IMP=0x0000000000036b9b
- (_Bool)leadingGridIsHidden;	// IMP=0x0000000000036b57
- (long long)currentStackViewDistribution;	// IMP=0x0000000000036b13
- (struct CGRect)containerView:(id)arg1 layoutFrameForArrangedSubview:(id)arg2 withProposedFrame:(struct CGRect)arg3;	// IMP=0x00000000000368f3
- (void)observedPropertiesChanged;	// IMP=0x0000000000036546
- (_Bool)containerView:(id)arg1 shouldRestartMeasurementDueToCompressionInAxis:(long long)arg2 forReason:(long long)arg3;	// IMP=0x00000000000364f6
- (void)_reconfigureForCompressedState;	// IMP=0x000000000003633f
- (void)containerView:(id)arg1 willMeasureArrangedSubviewsFittingSize:(struct CGSize)arg2 forReason:(long long)arg3;	// IMP=0x00000000000362f9
- (id)setupContentView;	// IMP=0x0000000000035947

// Remaining properties
@property(retain, nonatomic) TLKStackView *contentView; // @dynamic contentView;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
