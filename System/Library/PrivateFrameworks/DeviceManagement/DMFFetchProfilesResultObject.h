//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Catalyst/CATTaskResultObject.h>

@class NSArray;

@interface DMFFetchProfilesResultObject : CATTaskResultObject
{
    NSArray *_profiles;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000024e08
- (void).cxx_destruct;	// IMP=0x00000000000252aa
@property(readonly, copy, nonatomic) NSArray *profiles; // @synthesize profiles=_profiles;
- (id)description;	// IMP=0x0000000000024f9d
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000024f02
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000024e10
- (id)initWithProfiles:(id)arg1;	// IMP=0x0000000000024d8e

@end
