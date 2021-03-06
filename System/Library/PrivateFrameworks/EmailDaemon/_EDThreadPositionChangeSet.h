//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <EmailDaemon/NSCopying-Protocol.h>

@class NSMutableDictionary, NSMutableSet;

@interface _EDThreadPositionChangeSet : NSObject <NSCopying>
{
    NSMutableDictionary *_objectIDsToAddByBeforeObjectID;	// 8 = 0x8
    NSMutableDictionary *_objectIDsToMoveByBeforeObjectID;	// 16 = 0x10
    NSMutableSet *_objectIDsToDelete;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000ea045
@property(retain, nonatomic) NSMutableSet *objectIDsToDelete; // @synthesize objectIDsToDelete=_objectIDsToDelete;
@property(retain, nonatomic) NSMutableDictionary *objectIDsToMoveByBeforeObjectID; // @synthesize objectIDsToMoveByBeforeObjectID=_objectIDsToMoveByBeforeObjectID;
@property(retain, nonatomic) NSMutableDictionary *objectIDsToAddByBeforeObjectID; // @synthesize objectIDsToAddByBeforeObjectID=_objectIDsToAddByBeforeObjectID;
- (_Bool)isDeletingObjectID:(id)arg1;	// IMP=0x00000000000e9f68
- (_Bool)_isMovingObjectID:(id)arg1;	// IMP=0x00000000000e9dfb
- (_Bool)isAddingObjectID:(id)arg1;	// IMP=0x00000000000e9c8e
- (void)addObjectIDToDelete:(id)arg1;	// IMP=0x00000000000e9c06
- (_Bool)addObjectIDToMove:(id)arg1 before:(id)arg2;	// IMP=0x00000000000e944d
- (_Bool)addObjectIDToAdd:(id)arg1 before:(id)arg2;	// IMP=0x00000000000e8f51
- (id)description;	// IMP=0x00000000000e824a
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000e823f
- (id)init;	// IMP=0x00000000000e8191

@end

