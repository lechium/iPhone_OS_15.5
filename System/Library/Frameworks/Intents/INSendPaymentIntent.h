//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/INSendPaymentIntentExport-Protocol.h>

@class INCurrencyAmount, INPerson, NSString;

@interface INSendPaymentIntent <INSendPaymentIntentExport>
{
}

- (_Bool)configureAttributeSet:(id)arg1 includingData:(_Bool)arg2;	// IMP=0x000000000017875f
- (void)setParametersByName:(id)arg1;	// IMP=0x0000000000178759
- (id)parametersByName;	// IMP=0x0000000000178747
- (void)setVerb:(id)arg1;	// IMP=0x0000000000178741
- (id)verb;	// IMP=0x0000000000178734
- (void)setDomain:(id)arg1;	// IMP=0x000000000017872e
- (id)domain;	// IMP=0x0000000000178721
- (_Bool)_isUserConfirmationRequired;	// IMP=0x0000000000178719
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2;	// IMP=0x000000000017853f
- (id)_dictionaryRepresentation;	// IMP=0x0000000000178386
- (id)_redactedDictionaryRepresentation;	// IMP=0x0000000000178316
- (void)setNote:(id)arg1;	// IMP=0x000000000017828b
@property(readonly, copy, nonatomic) NSString *note;
- (void)setCurrencyAmount:(id)arg1;	// IMP=0x000000000017818d
@property(readonly, copy, nonatomic) INCurrencyAmount *currencyAmount;
- (void)setPayee:(id)arg1;	// IMP=0x000000000017808b
@property(readonly, copy, nonatomic) INPerson *payee;
- (id)initWithPayee:(id)arg1 currencyAmount:(id)arg2 note:(id)arg3;	// IMP=0x0000000000177f51
- (id)_categoryVerb;	// IMP=0x0000000000177f44
- (long long)_intentCategory;	// IMP=0x0000000000177f39
- (void)_setMetadata:(id)arg1;	// IMP=0x0000000000177ec7
- (id)_metadata;	// IMP=0x0000000000177e77
- (id)_typedBackingStore;	// IMP=0x0000000000177e20

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
