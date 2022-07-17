//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSOrderedSet;

__attribute__((visibility("hidden")))
@interface _UIRelationshipTraitStorage
{
    NSOrderedSet *_relationshipCandidates;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000089d916
- (id)_propertyDescriptionString;	// IMP=0x000000000089d889
- (void)applyRecordsMatchingTraitCollection:(id)arg1;	// IMP=0x000000000089d27c
- (void)addRecordWithTraitCollection:(id)arg1 addedObjects:(id)arg2 removedObjects:(id)arg3;	// IMP=0x000000000089cfd9
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000089cf5c
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000089ced0
- (id)initWithObject:(id)arg1 keyPath:(id)arg2 relationshipCandidates:(id)arg3;	// IMP=0x000000000089ce42

@end
