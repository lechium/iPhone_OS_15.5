//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <DeviceManagement/CATTaskRequest.h>

@class NSString;

@interface CRKGenerateIdentityRequest : CATTaskRequest
{
    NSString *_commonName;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000b21e7
+ (Class)whitelistedClassForResultObject;	// IMP=0x00000000000b21d6
- (void).cxx_destruct;	// IMP=0x00000000000b2383
@property(copy, nonatomic) NSString *commonName; // @synthesize commonName=_commonName;
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000b228a
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000b21ef

@end

