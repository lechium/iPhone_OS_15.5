//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AppleMediaServices/NSSecureCoding-Protocol.h>

@class AMSDelegatePurchaseRequest;

@interface AMSDelegatePurchaseResult <NSSecureCoding>
{
    AMSDelegatePurchaseRequest *_request;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000fa105
- (void).cxx_destruct;	// IMP=0x00000000000fa132
@property(retain, nonatomic) AMSDelegatePurchaseRequest *request; // @synthesize request=_request;
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000fa06a
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000f9fed

@end
