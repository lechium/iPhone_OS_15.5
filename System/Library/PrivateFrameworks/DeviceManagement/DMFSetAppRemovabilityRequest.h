//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSNumber;

@interface DMFSetAppRemovabilityRequest
{
    NSNumber *_removable;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000039c45
+ (_Bool)isPermittedOnUserConnection;	// IMP=0x0000000000039c3d
+ (_Bool)isPermittedOnSystemConnection;	// IMP=0x0000000000039c35
+ (id)permittedPlatforms;	// IMP=0x0000000000039c28
- (void).cxx_destruct;	// IMP=0x0000000000039de1
@property(copy, nonatomic) NSNumber *removable; // @synthesize removable=_removable;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000039d24
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000039c4d

@end

