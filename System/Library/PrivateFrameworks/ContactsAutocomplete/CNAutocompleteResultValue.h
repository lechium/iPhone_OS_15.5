//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface CNAutocompleteResultValue : NSObject
{
    NSString *_address;	// 8 = 0x8
    long long _addressType;	// 16 = 0x10
    NSString *_instantMessageAddressService;	// 24 = 0x18
    NSString *_identifier;	// 32 = 0x20
    NSString *_label;	// 40 = 0x28
    NSString *_stringForHashingMemo;	// 48 = 0x30
}

+ (id)normalizedAddressForValue:(id)arg1;	// IMP=0x0000000000027f1b
+ (id)stringForHashingValue:(id)arg1;	// IMP=0x0000000000027e3d
+ (id)resultValueWithAddress:(id)arg1 addressType:(long long)arg2;	// IMP=0x00000000000278fb
- (void).cxx_destruct;	// IMP=0x0000000000028487
@property(copy, nonatomic) NSString *stringForHashingMemo; // @synthesize stringForHashingMemo=_stringForHashingMemo;
@property(copy) NSString *label; // @synthesize label=_label;
@property(copy) NSString *identifier; // @synthesize identifier=_identifier;
@property(copy) NSString *instantMessageAddressService; // @synthesize instantMessageAddressService=_instantMessageAddressService;
@property long long addressType; // @synthesize addressType=_addressType;
@property(copy) NSString *address; // @synthesize address=_address;
- (id)addressTypeDescription;	// IMP=0x0000000000028387
- (id)description;	// IMP=0x00000000000281da
- (_Bool)addressExactlyMatchesSearchTerm:(id)arg1;	// IMP=0x0000000000028082
- (id)stringForSorting;	// IMP=0x0000000000027fb3
- (id)stringForHashing;	// IMP=0x0000000000027d41
- (unsigned long long)hash;	// IMP=0x0000000000027a3a
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000027963

@end

