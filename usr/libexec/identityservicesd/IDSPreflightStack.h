//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface IDSPreflightStack : NSObject
{
    NSString *_IMSI;	// 8 = 0x8
    NSString *_PLMN;	// 16 = 0x10
    NSArray *_validationMechanisms;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00200000000b2670
@property(readonly, nonatomic) NSArray *validationMechanisms; // @synthesize validationMechanisms=_validationMechanisms;
@property(readonly, nonatomic) NSString *PLMN; // @synthesize PLMN=_PLMN;
@property(readonly, nonatomic) NSString *IMSI; // @synthesize IMSI=_IMSI;
- (id)description;	// IMP=0x00100000000b2520
- (unsigned long long)hash;	// IMP=0x00100000000b2440
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000000b1f90
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000000b1f70
- (id)preflightStackByPoppingMechanism;	// IMP=0x00100000000b1e40
- (id)topMechanism;	// IMP=0x00100000000b1dd0
- (_Bool)containsMechanisms;	// IMP=0x00100000000b1d70
- (_Bool)matchesIMSI:(id)arg1 PLMN:(id)arg2;	// IMP=0x00100000000b1c50
- (id)initWithIMSI:(id)arg1 PLMN:(id)arg2 validationMechanisms:(id)arg3;	// IMP=0x00100000000b1ae0

@end
