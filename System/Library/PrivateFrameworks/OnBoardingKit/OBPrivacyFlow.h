//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSDictionary, NSString, OBBundle, OBImage;

@interface OBPrivacyFlow
{
    OBBundle *_bundle;	// 8 = 0x8
    NSString *_splashContentName;	// 16 = 0x10
    NSDictionary *_splashPlist;	// 24 = 0x18
    _Bool _buttonIconLoaded;	// 32 = 0x20
    OBImage *_buttonIcon;	// 40 = 0x28
    NSString *_buttonTitle;	// 48 = 0x30
    NSString *_buttonCaption;	// 56 = 0x38
    NSString *_splashTitle;	// 64 = 0x40
    NSString *_splashShortTitle;	// 72 = 0x48
}

+ (id)_modelSpecificLocalizedStringKeyForKey:(id)arg1 preferredDeviceType:(unsigned long long)arg2;	// IMP=0x000000000001f939
+ (id)_splashPlistFromBundle:(id)arg1 forContentName:(id)arg2;	// IMP=0x000000000001f47a
+ (id)flowWithBundle:(id)arg1;	// IMP=0x000000000001ef50
- (void).cxx_destruct;	// IMP=0x00000000000213c4
- (id)localizedContentListForLanguage:(id)arg1 preferredDeviceType:(unsigned long long)arg2;	// IMP=0x00000000000208de
@property(readonly, nonatomic) NSArray *localizedContentList;
- (id)localizedShortTitleForLanguage:(id)arg1 preferredDeviceType:(unsigned long long)arg2;	// IMP=0x000000000002082b
@property(readonly, nonatomic) NSString *localizedShortTitle;
- (id)localizedTitleForLanguage:(id)arg1 preferredDeviceType:(unsigned long long)arg2;	// IMP=0x0000000000020778
@property(readonly, nonatomic) NSString *localizedTitle;
- (id)localizedButtonCaptionForLanguage:(id)arg1 preferredDeviceType:(unsigned long long)arg2;	// IMP=0x00000000000206c5
@property(readonly, nonatomic) NSString *localizedButtonCaption;
- (id)localizedButtonTitleForLanguage:(id)arg1 preferredDeviceType:(unsigned long long)arg2;	// IMP=0x0000000000020612
@property(readonly, nonatomic) NSString *localizedButtonTitle;
- (id)_textForConditionalItem:(id)arg1 language:(id)arg2 preferredDeviceType:(unsigned long long)arg3;	// IMP=0x00000000000201c1
- (_Bool)_conformsToRequirements:(id)arg1;	// IMP=0x000000000001ffd3
- (_Bool)_conformsToRequirement:(id)arg1;	// IMP=0x000000000001ff05
- (id)_deviceClass;	// IMP=0x000000000001fede
@property(readonly, nonatomic) _Bool showInCombinedList;
- (void)setButtonIcon:(id)arg1;	// IMP=0x000000000001fcce
@property(readonly, nonatomic) OBImage *buttonIcon;
- (id)_splashPlist;	// IMP=0x000000000001fbe0
- (id)_iconType;	// IMP=0x000000000001fbbc
@property(readonly, nonatomic, getter=isPersonallyIdentifiable) _Bool personallyIdentifiable;
- (id)_bundleImageNamed:(id)arg1;	// IMP=0x000000000001fab0
- (id)_splashLocalizedStringForKey:(id)arg1 language:(id)arg2 table:(id)arg3 preferredDeviceType:(unsigned long long)arg4;	// IMP=0x000000000001f6dc
- (id)_stringForPlaceholderBundleWithString:(id)arg1;	// IMP=0x000000000001f64a
- (id)_splashLocalizedStringForKey:(id)arg1 language:(id)arg2 preferredDeviceType:(unsigned long long)arg3;	// IMP=0x000000000001f569
@property(readonly, nonatomic) _Bool platformSupported;
- (id)_currentPlatform;	// IMP=0x000000000001f2e5
@property(readonly, nonatomic) unsigned long long contentVersion;
@property(readonly, nonatomic) NSString *identifier;
- (id)initWithSplashContent:(id)arg1;	// IMP=0x000000000001f1e5
- (id)initWithBundle:(id)arg1;	// IMP=0x000000000001ef9d

@end
