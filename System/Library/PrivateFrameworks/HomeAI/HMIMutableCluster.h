//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

#import <HomeAI/HMFLogging-Protocol.h>

@class HMIDESMutableFloatArray, HMIFaceRecognition, NSMutableArray, NSMutableSet, NSString;

@interface HMIMutableCluster : HMFObject <HMFLogging>
{
    HMIDESMutableFloatArray *_faceCentroid;	// 8 = 0x8
    HMIDESMutableFloatArray *_torsoCentroid;	// 16 = 0x10
    HMIFaceRecognition *_faceRecognition;	// 24 = 0x18
    NSMutableArray *_torsoprints;	// 32 = 0x20
    NSMutableArray *_faceprintUUIDs;	// 40 = 0x28
    NSMutableArray *_torsoprintUUIDs;	// 48 = 0x30
    NSMutableSet *_linkedEntityUUIDs;	// 56 = 0x38
}

+ (id)logCategory;	// IMP=0x000000000000668b
- (void).cxx_destruct;	// IMP=0x000000000000674b
@property(retain, nonatomic) NSMutableSet *linkedEntityUUIDs; // @synthesize linkedEntityUUIDs=_linkedEntityUUIDs;
@property(retain, nonatomic) NSMutableArray *torsoprintUUIDs; // @synthesize torsoprintUUIDs=_torsoprintUUIDs;
@property(retain, nonatomic) NSMutableArray *faceprintUUIDs; // @synthesize faceprintUUIDs=_faceprintUUIDs;
@property(retain) NSMutableArray *torsoprints; // @synthesize torsoprints=_torsoprints;
@property(retain) HMIFaceRecognition *faceRecognition; // @synthesize faceRecognition=_faceRecognition;
@property(readonly) HMIDESMutableFloatArray *torsoCentroid; // @synthesize torsoCentroid=_torsoCentroid;
@property(readonly) HMIDESMutableFloatArray *faceCentroid; // @synthesize faceCentroid=_faceCentroid;
- (void)flushTorsoprints;	// IMP=0x000000000000664b
- (void)addTorsoprints:(id)arg1;	// IMP=0x00000000000062aa
- (void)addFaceprints:(id)arg1;	// IMP=0x0000000000005f59
- (void)addLinkedEntityUUIDs:(id)arg1;	// IMP=0x0000000000005f17
@property(readonly) unsigned long long torsoCount;
@property(readonly) unsigned long long faceCount;
- (id)initWithTorsoprint:(id)arg1;	// IMP=0x0000000000005c90
- (id)initWithFaceprint:(id)arg1;	// IMP=0x0000000000005a97

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
