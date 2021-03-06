//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface PKPeerPaymentPurchaseData
{
    _Bool _requiresInteraction;	// 16 = 0x10
    unsigned long long _status;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000001c73ac
@property(nonatomic) _Bool requiresInteraction; // @synthesize requiresInteraction=_requiresInteraction;
@property(nonatomic) unsigned long long status; // @synthesize status=_status;
- (id)description;	// IMP=0x00000000001c76b4
- (_Bool)isEqualToPKPeerPaymentPurchaseData:(id)arg1;	// IMP=0x00000000001c7662
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001c7604
- (unsigned long long)hash;	// IMP=0x00000000001c75d4
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000001c74ba
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000001c73b4
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000001c719b

@end

