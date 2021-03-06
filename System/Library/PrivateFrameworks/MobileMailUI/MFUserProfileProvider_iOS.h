//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Email/EMUserProfileProvider.h>

#import <MobileMailUI/EMUserProfileProviderSubclassMethods-Protocol.h>

@class NSString;

@interface MFUserProfileProvider_iOS : EMUserProfileProvider <EMUserProfileProviderSubclassMethods>
{
}

+ (id)defaultProvider;	// IMP=0x0000000000036b75
- (id)_accountsEmailAddresses;	// IMP=0x0000000000036c29
- (_Bool)hasAccountsConfigured;	// IMP=0x0000000000036bca

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

