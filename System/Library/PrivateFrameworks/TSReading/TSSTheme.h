//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TSReading/TSKModel-Protocol.h>

@class NSMutableDictionary, NSString, TSSStylesheet;

@interface TSSTheme <TSKModel>
{
    NSString *mThemeIdentifier;	// 8 = 0x8
    TSSStylesheet *mStylesheet;	// 16 = 0x10
    NSMutableDictionary *mPresetsByKind;	// 24 = 0x18
}

+ (id)presetBootstrapOrder;	// IMP=0x00000000000bc36d
+ (void)registerPresetSourceClass:(Class)arg1;	// IMP=0x00000000000bb9a6
+ (void)registerPresetSourceClasses;	// IMP=0x00000000000bb978
+ (id)presetSources;	// IMP=0x00000000000bb933
+ (id)themeWithContext:(id)arg1 alternate:(int)arg2;	// IMP=0x00000000000bb67d
@property(readonly, nonatomic) TSSStylesheet *stylesheet; // @synthesize stylesheet=mStylesheet;
- (void)checkThemeStylesheetConsistency;	// IMP=0x00000000000bc6b9
- (void)bootstrapThemeAlternate:(int)arg1;	// IMP=0x00000000000bc470
- (id)p_identifierForBootstrapTheme:(int)arg1;	// IMP=0x00000000000bc35a
- (id)modelPathComponentForChild:(id)arg1;	// IMP=0x00000000000bc27a
- (id)childEnumerator;	// IMP=0x00000000000bc175
- (_Bool)containsCGColor:(struct CGColor *)arg1;	// IMP=0x00000000000bc03e
- (id)colors;	// IMP=0x00000000000bc022
- (unsigned long long)indexOfPreset:(id)arg1;	// IMP=0x00000000000bbf9b
- (id)presetOfKind:(id)arg1 index:(unsigned long long)arg2;	// IMP=0x00000000000bbebd
- (void)movePresetOfKind:(id)arg1 fromIndex:(unsigned long long)arg2 toIndex:(unsigned long long)arg3;	// IMP=0x00000000000bbdda
- (void)removePreset:(id)arg1;	// IMP=0x00000000000bbd5d
- (void)insertPreset:(id)arg1 ofKind:(id)arg2 atIndex:(unsigned long long)arg3;	// IMP=0x00000000000bbc7e
- (void)addPreset:(id)arg1 ofKind:(id)arg2;	// IMP=0x00000000000bbc02
- (void)setPresets:(id)arg1 ofKind:(id)arg2;	// IMP=0x00000000000bbacc
- (void)disablePresetValidation;	// IMP=0x00000000000bbac0
- (void)enablePresetValidation;	// IMP=0x00000000000bbab4
- (_Bool)hasPresetsOfKind:(id)arg1;	// IMP=0x00000000000bba88
- (id)presetsOfKind:(id)arg1;	// IMP=0x00000000000bba62
@property(nonatomic) _Bool isLocked;
@property(retain, nonatomic) NSString *themeIdentifier;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000bb7e2
- (void)dealloc;	// IMP=0x00000000000bb77c
- (id)initWithContext:(id)arg1;	// IMP=0x00000000000bb6ce

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

