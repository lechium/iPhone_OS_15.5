//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSUUID;

@interface HMCameraClipSignificantEvent
{
    double _timeOffsetWithinClip;	// 8 = 0x8
    NSUUID *_clipUUID;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000001a3238
- (void).cxx_destruct;	// IMP=0x00000000001a3225
@property(readonly, copy) NSUUID *clipUUID; // @synthesize clipUUID=_clipUUID;
@property(readonly) double timeOffsetWithinClip; // @synthesize timeOffsetWithinClip=_timeOffsetWithinClip;
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000001a2f55
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000001a2e99
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001a2d6a
- (id)attributeDescriptions;	// IMP=0x00000000001a2bce
- (id)initWithUniqueIdentifier:(id)arg1 reason:(unsigned long long)arg2 dateOfOccurrence:(id)arg3 confidenceLevel:(unsigned long long)arg4 faceClassification:(id)arg5 timeOffsetWithinClip:(double)arg6 clipUUID:(id)arg7;	// IMP=0x00000000001a2ad7
- (id)initWithUniqueIdentifier:(id)arg1 reason:(unsigned long long)arg2 dateOfOccurrence:(id)arg3 confidenceLevel:(unsigned long long)arg4 cameraProfileUUID:(id)arg5 faceClassification:(id)arg6 timeOffsetWithinClip:(double)arg7 clipUUID:(id)arg8;	// IMP=0x00000000001a29b8

@end
