//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDictionary, NSString;

@interface DMFInstallConfigurationRequest
{
    unsigned long long _type;	// 8 = 0x8
    NSString *_managingProfileIdentifier;	// 16 = 0x10
    NSDictionary *_profile;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000029251
+ (_Bool)isPermittedOnUserConnection;	// IMP=0x0000000000029249
+ (_Bool)isPermittedOnSystemConnection;	// IMP=0x0000000000029241
+ (id)permittedPlatforms;	// IMP=0x0000000000029234
- (void).cxx_destruct;	// IMP=0x0000000000029652
@property(copy, nonatomic) NSDictionary *profile; // @synthesize profile=_profile;
@property(copy, nonatomic) NSString *managingProfileIdentifier; // @synthesize managingProfileIdentifier=_managingProfileIdentifier;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000294cc
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000029259

@end

