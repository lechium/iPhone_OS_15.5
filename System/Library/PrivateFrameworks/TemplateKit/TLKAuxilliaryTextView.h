//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TemplateKit/NUIContainerViewDelegate-Protocol.h>

@class NSString, TLKFormattedText, TLKLabel, TLKStackView;

@interface TLKAuxilliaryTextView <NUIContainerViewDelegate>
{
    _Bool _useCompactMode;	// 8 = 0x8
    TLKFormattedText *_topText;	// 16 = 0x10
    TLKFormattedText *_middleText;	// 24 = 0x18
    TLKFormattedText *_bottomText;	// 32 = 0x20
    TLKLabel *_topLabel;	// 40 = 0x28
    TLKLabel *_middleLabel;	// 48 = 0x30
    TLKLabel *_bottomLabel;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0000000000002679
@property(nonatomic) _Bool useCompactMode; // @synthesize useCompactMode=_useCompactMode;
@property(retain, nonatomic) TLKLabel *bottomLabel; // @synthesize bottomLabel=_bottomLabel;
@property(retain, nonatomic) TLKLabel *middleLabel; // @synthesize middleLabel=_middleLabel;
@property(retain, nonatomic) TLKLabel *topLabel; // @synthesize topLabel=_topLabel;
@property(retain, nonatomic) TLKFormattedText *bottomText; // @synthesize bottomText=_bottomText;
@property(retain, nonatomic) TLKFormattedText *middleText; // @synthesize middleText=_middleText;
@property(retain, nonatomic) TLKFormattedText *topText; // @synthesize topText=_topText;
- (id)bottomLabelString;	// IMP=0x0000000000002567
- (id)middleLabelString;	// IMP=0x0000000000002517
- (id)topLabelString;	// IMP=0x00000000000024c7
- (id)bottomLabelFont;	// IMP=0x0000000000002477
- (id)middleLabelFont;	// IMP=0x0000000000002427
- (void)observedPropertiesChanged;	// IMP=0x0000000000001eba
- (id)setupContentView;	// IMP=0x00000000000010fc

// Remaining properties
@property(retain, nonatomic) TLKStackView *contentView; // @dynamic contentView;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
