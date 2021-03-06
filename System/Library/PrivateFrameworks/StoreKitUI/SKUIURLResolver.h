//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <StoreKitUI/SKUIPassbookLoaderDelegate-Protocol.h>

@class NSOperationQueue, NSString, SKUIClientContext, SKUIPassbookLoader;
@protocol SKUIURLResolverDelegate, UINavigationControllerDelegate;

@interface SKUIURLResolver : NSObject <SKUIPassbookLoaderDelegate>
{
    SKUIClientContext *_clientContext;	// 8 = 0x8
    id <SKUIURLResolverDelegate> _delegate;	// 16 = 0x10
    id <UINavigationControllerDelegate> _navigationControllerDelegate;	// 24 = 0x18
    NSOperationQueue *_operationQueue;	// 32 = 0x20
    SKUIPassbookLoader *_passbookLoader;	// 40 = 0x28
}

+ (id)tabIdentifierForURL:(id)arg1;	// IMP=0x00000000000f556f
- (void).cxx_destruct;	// IMP=0x00000000000f751e
@property(retain, nonatomic) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
@property(nonatomic) __weak id <UINavigationControllerDelegate> navigationControllerDelegate; // @synthesize navigationControllerDelegate=_navigationControllerDelegate;
@property(nonatomic) __weak id <SKUIURLResolverDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_showViewControllerWithResponse:(id)arg1 fromOperation:(id)arg2;	// IMP=0x00000000000f71e6
- (void)_showSearchWithURL:(id)arg1;	// IMP=0x00000000000f7108
- (void)_showRedeemViewControllerWithURL:(id)arg1;	// IMP=0x00000000000f702a
- (void)_showPlaceholderViewController;	// IMP=0x00000000000f6ff2
- (void)_showGiftViewControllerWithURL:(id)arg1;	// IMP=0x00000000000f6f50
- (void)_showDonationViewControllerWithURL:(id)arg1;	// IMP=0x00000000000f6eb4
- (void)_showBagURLWithURL:(id)arg1;	// IMP=0x00000000000f6bca
- (void)_showAccountViewControllerWithURL:(id)arg1;	// IMP=0x00000000000f6a6b
- (void)_sendDidFinishWithResult:(_Bool)arg1;	// IMP=0x00000000000f69df
- (void)_selectTabWithIdentifier:(id)arg1;	// IMP=0x00000000000f6962
- (void)_resolveURLRequest:(id)arg1 withOriginURL:(id)arg2;	// IMP=0x00000000000f643b
- (void)_presentViewController:(id)arg1;	// IMP=0x00000000000f6265
- (void)_performLookupWithURL:(id)arg1;	// IMP=0x00000000000f5deb
- (id)_newHTMLViewControllerWithSection:(id)arg1;	// IMP=0x00000000000f5cfd
- (void)_handleSafariScriptDataUpdate:(id)arg1;	// IMP=0x00000000000f5c6a
- (void)_addPassbookPassWithURL:(id)arg1;	// IMP=0x00000000000f5bb6
- (id)presentationViewControllerForPassbookLoader:(id)arg1;	// IMP=0x00000000000f5b6d
- (void)passbookLoaderDidFinish:(id)arg1;	// IMP=0x00000000000f5b22
- (void)resolveURL:(id)arg1;	// IMP=0x00000000000f57a5
- (void)dealloc;	// IMP=0x00000000000f552b
- (id)initWithClientContext:(id)arg1;	// IMP=0x00000000000f54c0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

