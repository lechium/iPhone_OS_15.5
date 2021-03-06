//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/INListRideOptionsIntentExport-Protocol.h>

@class CLPlacemark, NSString;

@interface INListRideOptionsIntent <INListRideOptionsIntentExport>
{
}

- (void)setParametersByName:(id)arg1;	// IMP=0x00000000000d08ec
- (id)parametersByName;	// IMP=0x00000000000d08da
- (void)setVerb:(id)arg1;	// IMP=0x00000000000d08d4
- (id)verb;	// IMP=0x00000000000d08c7
- (void)setDomain:(id)arg1;	// IMP=0x00000000000d08c1
- (id)domain;	// IMP=0x00000000000d08b4
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2;	// IMP=0x00000000000d074e
- (id)_dictionaryRepresentation;	// IMP=0x00000000000d0603
- (void)setDropOffLocation:(id)arg1;	// IMP=0x00000000000d0578
@property(readonly, copy, nonatomic) CLPlacemark *dropOffLocation;
- (void)setPickupLocation:(id)arg1;	// IMP=0x00000000000d047a
@property(readonly, copy, nonatomic) CLPlacemark *pickupLocation;
- (id)initWithPickupLocation:(id)arg1 dropOffLocation:(id)arg2;	// IMP=0x00000000000d0369
- (id)_categoryVerb;	// IMP=0x00000000000d035c
- (long long)_intentCategory;	// IMP=0x00000000000d0351
- (void)_setMetadata:(id)arg1;	// IMP=0x00000000000d02df
- (id)_metadata;	// IMP=0x00000000000d028f
- (id)_typedBackingStore;	// IMP=0x00000000000d0238

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

