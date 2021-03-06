//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSMutableDictionary, NSString, NSURL;

@interface NSBundle : NSObject
{
    unsigned long long _flags;	// 8 = 0x8
    _Atomic struct __CFBundle *_cfBundle;	// 16 = 0x10
    NSMutableDictionary *_attributedStringTable;	// 24 = 0x18
    Class _principalClass;	// 32 = 0x20
    id _initialPath;	// 40 = 0x28
    id _resolvedPath;	// 48 = 0x30
    NSString *_firstClassName;	// 56 = 0x38
    struct os_unfair_lock_s _lock;	// 64 = 0x40
}

+ (id)preferredLocalizationsFromArray:(id)arg1 forPreferences:(id)arg2;	// IMP=0x000000000001add2
+ (id)preferredLocalizationsFromArray:(id)arg1;	// IMP=0x000000000001adb1
+ (id)debugDescription;	// IMP=0x000000000001ac13
+ (id)mainBundle;	// IMP=0x000000000001aab0
+ (id)allFrameworks;	// IMP=0x000000000001a7f3
+ (id)allBundles;	// IMP=0x000000000001a7d0
+ (id)loadedBundles;	// IMP=0x000000000001a7b7
+ (id)bundleForClass:(Class)arg1;	// IMP=0x0000000000019fb4
+ (id)_bundleWithIdentifier:(id)arg1 andLibraryName:(id)arg2;	// IMP=0x0000000000019463
+ (id)bundleWithIdentifier:(id)arg1;	// IMP=0x00000000000193e7
+ (id)bundleWithURL:(id)arg1;	// IMP=0x00000000000193b8
+ (id)bundleWithPath:(id)arg1;	// IMP=0x00000000000192a4
+ (void)setSystemLanguages:(id)arg1;	// IMP=0x0000000000018770
+ (id)URLsForResourcesWithExtension:(id)arg1 subdirectory:(id)arg2 inBundleWithURL:(id)arg3;	// IMP=0x00000000000181d2
+ (id)pathsForResourcesOfType:(id)arg1 inDirectory:(id)arg2;	// IMP=0x00000000000180d7
+ (id)URLForResource:(id)arg1 withExtension:(id)arg2 subdirectory:(id)arg3 inBundleWithURL:(id)arg4;	// IMP=0x0000000000018060
+ (id)pathForResource:(id)arg1 ofType:(id)arg2 inDirectory:(id)arg3;	// IMP=0x0000000000017fae
+ (id)findBundleResourceURLsCallingMethod:(SEL)arg1 baseURL:(id)arg2 passingTest:(CDUnknownBlockType)arg3;	// IMP=0x0000000000017e0d
+ (id)findBundleResources:(id)arg1 callingMethod:(SEL)arg2 directory:(id)arg3 languages:(id)arg4 name:(id)arg5 types:(id)arg6 limit:(unsigned long long)arg7;	// IMP=0x0000000000017a98
- (id)_localizedStringNoCacheNoMarkdownParsingForKey:(id)arg1 value:(id)arg2 table:(id)arg3 localization:(id)arg4 actualTableURL:(id *)arg5 formatSpecifierConfiguration:(id *)arg6;	// IMP=0x000000000001b3c6
- (id)localizedAttributedStringForKey:(id)arg1 value:(id)arg2 table:(id)arg3 localization:(id)arg4;	// IMP=0x000000000001affe
- (id)localizedAttributedStringForKey:(id)arg1 value:(id)arg2 table:(id)arg3;	// IMP=0x000000000001afe9
@property(readonly, copy) NSArray *executableArchitectures;
- (_Bool)preflightAndReturnError:(id *)arg1;	// IMP=0x000000000001adf6
@property(readonly, copy) NSString *developmentLocalization;
@property(readonly, copy) NSArray *preferredLocalizations;
@property(readonly, copy) NSArray *localizations;
- (id)pathsForResourcesOfType:(id)arg1 inDirectory:(id)arg2 forLanguage:(id)arg3;	// IMP=0x000000000001ad0b
- (id)pathForResource:(id)arg1 ofType:(id)arg2 inDirectory:(id)arg3 forLanguage:(id)arg4;	// IMP=0x000000000001acf9
- (id)_pathsForResourcesOfType:(id)arg1 inDirectory:(id)arg2 forRegion:(id)arg3;	// IMP=0x000000000001ace7
- (id)_pathForResource:(id)arg1 ofType:(id)arg2 inDirectory:(id)arg3 forRegion:(id)arg4;	// IMP=0x000000000001acd5
- (id)_regionsArray;	// IMP=0x000000000001acc3
- (id)description;	// IMP=0x000000000001ac3e
- (void)__static;	// IMP=0x000000000001a7e9
- (id)objectForInfoDictionaryKey:(id)arg1;	// IMP=0x000000000001a741
@property(readonly, copy) NSDictionary *localizedInfoDictionary;
@property(readonly, copy) NSDictionary *infoDictionary;
@property(readonly) Class principalClass;
- (Class)classNamed:(id)arg1;	// IMP=0x0000000000019f00
- (void)invalidateResourceCache;	// IMP=0x0000000000019edf
- (id)bundleLanguages;	// IMP=0x0000000000019d7c
- (unsigned long long)versionNumber;	// IMP=0x0000000000019d56
@property(readonly, copy) NSString *bundleIdentifier;
@property(readonly, copy) NSURL *builtInPlugInsURL;
@property(readonly, copy) NSString *builtInPlugInsPath;
@property(readonly, copy) NSURL *sharedSupportURL;
@property(readonly, copy) NSString *sharedSupportPath;
@property(readonly, copy) NSURL *sharedFrameworksURL;
@property(readonly, copy) NSString *sharedFrameworksPath;
@property(readonly, copy) NSURL *privateFrameworksURL;
@property(readonly, copy) NSString *privateFrameworksPath;
- (id)URLForAuxiliaryExecutable:(id)arg1;	// IMP=0x0000000000019afa
- (id)pathForAuxiliaryExecutable:(id)arg1;	// IMP=0x0000000000019a9f
- (id)_wrapperContainerURL;	// IMP=0x0000000000019a74
- (id)_wrappedBundleURL;	// IMP=0x0000000000019a49
@property(readonly, copy) NSURL *appStoreReceiptURL;
@property(readonly, copy) NSURL *executableURL;
@property(readonly, copy) NSString *executablePath;
@property(readonly, copy) NSURL *resourceURL;
@property(readonly, copy) NSString *resourcePath;
@property(readonly, copy) NSURL *bundleURL;
@property(readonly, copy) NSString *bundlePath;
- (id)initWithPath:(id)arg1;	// IMP=0x0000000000019517
- (id)initWithURL:(id)arg1;	// IMP=0x00000000000192d3
- (void)dealloc;	// IMP=0x000000000001904e
@property(readonly, getter=isLoaded) _Bool loaded;
- (_Bool)unload;	// IMP=0x0000000000018fbe
- (_Bool)loadAndReturnError:(id *)arg1;	// IMP=0x0000000000018797
- (_Bool)load;	// IMP=0x0000000000018783
- (_Bool)_searchForLocalizedString:(id)arg1 foundKey:(id *)arg2 foundTable:(id *)arg3;	// IMP=0x00000000000186c3
- (id)localizedStringForKey:(id)arg1 value:(id)arg2 table:(id)arg3 localization:(id)arg4;	// IMP=0x0000000000018672
- (id)localizedStringForKey:(id)arg1 value:(id)arg2 table:(id)arg3;	// IMP=0x0000000000018626
- (id)URLsForResourcesWithExtension:(id)arg1 subdirectory:(id)arg2;	// IMP=0x00000000000185e9
- (id)pathsForResourcesOfType:(id)arg1 inDirectory:(id)arg2;	// IMP=0x000000000001850e
- (id)URLsForResourcesWithExtension:(id)arg1 subdirectory:(id)arg2 localization:(id)arg3;	// IMP=0x00000000000184c2
- (id)pathsForResourcesOfType:(id)arg1 inDirectory:(id)arg2 forLocalization:(id)arg3;	// IMP=0x00000000000183e1
- (id)URLForResource:(id)arg1 withExtension:(id)arg2;	// IMP=0x00000000000183cc
- (id)pathForResource:(id)arg1 ofType:(id)arg2;	// IMP=0x0000000000018378
- (id)URLForResource:(id)arg1 withExtension:(id)arg2 subdirectory:(id)arg3;	// IMP=0x00000000000182e8
- (id)pathForResource:(id)arg1 ofType:(id)arg2 inDirectory:(id)arg3;	// IMP=0x00000000000182bd
- (id)URLForResource:(id)arg1 withExtension:(id)arg2 subdirectory:(id)arg3 localization:(id)arg4;	// IMP=0x0000000000018218
- (id)pathForResource:(id)arg1 ofType:(id)arg2 inDirectory:(id)arg3 forLocalization:(id)arg4;	// IMP=0x00000000000181ed
- (id)findBundleResourceURLsCallingMethod:(SEL)arg1 passingTest:(CDUnknownBlockType)arg2;	// IMP=0x0000000000017c62
- (struct __CFBundle *)_cfBundleIfPresent;	// IMP=0x0000000000017a8e
- (struct __CFBundle *)_cfBundle;	// IMP=0x0000000000017a34
- (double)preservationPriorityForTag:(id)arg1;	// IMP=0x000000000012f7b8
- (void)setPreservationPriority:(double)arg1 forTag:(id)arg2;	// IMP=0x000000000012f76e
- (void)setPreservationPriority:(double)arg1 forTags:(id)arg2;	// IMP=0x000000000012f4e6

@end

