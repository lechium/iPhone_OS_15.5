//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <FMFUI/AAUISpecifierProvider-Protocol.h>

@class AIDAAccountManager, NSArray, NSString;
@protocol AAUISpecifierProviderDelegate;

@interface FMFSpecifierProvider : NSObject <AAUISpecifierProvider>
{
    id <AAUISpecifierProviderDelegate> _delegate;	// 8 = 0x8
    NSArray *_specifiers;	// 16 = 0x10
    AIDAAccountManager *_accountManager;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000001f94
@property(retain, nonatomic) AIDAAccountManager *accountManager; // @synthesize accountManager=_accountManager;
@property(copy, nonatomic) NSArray *specifiers; // @synthesize specifiers=_specifiers;
@property(nonatomic) __weak id <AAUISpecifierProviderDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)isAccountInGrayMode;	// IMP=0x0000000000001e49
- (_Bool)locationServicesDisabledByRestrictions;	// IMP=0x0000000000001df6
- (_Bool)shouldShowLocationSharingSpecifier;	// IMP=0x0000000000001dee
- (_Bool)shouldEnableLocationSharingSpecifier;	// IMP=0x0000000000001db7
- (void)locationSharingSpecifierWasTapped:(id)arg1;	// IMP=0x0000000000001c9e
- (id)initWithAccountManager:(id)arg1;	// IMP=0x00000000000019d4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

