//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface _HKCorrelationQueryServerConfiguration
{
    NSDictionary *_filterDictionary;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000001c29ff
- (void).cxx_destruct;	// IMP=0x00000000001c2bb2
@property(copy, nonatomic) NSDictionary *filterDictionary; // @synthesize filterDictionary=_filterDictionary;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000001c2b13
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000001c2a07
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001c29a9

@end
