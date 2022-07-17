//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSSet, NSString, PLDetectedFace, PLPerson;

@interface PLDetectedFaceGroup
{
}

+ (void)batchFetchFaceGroupByFaceUUIDWithFaceUUIDs:(id)arg1 predicate:(id)arg2 library:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00000000000c4603
+ (id)detectedFaceGroupWithUUID:(id)arg1 inManagedObjectContext:(id)arg2;	// IMP=0x00000000000c4488
+ (id)entityName;	// IMP=0x00000000000c447b
- (void)refreshFaces;	// IMP=0x00000000000c4135
- (id)mutableDetectedFaces;	// IMP=0x00000000000c411c
- (void)willSave;	// IMP=0x00000000000c4093
- (void)awakeFromInsert;	// IMP=0x00000000000c401e

// Remaining properties
@property(retain, nonatomic) PLPerson *associatedPerson; // @dynamic associatedPerson;
@property(retain, nonatomic) NSSet *detectedFaces; // @dynamic detectedFaces;
@property(retain, nonatomic) PLDetectedFace *keyFace; // @dynamic keyFace;
@property(nonatomic) int personBuilderState; // @dynamic personBuilderState;
@property(nonatomic) int unnamedFaceCount; // @dynamic unnamedFaceCount;
@property(retain, nonatomic) NSString *uuid; // @dynamic uuid;

@end
