//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableDictionary, WBSReaderFontManager;

@interface WBSReaderConfigurationManager : NSObject
{
    long long _textZoomIndex;	// 8 = 0x8
    long long _theme;	// 16 = 0x10
    long long _darkModeTheme;	// 24 = 0x18
    NSMutableDictionary *_fontFamilyNameForLanguageTag;	// 32 = 0x20
    WBSReaderFontManager *_fontManager;	// 40 = 0x28
    _Bool _prefersLargerDefaultFontSize;	// 48 = 0x30
    _Bool _javaScriptEnabled;	// 49 = 0x31
    _Bool _darkModeEnabled;	// 50 = 0x32
    _Bool _isOLEDDisplay;	// 51 = 0x33
}

- (void).cxx_destruct;	// IMP=0x00000000000e7f50
@property(nonatomic) _Bool isOLEDDisplay; // @synthesize isOLEDDisplay=_isOLEDDisplay;
@property(nonatomic) _Bool darkModeEnabled; // @synthesize darkModeEnabled=_darkModeEnabled;
@property(nonatomic) _Bool javaScriptEnabled; // @synthesize javaScriptEnabled=_javaScriptEnabled;
- (void)_migrateToVersion5IfNecessary;	// IMP=0x00000000000e7c62
- (long long)_effectiveTextZoomIndex;	// IMP=0x00000000000e7c3b
- (long long)_defaultThemeForAppearance:(long long)arg1;	// IMP=0x00000000000e7c21
- (long long)_defaultTextZoomIndex;	// IMP=0x00000000000e7c0e
- (long long)themeForAppearance:(long long)arg1;	// IMP=0x00000000000e7bcb
- (void)setTheme:(long long)arg1 forAppearance:(long long)arg2;	// IMP=0x00000000000e7baa
- (id)fontForLanguageTag:(id)arg1;	// IMP=0x00000000000e7abf
- (void)setFont:(id)arg1 forLanguageTag:(id)arg2;	// IMP=0x00000000000e7a30
- (void)resetTextSize;	// IMP=0x00000000000e7a0f
- (void)makeTextSmaller;	// IMP=0x00000000000e79d7
- (void)makeTextBigger;	// IMP=0x00000000000e799f
@property(readonly, nonatomic) _Bool resettingTextSizeWouldHaveEffect;
@property(readonly, nonatomic) _Bool canMakeTextSmaller;
@property(readonly, nonatomic) _Bool canMakeTextBigger;
@property(readonly, nonatomic) NSDictionary *configurationToSendToWebPage;
@property(readonly, nonatomic) NSDictionary *configurationToSave;
- (id)initWithPersistedSettingsAsDictionaryRepresentation:(id)arg1 fontManager:(id)arg2;	// IMP=0x00000000000e73ab
- (id)initWithPersistedSettingsAsDictionaryRepresentation:(id)arg1 fontManager:(id)arg2 prefersLargerDefaultFontSize:(_Bool)arg3;	// IMP=0x00000000000e6d18

@end
