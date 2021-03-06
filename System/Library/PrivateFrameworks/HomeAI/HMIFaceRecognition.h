//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

#import <HomeAI/HMFLogging-Protocol.h>
#import <HomeAI/NSSecureCoding-Protocol.h>

@class HMIFaceCrop, HMIFaceprint, NSSet, NSString, NSUUID;

@interface HMIFaceRecognition : HMFObject <HMFLogging, NSSecureCoding>
{
    HMIFaceCrop *_faceCrop;	// 8 = 0x8
    HMIFaceprint *_faceprint;	// 16 = 0x10
    NSSet *_classifications;	// 24 = 0x18
    double _faceQualityScore;	// 32 = 0x20
    NSUUID *_sessionEntityUUID;	// 40 = 0x28
    NSSet *_predictedLinkedEntityUUIDs;	// 48 = 0x30
    long long _sessionEntityAssignment;	// 56 = 0x38
}

+ (id)logCategory;	// IMP=0x00000000000ce639
+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000ce1dc
- (void).cxx_destruct;	// IMP=0x00000000000ce6d4
@property(readonly) long long sessionEntityAssignment; // @synthesize sessionEntityAssignment=_sessionEntityAssignment;
@property(readonly) NSSet *predictedLinkedEntityUUIDs; // @synthesize predictedLinkedEntityUUIDs=_predictedLinkedEntityUUIDs;
@property(readonly) NSUUID *sessionEntityUUID; // @synthesize sessionEntityUUID=_sessionEntityUUID;
@property(readonly) double faceQualityScore; // @synthesize faceQualityScore=_faceQualityScore;
@property(readonly) NSSet *classifications; // @synthesize classifications=_classifications;
@property(readonly) HMIFaceprint *faceprint; // @synthesize faceprint=_faceprint;
@property(readonly) HMIFaceCrop *faceCrop; // @synthesize faceCrop=_faceCrop;
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000ce375
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000ce1e4
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000cdeac
- (id)attributeDescriptions;	// IMP=0x00000000000cdc2a
@property(readonly, copy) NSString *description;
- (id)initWithFaceCrop:(id)arg1 faceprint:(id)arg2 classifications:(id)arg3 predictedLinkedEntityUUIDs:(id)arg4 faceQualityScore:(double)arg5 sessionEntityAssignment:(long long)arg6 sessionEntityUUID:(id)arg7;	// IMP=0x00000000000cdadc
- (id)initWithFaceCrop:(id)arg1 faceprint:(id)arg2 classifications:(id)arg3 predictedLinkedEntityUUIDs:(id)arg4;	// IMP=0x00000000000cd984
- (id)initWithFaceCrop:(id)arg1 faceprint:(id)arg2 classifications:(id)arg3;	// IMP=0x00000000000cd848

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

