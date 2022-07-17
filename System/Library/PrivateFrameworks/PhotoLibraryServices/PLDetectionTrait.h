//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class PLDetectedFace;

@interface PLDetectionTrait
{
}

+ (id)fetchDetectionTraitByFaceUUIDWithFaceUUIDs:(id)arg1 library:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000282adc
+ (id)insertIntoManagedObjectContext:(id)arg1 type:(short)arg2 value:(short)arg3 score:(double)arg4 startTime:(double)arg5 duration:(double)arg6;	// IMP=0x0000000000282975
+ (id)entityName;	// IMP=0x0000000000282968
- (id)debugLogDescription;	// IMP=0x0000000000282813
- (void)_touchPersonForPersistenceIfNeeded;	// IMP=0x0000000000282730
- (void)willSave;	// IMP=0x00000000002826a7
- (id)payloadForChangedKeys:(id)arg1;	// IMP=0x00000000003e8f0f
- (id)payloadID;	// IMP=0x00000000003e8e8b

// Remaining properties
@property(retain, nonatomic) PLDetectedFace *detection; // @dynamic detection;
@property(nonatomic) double duration; // @dynamic duration;
@property(nonatomic) double score; // @dynamic score;
@property(nonatomic) double startTime; // @dynamic startTime;
@property(nonatomic) short type; // @dynamic type;
@property(nonatomic) short value; // @dynamic value;

@end
