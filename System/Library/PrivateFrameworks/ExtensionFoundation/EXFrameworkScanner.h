//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSOperation.h>

@class NSArray, NSDictionary, NSMutableArray, NSMutableDictionary, NSURL;

@interface EXFrameworkScanner : NSOperation
{
    NSURL *_sourceURL;	// 8 = 0x8
    NSMutableDictionary *__combinedExtensionSDK;	// 16 = 0x10
    NSMutableDictionary *__combinedAppleInternalExtensionSDK;	// 24 = 0x18
    NSMutableArray *__extensions;	// 32 = 0x20
    NSMutableArray *__appleInternalExtensions;	// 40 = 0x28
}

+ (id)rootURL;	// IMP=0x0000000000025d28
+ (id)frameworkPaths;	// IMP=0x0000000000025c7c
- (void).cxx_destruct;	// IMP=0x0000000000027b32
@property(retain) NSMutableArray *_appleInternalExtensions; // @synthesize _appleInternalExtensions=__appleInternalExtensions;
@property(retain) NSMutableArray *_extensions; // @synthesize _extensions=__extensions;
@property(retain) NSMutableDictionary *_combinedAppleInternalExtensionSDK; // @synthesize _combinedAppleInternalExtensionSDK=__combinedAppleInternalExtensionSDK;
@property(retain) NSMutableDictionary *_combinedExtensionSDK; // @synthesize _combinedExtensionSDK=__combinedExtensionSDK;
@property(readonly) NSURL *sourceURL; // @synthesize sourceURL=_sourceURL;
- (void)main;	// IMP=0x000000000002768c
- (void)processExtensionsInDirectory:(id)arg1;	// IMP=0x000000000002743f
- (void)processExtensionsFromBundle:(struct __CFBundle *)arg1;	// IMP=0x00000000000273c9
- (void)processExtensionSDK:(id)arg1 declaringURL:(id)arg2;	// IMP=0x0000000000026f4a
- (void)processExtensionSDKFromFile:(id)arg1;	// IMP=0x0000000000026d69
- (void)processExtensionSDKFromBundle:(struct __CFBundle *)arg1;	// IMP=0x0000000000026cae
- (void)enumerateFrameworksBundlesWithFrameworkURL:(id)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x0000000000026ada
- (void)enumerateAppexptAtURL:(id)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x00000000000266c6
- (void)enumerateBundlesWithPathExtension:(id)arg1 atURL:(id)arg2 block:(CDUnknownBlockType)arg3;	// IMP=0x0000000000026298
- (_Bool)isAppleInternalURL:(id)arg1;	// IMP=0x000000000002608e
- (_Bool)isCatalystSupportURL:(id)arg1;	// IMP=0x0000000000025f6c
@property(readonly) NSArray *appleInternalExtensionPaths; // @dynamic appleInternalExtensionPaths;
@property(readonly) NSArray *extensionPaths; // @dynamic extensionPaths;
@property(readonly) NSDictionary *combinedAppleInternalExtensionSDK; // @dynamic combinedAppleInternalExtensionSDK;
@property(readonly) NSDictionary *combinedExtensionSDK; // @dynamic combinedExtensionSDK;
- (id)initWithSourceURL:(id)arg1;	// IMP=0x0000000000025de7

@end
