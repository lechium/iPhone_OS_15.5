//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Vision/NSCopying-Protocol.h>
#import <Vision/NSSecureCoding-Protocol.h>

@interface VNPersonsModelConfiguration : NSObject <NSCopying, NSSecureCoding>
{
    unsigned long long _maximumIdentities;	// 8 = 0x8
    unsigned long long _maximumTrainingFaceprintsPerIdentity;	// 16 = 0x10
    unsigned long long _faceprintRequestRevision;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000c7e05
+ (unsigned long long)maximumAllowableFaceprintsPerIdentity;	// IMP=0x00000000000c7dfa
+ (unsigned long long)maximumAllowableIdentities;	// IMP=0x00000000000c7def
@property(nonatomic) unsigned long long faceprintRequestRevision; // @synthesize faceprintRequestRevision=_faceprintRequestRevision;
@property(nonatomic) unsigned long long maximumIdentities; // @synthesize maximumIdentities=_maximumIdentities;
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000c7d01
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000c7c75
- (id)description;	// IMP=0x00000000000c7b2a
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000c7a12
- (unsigned long long)hash;	// IMP=0x00000000000c79bc
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000c795b
@property(nonatomic) unsigned long long maximumTrainingFaceprintsPerIdentity; // @synthesize maximumTrainingFaceprintsPerIdentity=_maximumTrainingFaceprintsPerIdentity;
- (id)init;	// IMP=0x00000000000c7876
- (int)faceIDModelMaximumElementsPerID;	// IMP=0x000000000014ff87

@end

