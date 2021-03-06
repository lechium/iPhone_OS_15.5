//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSSet, PKPaymentPass, PKTransitAppletState, PKTransitPassProperties;

@interface NPKPassAssociatedInfoModel : NSObject
{
    _Bool _commutePlanValueRequired;	// 8 = 0x8
    PKPaymentPass *_pass;	// 16 = 0x10
    NSArray *_balanceFields;	// 24 = 0x18
    NSArray *_commutePlanFields;	// 32 = 0x20
    PKTransitAppletState *_transitAppletState;	// 40 = 0x28
    PKTransitPassProperties *_transitPassProperties;	// 48 = 0x30
    NSSet *_balances;	// 56 = 0x38
    NSArray *_tiles;	// 64 = 0x40
    unsigned long long _rangingSuspensionReason;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x000000000013dcd2
@property(nonatomic, getter=isCommutePlanValueRequired) _Bool commutePlanValueRequired; // @synthesize commutePlanValueRequired=_commutePlanValueRequired;
@property(nonatomic) unsigned long long rangingSuspensionReason; // @synthesize rangingSuspensionReason=_rangingSuspensionReason;
@property(retain, nonatomic) NSArray *tiles; // @synthesize tiles=_tiles;
@property(copy, nonatomic) NSSet *balances; // @synthesize balances=_balances;
@property(retain, nonatomic) PKTransitPassProperties *transitPassProperties; // @synthesize transitPassProperties=_transitPassProperties;
@property(retain, nonatomic) PKTransitAppletState *transitAppletState; // @synthesize transitAppletState=_transitAppletState;
@property(readonly, nonatomic) NSArray *commutePlanFields; // @synthesize commutePlanFields=_commutePlanFields;
@property(readonly, nonatomic) NSArray *balanceFields; // @synthesize balanceFields=_balanceFields;
@property(readonly, nonatomic) PKPaymentPass *pass; // @synthesize pass=_pass;
- (id)description;	// IMP=0x000000000013daa2
- (id)_balancePassFieldsFromPass:(id)arg1;	// IMP=0x000000000013d58a
- (id)_identifierFromAction:(id)arg1 type:(unsigned long long)arg2;	// IMP=0x000000000013d528
- (id)_actionWithIdentifiers:(id)arg1 type:(unsigned long long)arg2;	// IMP=0x000000000013cf97
- (id)_actionWithIdentifier:(id)arg1 type:(unsigned long long)arg2;	// IMP=0x000000000013cf23
- (id)_commutePlanWithFelicaPassProperties:(id)arg1;	// IMP=0x000000000013bb6c
- (id)_formattedValueWithCommutePlan:(id)arg1 balancesByID:(id)arg2;	// IMP=0x000000000013b4ed
- (_Bool)_shouldAddCommutePlan:(id)arg1 action:(id)arg2 withBalancesByID:(id)arg3;	// IMP=0x000000000013abf1
- (id)_commutePlanFieldsWithBalancesByID:(id)arg1;	// IMP=0x000000000013a554
- (id)_balanceFieldWithPassField:(id)arg1 balance:(id)arg2 isPrimaryBalance:(_Bool)arg3;	// IMP=0x000000000013a1d4
- (id)_balanceByIDWithBalances:(id)arg1;	// IMP=0x0000000000139fab
- (id)_balanceFieldsWithBalancesByID:(id)arg1 passFields:(id)arg2 maximumCount:(unsigned long long)arg3;	// IMP=0x000000000013984d
- (id)_allPassBalanceFieldsWithBalancesByID:(id)arg1;	// IMP=0x000000000013977c
- (id)_primaryDisplayableBalanceFieldWithBalancesByID:(id)arg1;	// IMP=0x0000000000139684
- (void)updateItemFields;	// IMP=0x00000000001393ee
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001392ae
@property(readonly, nonatomic) NSArray *allPassItemsFields;
- (id)initWithPass:(id)arg1 transitProperties:(id)arg2 balances:(id)arg3 commutePlanValueRequired:(_Bool)arg4;	// IMP=0x0000000000139084
- (id)initWithPass:(id)arg1;	// IMP=0x000000000013906a

@end

