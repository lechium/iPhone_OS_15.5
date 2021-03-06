//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <NanoTimeKitCompanion/NTKTemplateComplicationDisplay-Protocol.h>

@class CLKComplicationTemplate, NSDate, NSString;
@protocol NTKComplicationDisplayObserver;

@interface NTKModularTemplateView <NTKTemplateComplicationDisplay>
{
    NSDate *_timeTravelDate;	// 8 = 0x8
    CLKComplicationTemplate *_complicationTemplate;	// 16 = 0x10
    unsigned long long _highlightMode;	// 24 = 0x18
}

+ (_Bool)handlesComplicationTemplate:(id)arg1;	// IMP=0x0000000000221a37
- (void).cxx_destruct;	// IMP=0x0000000000222c36
@property(nonatomic) unsigned long long highlightMode; // @synthesize highlightMode=_highlightMode;
@property(readonly) NSDate *timeTravelDate; // @synthesize timeTravelDate=_timeTravelDate;
@property(retain, nonatomic) CLKComplicationTemplate *complicationTemplate; // @synthesize complicationTemplate=_complicationTemplate;
- (void)_propagateColorSchemeToSubviews:(id)arg1;	// IMP=0x0000000000222a9d
- (void)_enumerateColoringViewsSubviewsWithBlock:(CDUnknownBlockType)arg1 invertedHighlight:(_Bool)arg2;	// IMP=0x0000000000222971
- (_Bool)_useInvertedHighlightForColorScheme:(id)arg1;	// IMP=0x000000000022291c
- (void)_update;	// IMP=0x0000000000222916
- (void)setTimeTravelDate:(id)arg1 animated:(_Bool)arg2;	// IMP=0x000000000022270f
- (void)applyTransitionFraction:(double)arg1 fromFaceColorPalette:(id)arg2 toFaceColorPalette:(id)arg3 units:(unsigned long long)arg4 brightenedUnits:(unsigned long long)arg5;	// IMP=0x0000000000221f62
- (void)applyTransitionFraction:(double)arg1 fromFaceColor:(unsigned long long)arg2 toFaceColor:(unsigned long long)arg3 units:(unsigned long long)arg4 brightenedUnits:(unsigned long long)arg5;	// IMP=0x0000000000221f5c
- (void)setContainsOverrideFaceColor:(id)arg1;	// IMP=0x0000000000221f45
- (void)_setColorScheme:(id)arg1 propagateToSubviews:(_Bool)arg2;	// IMP=0x0000000000221ed9
- (void)applyFaceColorPalette:(id)arg1 units:(unsigned long long)arg2;	// IMP=0x0000000000221d99
- (void)applyFaceColor:(unsigned long long)arg1 units:(unsigned long long)arg2;	// IMP=0x0000000000221d41
- (void)setComplicationTemplate:(id)arg1 reason:(long long)arg2;	// IMP=0x0000000000221a3f

// Remaining properties
@property(nonatomic) _Bool canUseCurvedText;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) __weak id <NTKComplicationDisplayObserver> displayObserver;
@property(readonly) unsigned long long hash;
@property(nonatomic, getter=isHighlighted) _Bool highlighted;
@property(nonatomic) _Bool shouldUseTemplateColors;
@property(readonly) Class superclass;

@end

