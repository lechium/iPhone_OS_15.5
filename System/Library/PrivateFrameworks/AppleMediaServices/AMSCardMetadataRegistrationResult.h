//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface AMSCardMetadataRegistrationResult : NSObject
{
    NSString *_cardArtwork;	// 8 = 0x8
    long long _cardType;	// 16 = 0x10
    NSString *_descriptionLong;	// 24 = 0x18
    NSString *_descriptionShort;	// 32 = 0x20
    long long _paymentNetwork;	// 40 = 0x28
    NSString *_serialNumber;	// 48 = 0x30
    NSString *_suffix;	// 56 = 0x38
    NSDictionary *_dictionary;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x00000000000da6a1
@property(retain, nonatomic) NSDictionary *dictionary; // @synthesize dictionary=_dictionary;
@property(retain, nonatomic) NSString *suffix; // @synthesize suffix=_suffix;
@property(retain, nonatomic) NSString *serialNumber; // @synthesize serialNumber=_serialNumber;
@property(nonatomic) long long paymentNetwork; // @synthesize paymentNetwork=_paymentNetwork;
@property(retain, nonatomic) NSString *descriptionShort; // @synthesize descriptionShort=_descriptionShort;
@property(retain, nonatomic) NSString *descriptionLong; // @synthesize descriptionLong=_descriptionLong;
@property(nonatomic) long long cardType; // @synthesize cardType=_cardType;
@property(retain, nonatomic) NSString *cardArtwork; // @synthesize cardArtwork=_cardArtwork;
- (id)initWithCardArtwork:(id)arg1 cardType:(long long)arg2 descriptionLong:(id)arg3 descriptionShort:(id)arg4 paymentNetwork:(long long)arg5 serialNumber:(id)arg6 suffix:(id)arg7;	// IMP=0x00000000000da1df
- (id)init;	// IMP=0x00000000000da1b0

@end
