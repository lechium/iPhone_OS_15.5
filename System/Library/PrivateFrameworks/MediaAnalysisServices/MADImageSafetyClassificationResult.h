//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDictionary;

@interface MADImageSafetyClassificationResult
{
    _Bool _isSensitive;	// 8 = 0x8
    NSDictionary *_attributes;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000000d9b0
- (void).cxx_destruct;	// IMP=0x000000000000dd25
@property(readonly, nonatomic) NSDictionary *attributes; // @synthesize attributes=_attributes;
@property(readonly, nonatomic) _Bool isSensitive; // @synthesize isSensitive=_isSensitive;
- (id)description;	// IMP=0x000000000000dc3c
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000000dbbc
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000000da44
- (id)initWithIsSensitive:(_Bool)arg1 andAttributes:(id)arg2;	// IMP=0x000000000000d9b8

@end

