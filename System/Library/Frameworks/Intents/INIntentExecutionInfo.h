//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSString;

@interface INIntentExecutionInfo
{
    NSArray *_extensions;	// 8 = 0x8
    NSArray *_uiExtensions;	// 16 = 0x10
    NSString *_intentClassName;	// 24 = 0x18
    long long _preferredCallProvider;	// 32 = 0x20
    NSString *_uiExtensionBundleId;	// 40 = 0x28
}

+ (void)initialize;	// IMP=0x00000000002588f5
- (void).cxx_destruct;	// IMP=0x00000000002588a2
@property(readonly, copy, nonatomic) NSString *uiExtensionBundleId; // @synthesize uiExtensionBundleId=_uiExtensionBundleId;
@property(readonly, nonatomic) long long preferredCallProvider; // @synthesize preferredCallProvider=_preferredCallProvider;
@property(readonly, copy, nonatomic) NSString *intentClassName; // @synthesize intentClassName=_intentClassName;
- (id)_uiExtensionsWithError:(id *)arg1;	// IMP=0x00000000002586f7
- (id)_extensionsWithError:(id *)arg1;	// IMP=0x000000000025857f
- (id)_matchingAttributesForExtensionPoint:(id)arg1 error:(id *)arg2;	// IMP=0x00000000002582b6
- (_Bool)canRunOnLocalDevice;	// IMP=0x00000000002580c3
@property(readonly, nonatomic) _Bool hasCustomUIExtension;
- (id)_initWithIntentClassName:(id)arg1 preferredCallProvider:(long long)arg2 launchableAppBundleId:(id)arg3 displayableAppBundleId:(id)arg4 extensionBundleId:(id)arg5 uiExtensionBundleId:(id)arg6 containingAppBundleURL:(id)arg7;	// IMP=0x0000000000257ea8
- (id)initWithIntentClassName:(id)arg1 extensionBundleId:(id)arg2;	// IMP=0x0000000000257e79
- (id)initWithIntentClassName:(id)arg1 launchableAppBundleId:(id)arg2;	// IMP=0x0000000000257e46
- (id)initWithIntentTypeName:(id)arg1;	// IMP=0x0000000000257ced
- (id)initWithIntent:(id)arg1;	// IMP=0x0000000000257a98

@end
