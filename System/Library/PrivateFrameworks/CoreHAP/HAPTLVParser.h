//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class NSData;

@interface HAPTLVParser : HMFObject
{
    NSData *_tlvData;	// 8 = 0x8
}

+ (id)parserWithData:(id)arg1;	// IMP=0x0000000000123bdd
- (void).cxx_destruct;	// IMP=0x0000000000123bca
- (id)parseResponseForArray:(unsigned long long)arg1;	// IMP=0x00000000001239c4
- (id)parseResponseForUUID:(unsigned long long)arg1;	// IMP=0x000000000012393a
- (id)parseResponseForString:(unsigned long long)arg1;	// IMP=0x00000000001238d5
- (id)parseResponseForUInt16:(unsigned long long)arg1;	// IMP=0x0000000000123856
- (id)parseResponseForUInt8:(unsigned long long)arg1;	// IMP=0x00000000001237d7
- (id)parseResponseForNumber:(unsigned long long)arg1;	// IMP=0x000000000012362d
- (id)parseResponseForData:(unsigned long long)arg1;	// IMP=0x0000000000123495
- (id)initWithData:(id)arg1;	// IMP=0x0000000000123427

@end
