//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIControl.h>

@class NSArray, UISegmentedControl;
@protocol TUICandidateViewStyle;

@interface TUICandidateSortControl : UIControl
{
    NSArray *_titles;	// 8 = 0x8
    id <TUICandidateViewStyle> _style;	// 16 = 0x10
    UISegmentedControl *_segmentedControl;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000046d07
@property(retain, nonatomic) UISegmentedControl *segmentedControl; // @synthesize segmentedControl=_segmentedControl;
@property(retain, nonatomic) id <TUICandidateViewStyle> style; // @synthesize style=_style;
@property(copy, nonatomic) NSArray *titles; // @synthesize titles=_titles;
- (void)handleValueChanged;	// IMP=0x0000000000046ca9
@property(nonatomic) long long selectedIndex;
- (double)segmentedControlWidth;	// IMP=0x00000000000464fb
- (struct CGRect)segmentedControlFrame;	// IMP=0x0000000000046493
- (void)layoutSubviews;	// IMP=0x00000000000461d7
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000004618b
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000004612e
- (void)commonInit;	// IMP=0x0000000000046084

@end

