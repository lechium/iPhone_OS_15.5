//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

#import <NanoTimeKitCompanion/NTKComplicationDisplay-Protocol.h>
#import <NanoTimeKitCompanion/NTKTemplateComplicationDisplay-Protocol.h>

@class CLKComplicationTemplate, CLKDevice, NSDate, NSString, NTKDigitalTimeLabel, UIColor, UIFont;
@protocol NTKComplicationDisplayObserver;

@interface NTKDigitalTimeComplicationView : UIView <NTKComplicationDisplay, NTKTemplateComplicationDisplay>
{
    _Bool canUseCurvedText;	// 8 = 0x8
    id <NTKComplicationDisplayObserver> displayObserver;	// 16 = 0x10
    CLKDevice *_device;	// 24 = 0x18
    NTKDigitalTimeLabel *_timeLabel;	// 32 = 0x20
    CLKComplicationTemplate *_template;	// 40 = 0x28
    NSDate *_timeTravelDate;	// 48 = 0x30
}

+ (_Bool)supportsComplicationFamily:(long long)arg1;	// IMP=0x000000000028a462
+ (_Bool)handlesComplicationTemplate:(id)arg1;	// IMP=0x000000000028a3a0
- (void).cxx_destruct;	// IMP=0x000000000028a7e7
@property(retain, nonatomic) NSDate *timeTravelDate; // @synthesize timeTravelDate=_timeTravelDate;
@property(retain, nonatomic) CLKComplicationTemplate *template; // @synthesize template=_template;
@property(retain, nonatomic) NTKDigitalTimeLabel *timeLabel; // @synthesize timeLabel=_timeLabel;
@property(retain, nonatomic) CLKDevice *device; // @synthesize device=_device;
@property(nonatomic) _Bool canUseCurvedText; // @synthesize canUseCurvedText;
@property(nonatomic) __weak id <NTKComplicationDisplayObserver> displayObserver; // @synthesize displayObserver;
- (void)updateDate;	// IMP=0x000000000028a5bb
- (void)setTimeTravelDate:(id)arg1 animated:(_Bool)arg2;	// IMP=0x000000000028a505
- (unsigned long long)timelineAnimationFadeTypeOverride;	// IMP=0x000000000028a475
- (id)complicationTemplate;	// IMP=0x000000000028a44d
- (void)setComplicationTemplate:(id)arg1 reason:(long long)arg2;	// IMP=0x000000000028a3eb
@property(retain, nonatomic) UIFont *font;
@property(retain, nonatomic) UIColor *textColor;
- (void)setOverrideDate:(id)arg1;	// IMP=0x000000000028a1e1
- (void)timeOffsetChanged;	// IMP=0x000000000028a17c
- (id)_createLabelViewWithFont:(id)arg1;	// IMP=0x000000000028a070
- (id)_labelFont;	// IMP=0x0000000000289fca
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x0000000000289e2b
- (void)layoutSubviews;	// IMP=0x0000000000289db1
- (id)init;	// IMP=0x0000000000289c43

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic, getter=isHighlighted) _Bool highlighted;
@property(nonatomic) _Bool shouldUseTemplateColors;
@property(readonly) Class superclass;

@end
