//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface PaymentExpressMode
{
}

+ (id)_predicateForPaymentApplicationPID:(long long)arg1;	// IMP=0x00400000001de41b
+ (id)_predicateForPaymentApplication:(id)arg1;	// IMP=0x00100000001de3b6
+ (id)insertExpressModes:(id)arg1 withPaymentApplication:(id)arg2 inDatabase:(id)arg3;	// IMP=0x00100000001de169
+ (void)deleteEntitiesInDatabase:(id)arg1 forPaymentApplication:(id)arg2;	// IMP=0x00100000001de0d0
+ (id)_expressModesInDatabase:(id)arg1 forPredicate:(id)arg2;	// IMP=0x00100000001ddf78
+ (id)expressModesInDatabase:(id)arg1 forPaymentApplicationPID:(long long)arg2;	// IMP=0x00100000001ddeec
+ (id)expressModesInDatabase:(id)arg1 forPaymentApplication:(id)arg2;	// IMP=0x00100000001dde60
+ (id)databaseTable;	// IMP=0x00100000001dde53
- (id)expressMode;	// IMP=0x00400000001de605
- (id)initWithExpressMode:(id)arg1 forPaymentApplication:(id)arg2 database:(id)arg3;	// IMP=0x00100000001de48e

@end
