//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <DeviceManagement/CATTaskRequest.h>

@class DMFControlGroupIdentifier, NSString;

@interface CRKFetchUserImageRequest : CATTaskRequest
{
    DMFControlGroupIdentifier *_courseIdentifier;	// 8 = 0x8
    NSString *_userIdentifier;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000091fd6
+ (Class)whitelistedClassForResultObject;	// IMP=0x0000000000091fc5
- (void).cxx_destruct;	// IMP=0x0000000000092244
@property(copy, nonatomic) NSString *userIdentifier; // @synthesize userIdentifier=_userIdentifier;
@property(retain, nonatomic) DMFControlGroupIdentifier *courseIdentifier; // @synthesize courseIdentifier=_courseIdentifier;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000092129
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000091fde

@end
