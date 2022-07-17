//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface NPKTestAddPaymentPassRequestContext : NSObject
{
    NSString *_cardPNO;	// 8 = 0x8
    NSString *_cardFlow;	// 16 = 0x10
    NSString *_cardID;	// 24 = 0x18
    NSString *_cardType;	// 32 = 0x20
    NSString *_cardIssuer;	// 40 = 0x28
    NSString *_cardProduct;	// 48 = 0x30
    NSString *_cardEncryptionScheme;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0000000000112040
@property(retain, nonatomic) NSString *cardEncryptionScheme; // @synthesize cardEncryptionScheme=_cardEncryptionScheme;
@property(retain, nonatomic) NSString *cardProduct; // @synthesize cardProduct=_cardProduct;
@property(retain, nonatomic) NSString *cardIssuer; // @synthesize cardIssuer=_cardIssuer;
@property(retain, nonatomic) NSString *cardType; // @synthesize cardType=_cardType;
@property(retain, nonatomic) NSString *cardID; // @synthesize cardID=_cardID;
@property(retain, nonatomic) NSString *cardFlow; // @synthesize cardFlow=_cardFlow;
@property(retain, nonatomic) NSString *cardPNO; // @synthesize cardPNO=_cardPNO;

@end
