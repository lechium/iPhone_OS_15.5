//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIImageView.h>

@class GKHairlineView, GKLabel, NSString;

@interface GKBaseComposeHeaderField : UIImageView
{
    GKLabel *_nameLabel;	// 8 = 0x8
    GKHairlineView *_separatorView;	// 16 = 0x10
    unsigned long long _maxLineCount;	// 24 = 0x18
    SEL _actionWhenTouched;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000016e636
@property(nonatomic) SEL actionWhenTouched; // @synthesize actionWhenTouched=_actionWhenTouched;
@property(nonatomic) unsigned long long maxLineCount; // @synthesize maxLineCount=_maxLineCount;
@property(retain, nonatomic) GKHairlineView *separatorView; // @synthesize separatorView=_separatorView;
@property(retain, nonatomic) GKLabel *nameLabel; // @synthesize nameLabel=_nameLabel;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;	// IMP=0x000000000016e549
- (_Bool)canBecomeFirstResponder;	// IMP=0x000000000016e534
- (id)viewForBaselineLayout;	// IMP=0x000000000016e51f
@property(retain, nonatomic) NSString *valueText;
@property(readonly, nonatomic) struct CGRect valueFrame;
@property(retain, nonatomic) NSString *nameText;
- (void)addConstraintsForValueView:(id)arg1;	// IMP=0x000000000016e100
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000016ddcc

@end

