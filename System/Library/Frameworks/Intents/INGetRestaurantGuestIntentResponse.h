//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/INGetRestaurantGuestIntentResponseExport-Protocol.h>
#import <Intents/INImageProxyInjecting-Protocol.h>

@class INRestaurantGuest, INRestaurantGuestDisplayPreferences, NSString;

@interface INGetRestaurantGuestIntentResponse <INImageProxyInjecting, INGetRestaurantGuestIntentResponseExport>
{
    INRestaurantGuest *_guest;	// 8 = 0x8
    INRestaurantGuestDisplayPreferences *_guestDisplayPreferences;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000000c004
- (void).cxx_destruct;	// IMP=0x000000000000bfd3
@property(copy, nonatomic) INRestaurantGuestDisplayPreferences *guestDisplayPreferences; // @synthesize guestDisplayPreferences=_guestDisplayPreferences;
@property(copy, nonatomic) INRestaurantGuest *guest; // @synthesize guest=_guest;
- (void)_injectProxiesForImages:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000000bf29
- (id)_dictionaryRepresentation;	// IMP=0x000000000000bd8e
@property(readonly, nonatomic) long long code;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000000bb34
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000000ba83
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000000b9e4
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000000b8f5
- (id)initWithCode:(long long)arg1 userActivity:(id)arg2;	// IMP=0x000000000000b8c6
- (id)_initWithCode:(long long)arg1 userActivity:(id)arg2;	// IMP=0x000000000000b897
- (id)initWithBackingStore:(id)arg1;	// IMP=0x000000000000b868

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
