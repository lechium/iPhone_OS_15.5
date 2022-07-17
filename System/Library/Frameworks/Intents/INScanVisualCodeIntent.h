//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/INScanVisualCodeIntentExport-Protocol.h>

@class NSString;

@interface INScanVisualCodeIntent <INScanVisualCodeIntentExport>
{
}

- (void)setParametersByName:(id)arg1;	// IMP=0x00000000001ded81
- (id)parametersByName;	// IMP=0x00000000001ded6f
- (void)setVerb:(id)arg1;	// IMP=0x00000000001ded69
- (id)verb;	// IMP=0x00000000001ded5c
- (void)setDomain:(id)arg1;	// IMP=0x00000000001ded56
- (id)domain;	// IMP=0x00000000001ded49
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2;	// IMP=0x00000000001dece2
- (id)_dictionaryRepresentation;	// IMP=0x00000000001decd5
- (id)init;	// IMP=0x00000000001deca6
- (void)_setMetadata:(id)arg1;	// IMP=0x00000000001dec34
- (id)_metadata;	// IMP=0x00000000001debe4
- (id)_typedBackingStore;	// IMP=0x00000000001deb8d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
