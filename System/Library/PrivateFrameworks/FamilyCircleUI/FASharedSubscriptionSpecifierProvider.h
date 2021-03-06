//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ACAccount, FASharedServicesResponse, NSArray, NSDictionary, NSOperationQueue, PSListController, PSSpecifier;
@protocol FASharedSubscriptionSpecifierProviderDelegeate;

@interface FASharedSubscriptionSpecifierProvider : NSObject
{
    PSListController *_presenter;	// 8 = 0x8
    PSSpecifier *_spinnerCell;	// 16 = 0x10
    ACAccount *_appleAccount;	// 24 = 0x18
    FASharedServicesResponse *_sharedSubscriptionResponse;	// 32 = 0x20
    _Bool _updateSubsriptionSpecifiers;	// 40 = 0x28
    _Bool _isLoadingSpecifiers;	// 41 = 0x29
    NSOperationQueue *_networkActivityQueue;	// 48 = 0x30
    NSDictionary *_cachedResourceDictionary;	// 56 = 0x38
    unsigned long long _specifierState;	// 64 = 0x40
    NSArray *_specifiers;	// 72 = 0x48
    id <FASharedSubscriptionSpecifierProviderDelegeate> _delegate;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x000000000001ce81
@property(nonatomic) __weak id <FASharedSubscriptionSpecifierProviderDelegeate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSArray *specifiers; // @synthesize specifiers=_specifiers;
- (void)reloadSpecifiers;	// IMP=0x000000000001cdc1
- (id)_specifierNamed:(id)arg1;	// IMP=0x000000000001cbfc
- (void)_delayedLoadIfNeeded;	// IMP=0x000000000001cb67
- (_Bool)_launchWithResourceDictionary:(id)arg1;	// IMP=0x000000000001c957
- (_Bool)handleURL:(id)arg1;	// IMP=0x000000000001c8a4
- (void)_handleSubscriptionListResponse:(id)arg1;	// IMP=0x000000000001c5ae
- (void)_loadSubscriptionServices;	// IMP=0x000000000001bf97
- (id)_valueForServiceSpecifier:(id)arg1;	// IMP=0x000000000001bef3
- (void)_serviceSpecifierWasTapped:(id)arg1;	// IMP=0x000000000001be99
- (id)_iconURLStringForService:(id)arg1;	// IMP=0x000000000001bcc0
- (id)_serviceSpecifiersFromArray:(id)arg1;	// IMP=0x000000000001b9fb
- (id)_sharedSubscriptionGroupSpecifier;	// IMP=0x000000000001b2a8
- (id)initWithAppleAccount:(id)arg1 presenter:(id)arg2;	// IMP=0x000000000001b1db

@end

