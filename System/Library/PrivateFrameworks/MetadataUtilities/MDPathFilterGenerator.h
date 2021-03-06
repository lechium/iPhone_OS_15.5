//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableArray, NSMutableDictionary;

@interface MDPathFilterGenerator : NSObject
{
    NSMutableDictionary *_namedRoots;	// 8 = 0x8
    NSMutableArray *_namedRootArray;	// 16 = 0x10
    NSMutableDictionary *_namedRootIndexes;	// 24 = 0x18
    NSMutableArray *_auxValueArray;	// 32 = 0x20
    int _nextAuxValueIndex;	// 40 = 0x28
    _Bool _processExtensions;	// 44 = 0x2c
    int _auxValueCount;	// 48 = 0x30
    NSMutableDictionary *_namedLinkExtensionsDictionary;	// 56 = 0x38
    NSDictionary *_namedLinkPrefixesDictionary;	// 64 = 0x40
    unsigned long long _atBundleMask;	// 72 = 0x48
    unsigned long long _inBundleMask;	// 80 = 0x50
    unsigned long long _inheritMask;	// 88 = 0x58
    unsigned long long _defaultRule;	// 96 = 0x60
    unsigned long long _defaultMask;	// 104 = 0x68
    unsigned long long _ignoreMask;	// 112 = 0x70
}

- (void)dump;	// IMP=0x000000000001fcf7
- (id)filterDataForMountDepth:(int)arg1;	// IMP=0x000000000001fc63
- (struct _MDPlistContainer *)copyFilterMDPlistForMountDepth:(int)arg1;	// IMP=0x000000000001f283
- (void)addRules:(CDStruct_bcaf8faf *)arg1 withPrefix:(id)arg2 tableMapping:(id)arg3;	// IMP=0x000000000001eefc
- (void)addRules:(CDStruct_bcaf8faf *)arg1 withPrefix:(id)arg2;	// IMP=0x000000000001eee7
- (void)addNamed:(id)arg1 auxValue:(unsigned long long)arg2 forPath:(id)arg3;	// IMP=0x000000000001eeb2
- (void)addNamed:(id)arg1 field:(int)arg2 value:(int)arg3 forPath:(id)arg4 permitLink:(_Bool)arg5;	// IMP=0x000000000001eca8
- (void)addNamed:(id)arg1 field:(int)arg2 value:(int)arg3 hasAuxValue:(_Bool)arg4 auxValue:(unsigned long long)arg5 forPath:(id)arg6 permitLink:(_Bool)arg7 copyParentWildcardLink:(_Bool)arg8;	// IMP=0x000000000001ea86
- (void)setAtBundleField:(unsigned int)arg1 inBundleField:(unsigned int)arg2;	// IMP=0x000000000001ea48
- (void)addMappedExtensions:(id)arg1;	// IMP=0x000000000001ea32
- (void)dealloc;	// IMP=0x000000000001e9cc
- (id)initWithDefaultFieldsAndValues:(int *)arg1 ignoreFields:(int *)arg2 mappedPrefixes:(id)arg3 hiddenExtensions:(id)arg4 mappedExtensions:(id)arg5;	// IMP=0x000000000001e830

@end

