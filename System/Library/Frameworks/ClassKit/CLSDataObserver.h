//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ClassKit/CLSChangeNotifiable-Protocol.h>
#import <ClassKit/CLSPredicateValueNormalizer-Protocol.h>

@class CLSDataStore, CLSQuerySpecification, NSArray, NSPredicate, NSString;

@interface CLSDataObserver : NSObject <CLSPredicateValueNormalizer, CLSChangeNotifiable>
{
    _Bool _invalidated;	// 8 = 0x8
    CLSQuerySpecification *_querySpec;	// 16 = 0x10
    NSString *_observerID;	// 24 = 0x18
    CDUnknownBlockType _dataChanged;	// 32 = 0x20
    CLSDataStore *_dataStore;	// 40 = 0x28
    unsigned long long _changeTag;	// 48 = 0x30
}

+ (id)predicateForUnexpiredObjects;	// IMP=0x000000000007df72
+ (id)predicateForCollaborationStatesForObjectWithID:(id)arg1 domain:(long long)arg2;	// IMP=0x000000000007deb8
+ (id)predicateForCollaborationStatesForObjectWithID:(id)arg1 ownerPersonID:(id)arg2;	// IMP=0x000000000007de72
+ (id)predicateForCollaborationStatesForObjectWithID:(id)arg1;	// IMP=0x000000000007de60
+ (id)predicateForCollaborationStateForObjectWithID:(id)arg1 ownerPersonID:(id)arg2 domain:(long long)arg3;	// IMP=0x000000000007dd7f
+ (id)predicateForObjectsWithParentObjectID:(id)arg1 andRole:(unsigned long long)arg2;	// IMP=0x000000000007dcba
+ (id)predicateForObjectsWithPersonID:(id)arg1 andRole:(unsigned long long)arg2;	// IMP=0x000000000007dbf5
+ (id)predicateForObjectsWithIdentifier:(id)arg1;	// IMP=0x000000000007dbc6
+ (id)predicateForObjectsWithParentObjectID:(id)arg1;	// IMP=0x000000000007db97
+ (id)predicateForObjectsWithObjectIDs:(id)arg1;	// IMP=0x000000000007db68
+ (id)predicateForObjectWithObjectID:(id)arg1;	// IMP=0x000000000007db39
- (void).cxx_destruct;	// IMP=0x000000000007e88c
@property unsigned long long changeTag; // @synthesize changeTag=_changeTag;
@property(nonatomic) __weak CLSDataStore *dataStore; // @synthesize dataStore=_dataStore;
@property(copy, nonatomic) CDUnknownBlockType dataChanged; // @synthesize dataChanged=_dataChanged;
@property(readonly, nonatomic) NSString *observerID; // @synthesize observerID=_observerID;
@property(getter=isInvalidated) _Bool invalidated; // @synthesize invalidated=_invalidated;
@property(readonly, nonatomic) CLSQuerySpecification *querySpec; // @synthesize querySpec=_querySpec;
- (id)normalizedValue:(id)arg1 forKeyPath:(id)arg2;	// IMP=0x000000000007e684
- (id)normalizeKeyPath:(id)arg1 forValue:(id)arg2;	// IMP=0x000000000007e42f
@property(readonly, copy) NSString *description;
- (oneway void)clientRemote_itemChanged:(unsigned long long)arg1;	// IMP=0x000000000007e0ca
- (oneway void)clientRemote_invalidate;	// IMP=0x000000000007e04d
- (void)reset;	// IMP=0x000000000007e034
@property(copy, nonatomic) NSArray *sortDescriptors;
@property(readonly, nonatomic) NSPredicate *predicate;
@property(readonly, nonatomic) NSString *className;
@property(readonly, nonatomic) Class objectType;
- (id)initWithObjectType:(Class)arg1 predicate:(id)arg2 sortDescriptors:(id)arg3 error:(id *)arg4;	// IMP=0x000000000007d9c0
- (id)initWithObjectType:(Class)arg1 predicate:(id)arg2 sortDescriptors:(id)arg3;	// IMP=0x000000000007d919
- (id)initWithQuerySpecification:(id)arg1 error:(id *)arg2;	// IMP=0x000000000007d64a
- (id)init;	// IMP=0x000000000007d58d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

