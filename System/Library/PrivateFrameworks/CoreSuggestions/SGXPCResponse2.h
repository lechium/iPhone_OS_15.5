//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@protocol NSSecureCoding;

@interface SGXPCResponse2
{
    id <NSSecureCoding> _response2;	// 24 = 0x18
}

+ (id)responseWithError:(id)arg1;	// IMP=0x0000000000075df5
+ (id)responseWith:(id)arg1 also:(id)arg2;	// IMP=0x0000000000075d7c
+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000075d74
- (void).cxx_destruct;	// IMP=0x0000000000075d61
@property(readonly, nonatomic) id <NSSecureCoding> response2; // @synthesize response2=_response2;
- (id)response1;	// IMP=0x0000000000075d12
- (void)setResponse2:(id)arg1;	// IMP=0x0000000000075cfe
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000075c81
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000075bf5

@end

