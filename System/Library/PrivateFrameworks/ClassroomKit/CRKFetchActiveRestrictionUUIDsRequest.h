//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <DeviceManagement/CATTaskRequest.h>

@class NSString;

@interface CRKFetchActiveRestrictionUUIDsRequest : CATTaskRequest
{
    NSString *_clientType;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000aa0f0
+ (Class)whitelistedClassForResultObject;	// IMP=0x00000000000aa0df
- (void).cxx_destruct;	// IMP=0x00000000000aa28c
@property(copy, nonatomic) NSString *clientType; // @synthesize clientType=_clientType;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000aa1cf
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000aa0f8

@end

