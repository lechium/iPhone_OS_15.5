//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class STSiriContext;

@interface AFContextResponse
{
    STSiriContext *_context;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000e9737
- (void).cxx_destruct;	// IMP=0x00000000000e9857
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000e97bc
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000e973f
- (id)_context;	// IMP=0x00000000000e9722
- (id)_initWithRequest:(id)arg1 context:(id)arg2;	// IMP=0x00000000000e96aa

@end
