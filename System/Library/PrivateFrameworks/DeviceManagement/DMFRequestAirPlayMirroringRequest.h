//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface DMFRequestAirPlayMirroringRequest
{
    _Bool _force;	// 8 = 0x8
    NSString *_destinationName;	// 16 = 0x10
    NSString *_destinationDeviceID;	// 24 = 0x18
    NSString *_password;	// 32 = 0x20
    double _scanWaitInterval;	// 40 = 0x28
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000036d98
+ (_Bool)isPermittedOnUserConnection;	// IMP=0x0000000000036d90
+ (_Bool)isPermittedOnSystemConnection;	// IMP=0x0000000000036d88
+ (id)permittedPlatforms;	// IMP=0x0000000000036d7b
+ (Class)whitelistedClassForResultObject;	// IMP=0x0000000000036d6a
- (void).cxx_destruct;	// IMP=0x000000000003723f
@property(nonatomic) double scanWaitInterval; // @synthesize scanWaitInterval=_scanWaitInterval;
@property(nonatomic) _Bool force; // @synthesize force=_force;
@property(copy, nonatomic) NSString *password; // @synthesize password=_password;
@property(copy, nonatomic) NSString *destinationDeviceID; // @synthesize destinationDeviceID=_destinationDeviceID;
@property(copy, nonatomic) NSString *destinationName; // @synthesize destinationName=_destinationName;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000036ff3
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000036da0

@end

