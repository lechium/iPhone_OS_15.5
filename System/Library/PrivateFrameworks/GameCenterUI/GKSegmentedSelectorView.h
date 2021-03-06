//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSLayoutConstraint, UISegmentedControl;

@interface GKSegmentedSelectorView
{
    UISegmentedControl *_segmentedControl;	// 8 = 0x8
    id _target;	// 16 = 0x10
    NSLayoutConstraint *_widthConstraint;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000013dd47
@property(retain, nonatomic) NSLayoutConstraint *widthConstraint; // @synthesize widthConstraint=_widthConstraint;
@property(nonatomic) id target; // @synthesize target=_target;
@property(retain, nonatomic) UISegmentedControl *segmentedControl; // @synthesize segmentedControl=_segmentedControl;
- (void)pinningStateChangedTo:(_Bool)arg1;	// IMP=0x000000000013db03
- (void)prepareForReuse;	// IMP=0x000000000013daa3
- (_Bool)drawsUnderline;	// IMP=0x000000000013da04
- (void)applyLayoutAttributes:(id)arg1;	// IMP=0x000000000013d902
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000013d3c7

@end

