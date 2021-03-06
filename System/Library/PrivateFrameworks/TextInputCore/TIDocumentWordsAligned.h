//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary;

@interface TIDocumentWordsAligned : NSObject
{
    NSMutableArray *_inDocumentWordsStack;	// 8 = 0x8
    NSMutableDictionary *_leftContextToWordMap;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000b7d9a
@property(retain, nonatomic) NSMutableDictionary *leftContextToWordMap; // @synthesize leftContextToWordMap=_leftContextToWordMap;
@property(retain, nonatomic) NSMutableArray *inDocumentWordsStack; // @synthesize inDocumentWordsStack=_inDocumentWordsStack;
- (id)lastWord;	// IMP=0x00000000000b7cea
- (id)description;	// IMP=0x00000000000b7c93
- (unsigned long long)wordsCount;	// IMP=0x00000000000b7c4f
- (id)wordsFromContext:(id)arg1;	// IMP=0x00000000000b7c3b
- (id)deleteWordsUpToContext:(id)arg1;	// IMP=0x00000000000b7c24
- (id)_wordsFromContext:(id)arg1 shouldDelete:(_Bool)arg2;	// IMP=0x00000000000b7683
- (id)updateWordEntryAtIndex:(unsigned long long)arg1 withAcceptedString:(id)arg2 documentContext:(id)arg3;	// IMP=0x00000000000b74a4
- (void)insertWord:(id)arg1 atIndex:(long long)arg2;	// IMP=0x00000000000b7357
- (id)wordsForContext:(id)arg1;	// IMP=0x00000000000b7273
- (void)removeFromContextMap:(id)arg1;	// IMP=0x00000000000b71c2
- (void)addToContextMap:(id)arg1;	// IMP=0x00000000000b7065
- (void)pushWordToDocument:(id)arg1;	// IMP=0x00000000000b6fa8
- (id)init;	// IMP=0x00000000000b6f0e

@end

