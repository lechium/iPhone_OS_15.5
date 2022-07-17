//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableDictionary;

@interface NCNotificationDestinationsRegistry : NSObject
{
    NSMutableDictionary *_destinations;	// 8 = 0x8
    NSMutableDictionary *_activeDestinations;	// 16 = 0x10
    NSMutableDictionary *_readyDestinations;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000000c07b
@property(retain, nonatomic) NSMutableDictionary *readyDestinations; // @synthesize readyDestinations=_readyDestinations;
@property(retain, nonatomic) NSMutableDictionary *activeDestinations; // @synthesize activeDestinations=_activeDestinations;
@property(retain, nonatomic) NSMutableDictionary *destinations; // @synthesize destinations=_destinations;
- (id)_destinationsForRequestDestinations:(id)arg1 inDestinationDict:(id)arg2;	// IMP=0x000000000000be64
- (id)readyDestinationsForRequestDestinations:(id)arg1;	// IMP=0x000000000000bde7
- (void)setDestination:(id)arg1 ready:(_Bool)arg2;	// IMP=0x000000000000b9f2
@property(readonly, nonatomic) unsigned long long count;
@property(readonly, nonatomic) NSArray *registeredDestinations;
- (void)setDestinationWithIdentifier:(id)arg1 enabled:(_Bool)arg2;	// IMP=0x000000000000b6ea
- (void)setDestination:(id)arg1 enabled:(_Bool)arg2;	// IMP=0x000000000000b4f0
- (id)destinationsForRequestDestinations:(id)arg1;	// IMP=0x000000000000b473
- (id)destinationIdentifiersForRequestDestinations:(id)arg1;	// IMP=0x000000000000b28d
- (_Bool)hasActiveDestinationsForRequest:(id)arg1;	// IMP=0x000000000000b214
- (void)unregisterDestinationForIdentifier:(id)arg1;	// IMP=0x000000000000b03e
- (void)unregisterDestination:(id)arg1;	// IMP=0x000000000000afef
- (_Bool)isRegisteredDestination:(id)arg1;	// IMP=0x000000000000af5a
- (void)registerDestination:(id)arg1 forIdentifier:(id)arg2;	// IMP=0x000000000000ac6c
- (void)registerDestination:(id)arg1;	// IMP=0x000000000000ac00
- (id)init;	// IMP=0x000000000000ab74

@end
