//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <DeviceManagement/CATTaskRequest.h>

@class NSArray;

@interface CRKFetchApplicationsRequest : CATTaskRequest
{
    NSArray *_bundleIdentifiers;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000001f0bd
+ (Class)whitelistedClassForResultObject;	// IMP=0x000000000001f0ac
- (void).cxx_destruct;	// IMP=0x000000000001f274
@property(copy, nonatomic) NSArray *bundleIdentifiers; // @synthesize bundleIdentifiers=_bundleIdentifiers;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000001f1b7
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000001f0c5

@end
