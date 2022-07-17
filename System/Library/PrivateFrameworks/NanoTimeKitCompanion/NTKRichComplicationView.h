//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

#import <NanoTimeKitCompanion/CLKMonochromeComplicationView-Protocol.h>
#import <NanoTimeKitCompanion/CLKMonochromeFilterProvider-Protocol.h>
#import <NanoTimeKitCompanion/NTKTemplateComplicationDisplay-Protocol.h>

@class CLKComplicationTemplate, CLKDevice, NSDate, NSString, UIColor;
@protocol CLKMonochromeFilterProvider, NTKComplicationDisplayObserver;

@interface NTKRichComplicationView : UIView <NTKTemplateComplicationDisplay, CLKMonochromeComplicationView, CLKMonochromeFilterProvider>
{
    long long _family;	// 8 = 0x8
    _Bool _editing;	// 16 = 0x10
    _Bool _highlighted;	// 17 = 0x11
    NSDate *_timeTravelDate;	// 24 = 0x18
    _Bool canUseCurvedText;	// 32 = 0x20
    _Bool _paused;	// 33 = 0x21
    _Bool _templateWantsPlatter;	// 34 = 0x22
    id <CLKMonochromeFilterProvider> _filterProvider;	// 40 = 0x28
    id <NTKComplicationDisplayObserver> displayObserver;	// 48 = 0x30
    CLKComplicationTemplate *_template;	// 56 = 0x38
    CLKDevice *_device;	// 64 = 0x40
    UIColor *_foregroundColor;	// 72 = 0x48
}

+ (_Bool)handlesComplicationTemplate:(id)arg1;	// IMP=0x000000000011e0f5
- (void).cxx_destruct;	// IMP=0x000000000011e824
@property(nonatomic) _Bool templateWantsPlatter; // @synthesize templateWantsPlatter=_templateWantsPlatter;
@property(retain, nonatomic) UIColor *foregroundColor; // @synthesize foregroundColor=_foregroundColor;
@property(nonatomic) _Bool paused; // @synthesize paused=_paused;
@property(readonly, nonatomic) long long family; // @synthesize family=_family;
@property(readonly, nonatomic) CLKDevice *device; // @synthesize device=_device;
@property(readonly, nonatomic) CLKComplicationTemplate *template; // @synthesize template=_template;
@property(nonatomic) _Bool canUseCurvedText; // @synthesize canUseCurvedText;
@property(nonatomic) __weak id <NTKComplicationDisplayObserver> displayObserver; // @synthesize displayObserver;
@property(nonatomic) __weak id <CLKMonochromeFilterProvider> filterProvider; // @synthesize filterProvider=_filterProvider;
- (_Bool)viewShouldIgnoreTwoPieceImage:(id)arg1;	// IMP=0x000000000011e692
- (id)interpolatedColorForView:(id)arg1;	// IMP=0x000000000011e60f
- (id)colorForView:(id)arg1 accented:(_Bool)arg2;	// IMP=0x000000000011e586
- (id)filterForView:(id)arg1 style:(long long)arg2 fraction:(double)arg3;	// IMP=0x000000000011e510
- (id)filterForView:(id)arg1 style:(long long)arg2;	// IMP=0x000000000011e4ac
- (void)updateMonochromeColor;	// IMP=0x000000000011e4a6
- (void)transitionToMonochromeWithFraction:(double)arg1;	// IMP=0x000000000011e4a0
- (void)_enumerateLabelsWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000011e49a
- (void)_transitToHighlightState:(_Bool)arg1 fraction:(double)arg2;	// IMP=0x000000000011e494
- (void)_transitThemeFromTheme:(long long)arg1 toTheme:(long long)arg2 fraction:(double)arg3;	// IMP=0x000000000011e48e
- (void)_editingDidEnd;	// IMP=0x000000000011e488
- (void)_setEditingTransitionFraction:(double)arg1 direction:(long long)arg2 position:(long long)arg3 type:(long long)arg4;	// IMP=0x000000000011e482
- (void)renderSynchronouslyWithImageQueueDiscard:(_Bool)arg1 inGroup:(id)arg2;	// IMP=0x000000000011e47c
- (void)_applyPausedUpdate;	// IMP=0x000000000011e476
- (void)_handleTemplate:(id)arg1 reason:(long long)arg2;	// IMP=0x000000000011e470
- (unsigned long long)timelineAnimationFadeTypeOverride;	// IMP=0x000000000011e3e0
@property(readonly, nonatomic) NSDate *timeTravelDate;
@property(readonly, nonatomic) NSDate *complicationDate;
- (void)setEditing:(_Bool)arg1;	// IMP=0x000000000011e32c
- (id)complicationTemplate;	// IMP=0x000000000011e317
- (void)setComplicationTemplate:(id)arg1 reason:(long long)arg2;	// IMP=0x000000000011e1e4
- (void)setTimeTravelDate:(id)arg1 animated:(_Bool)arg2;	// IMP=0x000000000011e0fd
- (long long)tritiumUpdateMode;	// IMP=0x000000000011e0ea
- (void)_setWhistlerAnalogEditingAlphaTransitonFraction:(double)arg1 direction:(long long)arg2 position:(long long)arg3;	// IMP=0x000000000011e080
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x000000000011e03f
- (void)transitThemeFromTheme:(long long)arg1 toTheme:(long long)arg2 fraction:(double)arg3;	// IMP=0x000000000011e02d
- (void)setEditingTransitionFraction:(double)arg1 direction:(long long)arg2 position:(long long)arg3 type:(long long)arg4;	// IMP=0x000000000011dfc3
@property(nonatomic, getter=isHighlighted) _Bool highlighted;
- (id)initWithFamily:(long long)arg1;	// IMP=0x000000000011deb8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) _Bool shouldUseTemplateColors;
@property(readonly) Class superclass;

@end
