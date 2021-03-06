//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class ASOOverlayAppConfiguration, NSString;

@interface SKOverlayAppConfiguration
{
}

- (id)additionalValueForKey:(id)arg1;	// IMP=0x000000000001f382
- (void)setAdditionalValue:(id)arg1 forKey:(id)arg2;	// IMP=0x000000000001f2fc
@property(nonatomic) _Bool userDismissible; // @dynamic userDismissible;
@property(nonatomic) long long position; // @dynamic position;
@property(retain, nonatomic) NSString *latestReleaseID;
@property(retain, nonatomic) NSString *customProductPageIdentifier;
@property(retain, nonatomic) NSString *providerToken;
@property(retain, nonatomic) NSString *campaignToken; // @dynamic campaignToken;
@property(retain, nonatomic) NSString *appIdentifier; // @dynamic appIdentifier;
- (id)initWithBacking:(id)arg1;	// IMP=0x000000000001eddb
- (id)_init;	// IMP=0x000000000001edac
- (id)initWithAppIdentifier:(id)arg1 position:(long long)arg2;	// IMP=0x000000000001ed17

// Remaining properties
@property(readonly, retain, nonatomic) ASOOverlayAppConfiguration *_backing; // @dynamic _backing;

@end

