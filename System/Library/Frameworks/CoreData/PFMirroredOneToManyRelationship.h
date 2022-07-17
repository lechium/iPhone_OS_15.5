//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CKRecordID, NSRelationshipDescription;

__attribute__((visibility("hidden")))
@interface PFMirroredOneToManyRelationship
{
    NSRelationshipDescription *_relationshipDescription;	// 8 = 0x8
    NSRelationshipDescription *_inverseRelationshipDescription;	// 16 = 0x10
    CKRecordID *_relatedRecordID;	// 24 = 0x18
    CKRecordID *_recordID;	// 32 = 0x20
}

- (_Bool)updateRelationshipValueUsingImportContext:(id)arg1 andManagedObjectContext:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000208c5a
- (void)dealloc;	// IMP=0x0000000000208bcb
- (id)initWithManagedObject:(id)arg1 withRecordName:(id)arg2 relatedToRecordWithRecordName:(id)arg3 byRelationship:(id)arg4;	// IMP=0x00000000002089db

@end
