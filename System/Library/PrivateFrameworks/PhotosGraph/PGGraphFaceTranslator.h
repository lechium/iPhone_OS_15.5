//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface PGGraphFaceTranslator
{
}

+ (_Bool)includesRelationshipChanges;	// IMP=0x00000000004e8581
+ (id)entityClassName;	// IMP=0x00000000004e8568
- (id)_momentChangesForFaceLocalIdentifiers:(id)arg1;	// IMP=0x00000000004e8c21
- (id)graphChangesForChangedPropertyNamesByLocalIdentifier:(id)arg1 change:(id)arg2 progressBlock:(CDUnknownBlockType)arg3;	// IMP=0x00000000004e872b
- (id)graphChangesForDeletedLocalIdentifiers:(id)arg1 progressBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000000004e865a
- (id)graphChangesForInsertedLocalIdentifiers:(id)arg1 progressBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000000004e8589

@end

