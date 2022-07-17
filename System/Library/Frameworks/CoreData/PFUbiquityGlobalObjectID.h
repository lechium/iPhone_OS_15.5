//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreData/NSCopying-Protocol.h>

@class NSManagedObjectID, NSString;

__attribute__((visibility("hidden")))
@interface PFUbiquityGlobalObjectID : NSObject <NSCopying>
{
    NSString *_storeName;	// 8 = 0x8
    NSString *_entityName;	// 16 = 0x10
    NSString *_primaryKey;	// 24 = 0x18
    NSString *_owningPeerID;	// 32 = 0x20
    unsigned long long _hash;	// 40 = 0x28
    NSManagedObjectID *_managedObjectID;	// 48 = 0x30
    unsigned long long _primaryKeyInteger;	// 56 = 0x38
}

@property(readonly, nonatomic) unsigned long long hash; // @synthesize hash=_hash;
- (long long)compare:(id)arg1;	// IMP=0x000000000028a634
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000028a59a
- (void)updateHash;	// IMP=0x000000000028a4f3
- (id)description;	// IMP=0x000000000028a3d5
- (void)dealloc;	// IMP=0x000000000028a35b
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000028a27b
- (id)initWithCompressedString:(id)arg1 forStoreWithName:(id)arg2 andEntityNames:(id)arg3 primaryKeys:(id)arg4 peerIDs:(id)arg5;	// IMP=0x000000000028a152
- (id)initWithString:(id)arg1;	// IMP=0x000000000028a080
- (id)initWithStoreName:(id)arg1 entityName:(id)arg2 primaryKey:(id)arg3 andPeerID:(id)arg4;	// IMP=0x0000000000289ff0
- (id)initWithStoreName:(id)arg1 entityName:(id)arg2 primaryKeyInteger:(unsigned long long)arg3 andPeerID:(id)arg4;	// IMP=0x0000000000289f3d
- (id)init;	// IMP=0x0000000000289ee4

@end
