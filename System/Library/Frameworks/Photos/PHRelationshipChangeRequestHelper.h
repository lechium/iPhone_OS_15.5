//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSString, PHChangeRequestHelper;

@interface PHRelationshipChangeRequestHelper : NSObject
{
    _Bool _allowsInsert;	// 8 = 0x8
    _Bool _allowsMove;	// 9 = 0x9
    _Bool _allowsRemove;	// 10 = 0xa
    NSString *_relationshipName;	// 16 = 0x10
    NSString *_destinationEntityName;	// 24 = 0x18
    NSString *_destinationUUIDKeyPath;	// 32 = 0x20
    NSArray *_originalObjectIDs;	// 40 = 0x28
    NSMutableArray *_mutableObjectIDsAndUUIDs;	// 48 = 0x30
    CDUnknownBlockType _isDestinationObjectValid;	// 56 = 0x38
    PHChangeRequestHelper *_changeRequestHelper;	// 64 = 0x40
}

+ (id)existentObjectIDsUsingQuery:(id)arg1;	// IMP=0x000000000006b61c
+ (id)objectIDsOrUUIDsFromPHObjects:(id)arg1;	// IMP=0x000000000006b46f
+ (id)_offsetsFromSourceOIDs:(id)arg1 toManagedObjects:(id)arg2;	// IMP=0x000000000006b1e1
- (void).cxx_destruct;	// IMP=0x000000000006a822
@property(retain, nonatomic) PHChangeRequestHelper *changeRequestHelper; // @synthesize changeRequestHelper=_changeRequestHelper;
@property(copy, nonatomic) CDUnknownBlockType isDestinationObjectValid; // @synthesize isDestinationObjectValid=_isDestinationObjectValid;
@property(retain, nonatomic) NSMutableArray *mutableObjectIDsAndUUIDs; // @synthesize mutableObjectIDsAndUUIDs=_mutableObjectIDsAndUUIDs;
@property(retain, nonatomic) NSArray *originalObjectIDs; // @synthesize originalObjectIDs=_originalObjectIDs;
@property(nonatomic) _Bool allowsRemove; // @synthesize allowsRemove=_allowsRemove;
@property(nonatomic) _Bool allowsMove; // @synthesize allowsMove=_allowsMove;
@property(nonatomic) _Bool allowsInsert; // @synthesize allowsInsert=_allowsInsert;
@property(retain, nonatomic) NSString *destinationUUIDKeyPath; // @synthesize destinationUUIDKeyPath=_destinationUUIDKeyPath;
@property(retain, nonatomic) NSString *destinationEntityName; // @synthesize destinationEntityName=_destinationEntityName;
@property(readonly, nonatomic) NSString *relationshipName; // @synthesize relationshipName=_relationshipName;
- (_Bool)applyMutationsToManagedObjectToOneRelationship:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000069c6f
- (_Bool)applyMutationsToManagedObject:(id)arg1 unorderedMutableChildren:(id)arg2 inserts:(id *)arg3 deletes:(id *)arg4 error:(id *)arg5;	// IMP=0x0000000000068fc6
- (_Bool)applyMutationsToManagedObject:(id)arg1 unorderedMutableChildren:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000068fa1
- (_Bool)applyMutationsToManagedObject:(id)arg1 orderedMutableChildren:(id)arg2 error:(id *)arg3;	// IMP=0x000000000006760f
- (void)prepareIfNeededWithExistentObjectIDs:(id)arg1;	// IMP=0x00000000000674d4
- (void)encodeToXPCDict:(id)arg1;	// IMP=0x000000000006714b
- (id)initWithRelationshipName:(id)arg1 xpcDict:(id)arg2 changeRequestHelper:(id)arg3;	// IMP=0x0000000000066e24
- (id)initWithRelationshipName:(id)arg1 changeRequestHelper:(id)arg2;	// IMP=0x0000000000066d5a

@end

