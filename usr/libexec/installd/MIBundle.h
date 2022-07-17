//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSSet, NSString, NSURL;

@interface MIBundle : NSObject
{
    unsigned char _bundleType;	// 8 = 0x8
    _Bool _isPlaceholder;	// 9 = 0x9
    _Bool _isPlaceholderStatusValid;	// 10 = 0xa
    NSDictionary *_infoPlistSubset;	// 16 = 0x10
    NSURL *_bundleParentDirectoryURL;	// 24 = 0x18
    NSString *_parentBundleID;	// 32 = 0x20
    NSString *_bundleName;	// 40 = 0x28
    NSString *_bundleParentSubdirectory;	// 48 = 0x30
    MIBundle *_parentBundle;	// 56 = 0x38
    NSArray *_pluginKitBundles;	// 64 = 0x40
    NSArray *_frameworkBundles;	// 72 = 0x48
    NSArray *_xpcServiceBundles;	// 80 = 0x50
}

+ (id)bundleForURL:(id)arg1 error:(id *)arg2;	// IMP=0x0040000000031845
+ (_Bool)bundleIsBlacklisted:(id)arg1;	// IMP=0x0010000000030d96
+ (id)bundlesInParentBundle:(id)arg1 subDirectory:(id)arg2 matchingPredicate:(CDUnknownBlockType)arg3 error:(id *)arg4;	// IMP=0x001000000002ec38
+ (id)_URLOfFirstBundleInDirectory:(id)arg1 withExtension:(id)arg2 error:(id *)arg3;	// IMP=0x001000000002d0a2
- (void).cxx_destruct;	// IMP=0x00200000000333ee
@property(nonatomic) _Bool isPlaceholderStatusValid; // @synthesize isPlaceholderStatusValid=_isPlaceholderStatusValid;
@property(retain, nonatomic) NSArray *xpcServiceBundles; // @synthesize xpcServiceBundles=_xpcServiceBundles;
@property(retain, nonatomic) NSArray *frameworkBundles; // @synthesize frameworkBundles=_frameworkBundles;
@property(retain, nonatomic) NSArray *pluginKitBundles; // @synthesize pluginKitBundles=_pluginKitBundles;
@property(readonly, nonatomic) __weak MIBundle *parentBundle; // @synthesize parentBundle=_parentBundle;
@property(readonly, copy, nonatomic) NSString *bundleParentSubdirectory; // @synthesize bundleParentSubdirectory=_bundleParentSubdirectory;
@property(readonly, copy, nonatomic) NSString *bundleName; // @synthesize bundleName=_bundleName;
@property(readonly, copy, nonatomic) NSString *parentBundleID; // @synthesize parentBundleID=_parentBundleID;
- (_Bool)sdkBuildVersionIsAtLeast:(id)arg1;	// IMP=0x00100000000332d9
@property(readonly, copy, nonatomic) NSString *sdkBuildVersion;
- (_Bool)validateAppMetadataWithError:(id *)arg1;	// IMP=0x0010000000032fe2
@property(readonly, nonatomic) NSSet *siriIntents;
- (id)description;	// IMP=0x0010000000032bee
- (_Bool)thinningMatchesCurrentDeviceWithError:(id *)arg1;	// IMP=0x001000000003278e
@property(readonly, copy, nonatomic) NSArray *supportedDevices;
- (_Bool)isApplicableToCurrentDeviceCapabilitiesWithError:(id *)arg1;	// IMP=0x0010000000032443
- (_Bool)isApplicableToOSVersionEarlierThan:(id)arg1;	// IMP=0x00100000000323c5
- (_Bool)isMinimumOSVersion:(id)arg1 applicableToOSVersion:(id)arg2 error:(id *)arg3;	// IMP=0x0010000000032280
- (_Bool)isApplicableToOSVersion:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000032202
- (_Bool)isApplicableToCurrentOSVersionWithError:(id *)arg1;	// IMP=0x001000000003213b
- (id)currentOSVersionForValidationWithError:(id *)arg1;	// IMP=0x00100000000320aa
- (_Bool)isApplicableToCurrentDeviceFamilyWithError:(id *)arg1;	// IMP=0x0010000000031d3b
- (_Bool)isCompatibleWithDeviceFamily:(int)arg1;	// IMP=0x0010000000031bc1
@property(readonly, nonatomic) _Bool isLaunchProhibited;
@property(readonly, nonatomic) _Bool isWatchApp;
@property(readonly, copy, nonatomic) NSArray *deviceFamilies;
@property(readonly, copy, nonatomic) NSString *minimumOSVersion;
@property(readonly, nonatomic) _Bool needsDataContainer;
@property(readonly, nonatomic) NSURL *bundleURL;
@property(retain, nonatomic) NSURL *bundleParentDirectoryURL; // @synthesize bundleParentDirectoryURL=_bundleParentDirectoryURL;
- (id)xpcServiceBundlesWithError:(id *)arg1;	// IMP=0x00100000000310bb
- (id)frameworkBundlesWithError:(id *)arg1;	// IMP=0x0010000000030ecc
- (_Bool)validatePluginMetadataWithError:(id *)arg1;	// IMP=0x001000000002fcb3
- (id)pluginKitBundlesWithError:(id *)arg1;	// IMP=0x001000000002fc9c
- (id)pluginKitBundlesPerformingPlatformValidation:(unsigned char)arg1 withError:(id *)arg2;	// IMP=0x001000000002f1b1
- (id)pluginKitBundlesSkippingPlatformValidation:(_Bool)arg1 withError:(id *)arg2;	// IMP=0x001000000002f196
- (_Bool)allowsAppExtensionsNotInExtensionCache;	// IMP=0x001000000002f18e
- (_Bool)setIsPlaceholderWithError:(id *)arg1;	// IMP=0x001000000002eb97
@property(readonly, nonatomic) _Bool isPlaceholder; // @synthesize isPlaceholder=_isPlaceholder;
@property(readonly, copy, nonatomic) NSString *bundleTypeDescription;
@property(readonly, nonatomic) _Bool isStaticContent;
@property(readonly, nonatomic) unsigned char bundleType; // @synthesize bundleType=_bundleType;
@property(readonly, nonatomic) _Bool isRemovableSystemApp;
@property(readonly, copy, nonatomic) NSString *bundleShortVersion;
@property(readonly, copy, nonatomic) NSString *bundleVersion;
@property(readonly, copy, nonatomic) NSString *identifier;
- (id)infoPlistSubset;	// IMP=0x001000000002d5f4
- (id)_infoPlistKeysToLoad;	// IMP=0x001000000002d458
- (id)initWithBundleInDirectory:(id)arg1 withExtension:(id)arg2 error:(id *)arg3;	// IMP=0x001000000002d398
- (id)initWithBundleURL:(id)arg1 error:(id *)arg2;	// IMP=0x001000000002cffb
- (id)initWithParentBundle:(id)arg1 parentSubdirectory:(id)arg2 bundleName:(id)arg3 error:(id *)arg4;	// IMP=0x001000000002cec4
- (id)initWithBundleParentURL:(id)arg1 parentSubdirectory:(id)arg2 bundleName:(id)arg3 error:(id *)arg4;	// IMP=0x001000000002cdc5
- (_Bool)_validateWithError:(id *)arg1;	// IMP=0x001000000002ca10

@end
