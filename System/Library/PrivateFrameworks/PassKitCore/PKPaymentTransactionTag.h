//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PassKitCore/NSSecureCoding-Protocol.h>

@class NSDecimalNumber, NSString;

@interface PKPaymentTransactionTag : NSObject <NSSecureCoding>
{
    unsigned long long _type;	// 8 = 0x8
    NSString *_localizedTitle;	// 16 = 0x10
    NSString *_localeIdentifier;	// 24 = 0x18
    NSDecimalNumber *_rank;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000037d7b7
- (void).cxx_destruct;	// IMP=0x000000000037d9e8
@property(retain, nonatomic) NSDecimalNumber *rank; // @synthesize rank=_rank;
@property(retain, nonatomic) NSString *localeIdentifier; // @synthesize localeIdentifier=_localeIdentifier;
@property(retain, nonatomic) NSString *localizedTitle; // @synthesize localizedTitle=_localizedTitle;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000037d8e7
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000037d7bf
- (unsigned long long)hash;	// IMP=0x000000000037d72c
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000037d680

@end

