//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface HMDAccessoryBrowserXPCMessageSendPolicy
{
    unsigned long long _requiredEntitlements;	// 8 = 0x8
}

@property(readonly) unsigned long long requiredEntitlements; // @synthesize requiredEntitlements=_requiredEntitlements;
- (id)attributeDescriptions;	// IMP=0x0000000000ab41e7
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000ab41dc
- (unsigned long long)hash;	// IMP=0x0000000000ab41ca
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000ab40d4
- (_Bool)canSendWithPolicyParameters:(id)arg1;	// IMP=0x0000000000ab400b
- (id)initWithRequiredEntitlements:(unsigned long long)arg1;	// IMP=0x0000000000ab3fc3

@end
