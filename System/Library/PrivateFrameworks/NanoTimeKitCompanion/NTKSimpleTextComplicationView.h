//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

#import <NanoTimeKitCompanion/NTKComplicationDisplay-Protocol.h>
#import <NanoTimeKitCompanion/NTKTemplateComplicationDisplay-Protocol.h>

@class CLKComplicationTemplateSimpleText, CLKDevice, CLKFont, NSDate, NSString, NTKColoringLabel;
@protocol NTKComplicationDisplayObserver;

@interface NTKSimpleTextComplicationView : UIView <NTKComplicationDisplay, NTKTemplateComplicationDisplay>
{
    _Bool canUseCurvedText;	// 8 = 0x8
    id <NTKComplicationDisplayObserver> displayObserver;	// 16 = 0x10
    NTKColoringLabel *_label;	// 24 = 0x18
    CLKDevice *_device;	// 32 = 0x20
    CLKComplicationTemplateSimpleText *_template;	// 40 = 0x28
    NSDate *_timeTravelDate;	// 48 = 0x30
}

+ (_Bool)supportsComplicationFamily:(long long)arg1;	// IMP=0x00000000002898ec
+ (_Bool)handlesComplicationTemplate:(id)arg1;	// IMP=0x00000000002897f3
- (void).cxx_destruct;	// IMP=0x0000000000289b1b
@property(retain, nonatomic) NSDate *timeTravelDate; // @synthesize timeTravelDate=_timeTravelDate;
@property(retain, nonatomic) CLKComplicationTemplateSimpleText *template; // @synthesize template=_template;
@property(retain, nonatomic) CLKDevice *device; // @synthesize device=_device;
@property(retain, nonatomic) NTKColoringLabel *label; // @synthesize label=_label;
@property(nonatomic) _Bool canUseCurvedText; // @synthesize canUseCurvedText;
@property(nonatomic) __weak id <NTKComplicationDisplayObserver> displayObserver; // @synthesize displayObserver;
- (void)setTimeTravelDate:(id)arg1 animated:(_Bool)arg2;	// IMP=0x00000000002898ff
- (id)complicationTemplate;	// IMP=0x00000000002898d7
- (void)setComplicationTemplate:(id)arg1 reason:(long long)arg2;	// IMP=0x000000000028983e
@property(readonly, nonatomic) unsigned long long complicationType;
@property(retain, nonatomic) CLKFont *font;
- (id)_defaultFont;	// IMP=0x00000000002895f2
- (void)_updateLabelFrame;	// IMP=0x00000000002890e2
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x0000000000288f14
- (void)layoutSubviews;	// IMP=0x0000000000288ed3
- (id)init;	// IMP=0x0000000000288dd0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic, getter=isHighlighted) _Bool highlighted;
@property(nonatomic) _Bool shouldUseTemplateColors;
@property(readonly) Class superclass;

@end

