//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CDMFoundation/CDMBaseTrie-Protocol.h>

@class NSNumber, NSString;

@interface CDMMarisaTrie : NSObject <CDMBaseTrie>
{
    NSString *_filePath;	// 8 = 0x8
    struct Trie _readOnlyTrie;	// 16 = 0x10
    NSNumber *_versionNumber;	// 24 = 0x18
}

- (id).cxx_construct;	// IMP=0x000000000006c22f
- (void).cxx_destruct;	// IMP=0x000000000006c1fe
- (id)_readCachedNumberValueForKey:(id)arg1;	// IMP=0x000000000006c022
- (_Bool)_loadTrie;	// IMP=0x000000000006bf4d
- (id)traversePrefix:(id)arg1;	// IMP=0x000000000006bdfc
- (_Bool)hasPrefix:(id)arg1;	// IMP=0x000000000006bd5d
- (_Bool)hasEntry:(id)arg1;	// IMP=0x000000000006bcbe
- (_Bool)createFromEntries:(id)arg1 withHashValue:(id)arg2;	// IMP=0x000000000006b898
- (_Bool)createFromEntries:(id)arg1;	// IMP=0x000000000006b87e
@property(readonly, nonatomic) NSNumber *hashValue;
@property(readonly, nonatomic) _Bool isValid;
- (void)dealloc;	// IMP=0x000000000006b77f
- (id)initWithFilePath:(id)arg1 versionNumber:(id)arg2;	// IMP=0x000000000006b580

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

