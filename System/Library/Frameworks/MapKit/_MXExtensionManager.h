//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class _MXExtensionProvider;
@protocol _MXExtensionLookupPolicy, _MXExtensionManagerDelegate;

@interface _MXExtensionManager : NSObject
{
    id <_MXExtensionLookupPolicy> _lookupPolicy;	// 8 = 0x8
    id _matchingContext;	// 16 = 0x10
    id <_MXExtensionManagerDelegate> _delegate;	// 24 = 0x18
    _MXExtensionProvider *_extensionProvider;	// 32 = 0x20
}

+ (id)_lookupPolicyWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000001e7be8
+ (void)imageForKey:(id)arg1 extension:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000001e7b47
+ (id)_lookupPolicyForExtensionWithContainingAppIdentifier:(id)arg1 supportsIntentClassNames:(id)arg2;	// IMP=0x00000000001e784e
+ (id)_lookupPolicyForExtensionSupportsIntentClassNames:(id)arg1;	// IMP=0x00000000001e7837
+ (id)_lookupPolicyForExtensionWithIdentifier:(id)arg1;	// IMP=0x00000000001e773d
+ (id)lookupPolicyForExtensionWithCapabilities:(id)arg1;	// IMP=0x00000000001e7643
+ (id)lookupPolicyForExtensionWithCapability:(id)arg1;	// IMP=0x00000000001e7549
+ (id)_lookupPolicyWithExtensionPointNames:(id)arg1;	// IMP=0x00000000001e74d8
+ (id)_lookupPolicyForIntentsExtensions;	// IMP=0x00000000001e7428
+ (id)_lookupPolicyForAllExtensions;	// IMP=0x00000000001e7362
+ (id)_lookupPolicyForNonUIExtension;	// IMP=0x00000000001e72b5
+ (id)_lookupPolicyForUIExtension;	// IMP=0x00000000001e7208
+ (id)_extensionsWithLookupPolicy:(id)arg1;	// IMP=0x00000000001e7137
+ (id)_queue;	// IMP=0x00000000001e6e74
+ (id)managerWithExtensionLookupPolicy:(id)arg1 updateHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000001e6bb1
+ (id)managerWithLookupPolicy:(id)arg1 delegate:(id)arg2;	// IMP=0x00000000001e67c7
+ (void)_maps_updateRideBookingExtensions:(id)arg1;	// IMP=0x0000000000062974
+ (id)_maps_lookupPolicyForRidesharingNonUIExtensions;	// IMP=0x0000000000062772
+ (id)_maps_lookupPolicyForEnabledRidesharingNonUIExtensions;	// IMP=0x000000000006254c
+ (id)_maps_ridesharingIntentClassesForUIInteraction;	// IMP=0x00000000000624cb
+ (id)_maps_ridesharingRequiredIntentClassesForNonUIHandling;	// IMP=0x000000000006243a
+ (id)_maps_ridesharingOptionalIntentClassesForNonUIHandling;	// IMP=0x00000000000623b9
+ (id)_maps_ridesharingAllIntentClassesForNonUIHandling;	// IMP=0x0000000000062329
+ (id)lookupPolicyForRestaurantQueueingExtensions;	// IMP=0x000000000009bedf
+ (id)lookupPolicyForRestaurantQueueingExtensionWithContainingAppIdentifier:(id)arg1;	// IMP=0x000000000009be52
+ (id)restaurantQueueingIntentClassNames;	// IMP=0x000000000009be45
+ (id)lookupPolicyForRestaurantReservationExtensions;	// IMP=0x000000000011c5bf
+ (id)lookupPolicyForRestaurantReservationExtensionWithContainingAppIdentifier:(id)arg1;	// IMP=0x000000000011c532
+ (id)restaurantReservationIntentClassNames;	// IMP=0x000000000011c525
- (void).cxx_destruct;	// IMP=0x00000000001e7d2d
@property(retain, nonatomic) _MXExtensionProvider *extensionProvider; // @synthesize extensionProvider=_extensionProvider;
@property(nonatomic) __weak id <_MXExtensionManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) id matchingContext; // @synthesize matchingContext=_matchingContext;
@property(readonly, nonatomic) id <_MXExtensionLookupPolicy> lookupPolicy; // @synthesize lookupPolicy=_lookupPolicy;
- (id)_applyExtensionPredicateWithExtensionsIfNeeded:(id)arg1;	// IMP=0x00000000001e70ae
- (void)dealloc;	// IMP=0x00000000001e7070
- (void)invalidate;	// IMP=0x00000000001e6ff5
- (id)initWithLookupPolicy:(id)arg1 delegate:(id)arg2 extensionProvider:(id)arg3;	// IMP=0x00000000001e6f0a
- (id)initWithLookupPolicy:(id)arg1 delegate:(id)arg2;	// IMP=0x00000000001e6ef5

@end

