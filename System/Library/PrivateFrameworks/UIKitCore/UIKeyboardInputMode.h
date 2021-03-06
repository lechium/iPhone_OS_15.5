//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/NSCopying-Protocol.h>

@class NSArray, NSBundle, NSExtension, NSString, UIImage;

@interface UIKeyboardInputMode <NSCopying>
{
    _Bool isDisplayed;	// 8 = 0x8
    _Bool _extensionInputModeHasDictation;	// 9 = 0x9
    NSString *_primaryLanguage;	// 16 = 0x10
    NSString *_languageWithRegion;	// 24 = 0x18
    NSString *identifier;	// 32 = 0x20
    NSString *normalizedIdentifier;	// 40 = 0x28
    NSString *softwareLayout;	// 48 = 0x30
    NSString *hardwareLayout;	// 56 = 0x38
    NSArray *_multilingualLanguages;	// 64 = 0x40
    UIImage *_cachedIcon;	// 72 = 0x48
    NSString *_cachedSizeCategory;	// 80 = 0x50
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000008e147f
+ (id)dictationInputMode;	// IMP=0x00000000008e13ba
+ (id)autofillSignupInputMode;	// IMP=0x00000000008e123c
+ (id)intlInputMode;	// IMP=0x00000000008e11cb
+ (id)keyboardInputModeWithIdentifier:(id)arg1;	// IMP=0x00000000008e103d
+ (id)hardwareLayoutFromIdentifier:(id)arg1;	// IMP=0x00000000008e0c4c
+ (id)softwareLayoutFromIdentifier:(id)arg1;	// IMP=0x00000000008e0c28
+ (id)canonicalLanguageIdentifierFromIdentifier:(id)arg1;	// IMP=0x00000000008e0af0
@property(retain, nonatomic) NSString *cachedSizeCategory; // @synthesize cachedSizeCategory=_cachedSizeCategory;
@property(retain, nonatomic) UIImage *cachedIcon; // @synthesize cachedIcon=_cachedIcon;
@property(nonatomic) _Bool extensionInputModeHasDictation; // @synthesize extensionInputModeHasDictation=_extensionInputModeHasDictation;
@property(retain, nonatomic) NSArray *multilingualLanguages; // @synthesize multilingualLanguages=_multilingualLanguages;
@property(nonatomic) _Bool isDisplayed; // @synthesize isDisplayed;
@property(retain, nonatomic) NSString *hardwareLayout; // @synthesize hardwareLayout;
@property(retain, nonatomic) NSString *softwareLayout; // @synthesize softwareLayout;
@property(retain, nonatomic) NSString *normalizedIdentifier; // @synthesize normalizedIdentifier;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier;
@property(retain, nonatomic) NSString *languageWithRegion; // @synthesize languageWithRegion=_languageWithRegion;
@property(retain, nonatomic) NSString *primaryLanguage; // @synthesize primaryLanguage=_primaryLanguage;
- (id)imageForInputModeLabel:(id)arg1 secondaryIconLabel:(id)arg2 withBackground:(_Bool)arg3;	// IMP=0x00000000008e2ed5
- (void)drawStringInRect:(id)arg1 inRect:(struct CGRect)arg2 useSmallFont:(_Bool)arg3 scale:(double)arg4;	// IMP=0x00000000008e29b2
- (id)_indicatorIconWithBackground:(_Bool)arg1;	// IMP=0x00000000008e2895
- (double)languageIndicatorScale;	// IMP=0x00000000008e26ce
- (void)_getIconLabel:(out id *)arg1 secondaryIconLabel:(out id *)arg2;	// IMP=0x00000000008e233e
- (id)_fallbackIconLabel;	// IMP=0x00000000008e21db
- (id)indicatorTextIcon;	// IMP=0x00000000008e21c7
- (id)indicatorIcon;	// IMP=0x00000000008e21b0
- (void)setLastUsedDictationLanguage;	// IMP=0x00000000008e20c0
@property(retain, nonatomic) NSString *dictationLanguage;
@property(readonly, nonatomic) NSString *dictationDisplayName;
- (_Bool)isDesiredForTraits:(id)arg1;	// IMP=0x00000000008e1a54
- (_Bool)isAllowedForTraits:(id)arg1;	// IMP=0x00000000008e182f
@property(readonly, nonatomic) _Bool supportsEmojiSearch;
@property(readonly, nonatomic) _Bool isEmojiInputMode;
- (_Bool)includeBarHeight;	// IMP=0x00000000008e16b8
@property(readonly, nonatomic) NSString *containingBundleDisplayName;
@property(readonly, nonatomic) NSBundle *containingBundle;
@property(readonly, nonatomic) NSExtension *extension;
@property(readonly, nonatomic) _Bool isExtensionInputMode;
@property(readonly, nonatomic) _Bool isStalledExtensionInputMode;
@property(readonly, nonatomic) NSString *automaticHardwareLayout;
@property(readonly, nonatomic) _Bool defaultLayoutIsASCIICapable;
@property(readonly, nonatomic) _Bool isDefaultRightToLeft;
@property(readonly, nonatomic) NSString *extendedDisplayName;
@property(readonly, nonatomic) NSString *displayName;
@property(readonly, nonatomic) _Bool showSWLayoutWithHWKeyboard;
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000008e14ed
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000008e1487
@property(readonly, nonatomic) _Bool isSpecializedInputMode;
@property(readonly, retain, nonatomic) NSArray *normalizedIdentifierLevels;
@property(readonly, nonatomic) NSString *identifierWithLayouts;
- (void)preferencesControllerChanged:(id)arg1;	// IMP=0x00000000008e1015
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000008e100a
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000008e0f4b
- (void)dealloc;	// IMP=0x00000000008e0e45
- (id)initWithIdentifier:(id)arg1;	// IMP=0x00000000008e0cb6

@end

