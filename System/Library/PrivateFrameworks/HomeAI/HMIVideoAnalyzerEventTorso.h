//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HMITorsoRecognition, NSNumber, NSUUID;

@interface HMIVideoAnalyzerEventTorso
{
    HMITorsoRecognition *_torsoRecognition;	// 8 = 0x8
    NSNumber *_roll;	// 16 = 0x10
}

+ (id)logCategory;	// IMP=0x00000000000da030
+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000d9de7
- (void).cxx_destruct;	// IMP=0x00000000000da066
@property(readonly) NSNumber *roll; // @synthesize roll=_roll;
@property(readonly) HMITorsoRecognition *torsoRecognition; // @synthesize torsoRecognition=_torsoRecognition;
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000d9ec3
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000d9def
- (unsigned long long)hash;	// IMP=0x00000000000d9db8
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000d9d23
- (id)attributeDescriptions;	// IMP=0x00000000000d9b9f
@property(readonly) NSUUID *sessionEntityUUID;
- (id)initWithConfidence:(id)arg1 boundingBox:(struct CGRect)arg2 roll:(id)arg3 torsoRecognition:(id)arg4;	// IMP=0x00000000000d9a54
- (id)initWithConfidence:(id)arg1 boundingBox:(struct CGRect)arg2;	// IMP=0x00000000000d9a3d

@end
