//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData, NSNumber;

@interface EDAMData
{
    NSData *_bodyHash;	// 8 = 0x8
    NSNumber *_size;	// 16 = 0x10
    NSData *_body;	// 24 = 0x18
}

+ (id)structFields;	// IMP=0x000000000022a8af
+ (id)structName;	// IMP=0x000000000022a8a2
- (void).cxx_destruct;	// IMP=0x000000000022aa71
@property(retain, nonatomic) NSData *body; // @synthesize body=_body;
@property(retain, nonatomic) NSNumber *size; // @synthesize size=_size;
@property(retain, nonatomic) NSData *bodyHash; // @synthesize bodyHash=_bodyHash;

@end
