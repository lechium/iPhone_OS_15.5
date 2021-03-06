//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray;

@interface PHCollectionListReference
{
    long long _collectionListType;	// 48 = 0x30
    long long _collectionListSubtype;	// 56 = 0x38
    NSArray *_transientCollectionReferences;	// 64 = 0x40
}

+ (id)referenceForCollectionList:(id)arg1;	// IMP=0x00000000001843bc
+ (id)representedType;	// IMP=0x00000000001843af
- (void).cxx_destruct;	// IMP=0x000000000018439c
@property(readonly, copy, nonatomic) NSArray *transientCollectionReferences; // @synthesize transientCollectionReferences=_transientCollectionReferences;
@property(readonly, nonatomic) long long collectionListSubtype; // @synthesize collectionListSubtype=_collectionListSubtype;
@property(readonly, nonatomic) long long collectionListType; // @synthesize collectionListType=_collectionListType;
- (id)_transientCollectionInLibrary:(id)arg1;	// IMP=0x0000000000183fa4
- (_Bool)transient;	// IMP=0x0000000000183f71
- (id)dictionaryForReferenceType:(id)arg1;	// IMP=0x0000000000183e19
- (id)initWithDictionary:(id)arg1 referenceType:(id)arg2;	// IMP=0x0000000000183c23
- (id)initWithLocalIdentifier:(id)arg1 libraryURL:(id)arg2 collectionListType:(long long)arg3 collectionListSubtype:(long long)arg4;	// IMP=0x0000000000183bf8
- (id)initWithLocalIdentifier:(id)arg1 libraryURL:(id)arg2 collectionListType:(long long)arg3 collectionListSubtype:(long long)arg4 collectionReferences:(id)arg5 transientIdentifier:(id)arg6 transientTitle:(id)arg7;	// IMP=0x0000000000183b3c

@end

