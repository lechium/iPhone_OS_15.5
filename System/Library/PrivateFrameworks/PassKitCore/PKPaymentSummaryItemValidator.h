//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PassKitCore/PKPaymentValidating-Protocol.h>

@class NSString, PKPaymentSummaryItem;

@interface PKPaymentSummaryItemValidator : NSObject <PKPaymentValidating>
{
    NSString *_currencyCode;	// 8 = 0x8
    PKPaymentSummaryItem *_item;	// 16 = 0x10
}

+ (Class)validatedClass;	// IMP=0x000000000028bfb4
+ (id)validatorWithObject:(id)arg1;	// IMP=0x000000000028befa
- (void).cxx_destruct;	// IMP=0x000000000028ca61
@property(readonly, nonatomic) PKPaymentSummaryItem *item; // @synthesize item=_item;
@property(copy, nonatomic) NSString *currencyCode; // @synthesize currencyCode=_currencyCode;
- (_Bool)isValidWithAPIType:(unsigned long long)arg1 withError:(id *)arg2;	// IMP=0x000000000028c047
- (_Bool)isValidWithError:(id *)arg1;	// IMP=0x000000000028c030
- (id)initWithPaymentSummaryItem:(id)arg1;	// IMP=0x000000000028bfc5

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
