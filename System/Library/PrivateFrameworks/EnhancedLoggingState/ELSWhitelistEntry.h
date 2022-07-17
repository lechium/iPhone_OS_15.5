//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface ELSWhitelistEntry : NSObject
{
    _Bool _requiresFollowup;	// 8 = 0x8
    _Bool _retry;	// 9 = 0x9
    NSString *_bundleIdentifier;	// 16 = 0x10
    NSString *_parameterName;	// 24 = 0x18
    NSString *_displayNameLocalizationKey;	// 32 = 0x20
    NSString *_descriptionLocalizationKey;	// 40 = 0x28
    NSString *_sensitiveInformationLocalizationKey;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000000000267d
@property(readonly, nonatomic) _Bool retry; // @synthesize retry=_retry;
@property(readonly, nonatomic) _Bool requiresFollowup; // @synthesize requiresFollowup=_requiresFollowup;
@property(readonly, nonatomic) NSString *sensitiveInformationLocalizationKey; // @synthesize sensitiveInformationLocalizationKey=_sensitiveInformationLocalizationKey;
@property(retain, nonatomic) NSString *descriptionLocalizationKey; // @synthesize descriptionLocalizationKey=_descriptionLocalizationKey;
@property(retain, nonatomic) NSString *displayNameLocalizationKey; // @synthesize displayNameLocalizationKey=_displayNameLocalizationKey;
@property(retain, nonatomic) NSString *parameterName; // @synthesize parameterName=_parameterName;
@property(retain, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
- (id)initWithBundleIdentifier:(id)arg1 parameterName:(id)arg2 displayNameLocalizationKey:(id)arg3 descriptionLocalizationKey:(id)arg4 sensitiveInformationLocalizationKey:(id)arg5 needsWAPIKeys:(_Bool)arg6 requiresFollowup:(_Bool)arg7 retry:(_Bool)arg8;	// IMP=0x0000000000002442
- (id)initWithBundleIdentifier:(id)arg1 parameterName:(id)arg2 baseLocalizationKey:(id)arg3 needsWAPIKeys:(_Bool)arg4 requiresFollowup:(_Bool)arg5 retry:(_Bool)arg6;	// IMP=0x000000000000232f

@end
