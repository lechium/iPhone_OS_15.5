//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSNumber, NSString;

@interface PKPaymentAvailableDevicesResponseCardItem : NSObject
{
    _Bool _supportsInApp;	// 8 = 0x8
    NSString *_cardType;	// 16 = 0x10
    NSNumber *_cardTypeCode;	// 24 = 0x18
    NSString *_currentStatus;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000043aacd
@property(nonatomic) _Bool supportsInApp; // @synthesize supportsInApp=_supportsInApp;
@property(copy, nonatomic) NSString *currentStatus; // @synthesize currentStatus=_currentStatus;
@property(copy, nonatomic) NSNumber *cardTypeCode; // @synthesize cardTypeCode=_cardTypeCode;
@property(copy, nonatomic) NSString *cardType; // @synthesize cardType=_cardType;
- (id)initWithDictionary:(id)arg1;	// IMP=0x000000000043a946

@end

