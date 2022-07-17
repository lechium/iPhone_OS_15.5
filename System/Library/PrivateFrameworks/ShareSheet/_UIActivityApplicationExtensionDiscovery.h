//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray;

@interface _UIActivityApplicationExtensionDiscovery : NSObject
{
    NSArray *_extensionPointIdentifiers;	// 8 = 0x8
    CDUnknownBlockType _fetchShortcutsBlock;	// 16 = 0x10
}

+ (id)extensionMatchingDictionariesForExtensionItems:(id)arg1;	// IMP=0x000000000005d7ae
+ (id)extensionBasedActivityForExtension:(id)arg1;	// IMP=0x000000000005d58e
- (void).cxx_destruct;	// IMP=0x000000000005e666
@property(copy, nonatomic) CDUnknownBlockType fetchShortcutsBlock; // @synthesize fetchShortcutsBlock=_fetchShortcutsBlock;
@property(copy, nonatomic) NSArray *extensionPointIdentifiers; // @synthesize extensionPointIdentifiers=_extensionPointIdentifiers;
- (id)reportExtensionsCacheResult;	// IMP=0x000000000005e5dd
- (id)activitiesForMatchingContext:(id)arg1 error:(id *)arg2;	// IMP=0x000000000005e34a
- (id)_extensionsForMatchingContext:(id)arg1 error:(id *)arg2;	// IMP=0x000000000005dd3d
- (void)primeWithDiscoveryContext:(id)arg1;	// IMP=0x000000000005db27
- (void)dealloc;	// IMP=0x000000000005dae7
- (id)init;	// IMP=0x000000000005da3b
- (id)initWithExtensionPointIdentifiers:(id)arg1;	// IMP=0x000000000005d969

@end
