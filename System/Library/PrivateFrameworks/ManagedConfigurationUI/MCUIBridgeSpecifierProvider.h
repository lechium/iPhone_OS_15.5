//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSSManager;

@interface MCUIBridgeSpecifierProvider
{
    NSSManager *_nssManager;	// 8 = 0x8
    unsigned long long _watchFetchStatus;	// 16 = 0x10
    NSArray *_mdmProfiles;	// 24 = 0x18
    NSArray *_installedProfiles;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000019a11
@property(retain, nonatomic) NSArray *installedProfiles; // @synthesize installedProfiles=_installedProfiles;
@property(retain, nonatomic) NSArray *mdmProfiles; // @synthesize mdmProfiles=_mdmProfiles;
@property(nonatomic) unsigned long long watchFetchStatus; // @synthesize watchFetchStatus=_watchFetchStatus;
@property(retain, nonatomic) NSSManager *nssManager; // @synthesize nssManager=_nssManager;
- (void)loadProfileFromSpecifier:(id)arg1;	// IMP=0x000000000001949a
- (void)_handleWatchFetchSuccessWithReply:(id)arg1;	// IMP=0x00000000000191e8
- (void)_handleWatchFetchError;	// IMP=0x000000000001900b
- (void)fetchWatchProfileList;	// IMP=0x0000000000018d71
- (id)_emptySpecifier;	// IMP=0x0000000000018cab
- (id)_specifiersForWatchProfiles;	// IMP=0x0000000000018bb5
- (id)specifiers;	// IMP=0x00000000000189ae
- (id)initWithDelegate:(id)arg1;	// IMP=0x0000000000018900

@end

