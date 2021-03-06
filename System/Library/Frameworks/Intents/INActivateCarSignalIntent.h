//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/INActivateCarSignalIntentExport-Protocol.h>

@class INSpeakableString, NSString;

@interface INActivateCarSignalIntent <INActivateCarSignalIntentExport>
{
}

- (void)setParametersByName:(id)arg1;	// IMP=0x0000000000148434
- (id)parametersByName;	// IMP=0x0000000000148422
- (void)setVerb:(id)arg1;	// IMP=0x000000000014841c
- (id)verb;	// IMP=0x000000000014840f
- (void)setDomain:(id)arg1;	// IMP=0x0000000000148409
- (id)domain;	// IMP=0x00000000001483fc
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2;	// IMP=0x0000000000148395
- (id)_dictionaryRepresentation;	// IMP=0x0000000000148242
- (void)setSignals:(unsigned long long)arg1;	// IMP=0x00000000001481b5
@property(readonly, nonatomic) unsigned long long signals;
- (void)setCarName:(id)arg1;	// IMP=0x0000000000148063
@property(readonly, copy, nonatomic) INSpeakableString *carName;
- (id)initWithCarName:(id)arg1 signals:(unsigned long long)arg2;	// IMP=0x0000000000147f69
- (void)_setMetadata:(id)arg1;	// IMP=0x0000000000147ef7
- (id)_metadata;	// IMP=0x0000000000147ea7
- (id)_typedBackingStore;	// IMP=0x0000000000147e50

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

