//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Catalyst/CATTaskResultObject.h>

@class NSDictionary;

@interface DMFFetchConfigurationOrganizationsResultObject : CATTaskResultObject
{
    NSDictionary *_organizationsByIdentifier;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000209dd
- (void).cxx_destruct;	// IMP=0x0000000000020bb1
@property(retain, nonatomic) NSDictionary *organizationsByIdentifier; // @synthesize organizationsByIdentifier=_organizationsByIdentifier;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000020af1
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000209e5
- (id)description;	// IMP=0x000000000002094b

@end
