//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class PSIStatement;

@interface PSIWordEmbeddingTable
{
    PSIStatement *_insertStatement;	// 8 = 0x8
    PSIStatement *_insertPrefixStatement;	// 16 = 0x10
    PSIStatement *_deleteStatement;	// 24 = 0x18
    PSIStatement *_deletePrefixStatement;	// 32 = 0x20
    PSIStatement *_checkStatement;	// 40 = 0x28
    PSIStatement *_selectMatchesStatement;	// 48 = 0x30
    PSIStatement *_selectStatement;	// 56 = 0x38
    void *_embeddingRef;	// 64 = 0x40
    struct __CFLocale *_locale;	// 72 = 0x48
    _Bool _localeIsGerman;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x000000000051a0cf
- (id)wordEmbeddingVersion;	// IMP=0x000000000051a09a
- (void)removeWord:(id)arg1;	// IMP=0x0000000000519fd5
- (void)insertWord:(id)arg1 synonyms:(id)arg2;	// IMP=0x0000000000519b32
- (_Bool)isInsertedWithWord:(id)arg1;	// IMP=0x0000000000519a14
- (id)wordEmbeddingsForToken:(id)arg1;	// IMP=0x000000000051990e
- (id)matchesForToken:(id)arg1;	// IMP=0x0000000000519808
- (id)dumpWordEmbeddingTable;	// IMP=0x00000000005196cb
- (void)cacheSearchableStatements;	// IMP=0x0000000000519626
- (void)cacheWritableStatements;	// IMP=0x0000000000519503
- (void)clear;	// IMP=0x00000000005194a3
- (void)finalizze;	// IMP=0x00000000005192eb
- (id)initWithDelegate:(id)arg1 searchable:(_Bool)arg2 writable:(_Bool)arg3 locale:(id)arg4;	// IMP=0x0000000000519011

@end
