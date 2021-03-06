//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CardKit/CRKCardPresenting-Protocol.h>
#import <CardKit/CRKCardSectionViewProviderDelegate-Protocol.h>
#import <CardKit/CRKCardViewControllerDelegate-Protocol.h>
#import <CardKit/_CRKCardSectionViewLoaderDelegate-Protocol.h>
#import <CardKit/_CRKCardViewControllerTransitionAnimatorDelegate-Protocol.h>
#import <CardKit/_CRKSendMessageCardFactoryDelegate-Protocol.h>

@class CRKCardPresentationConfiguration, CRProtocolRestrictedInvocationChain, NSString, UIViewController, _CRKCardSectionViewLoader;
@protocol CRCard, CRKCardPresentationDelegate, CRKCardViewControllerDelegate, CRKCardViewControlling, CRKIdentifiedProviding;

@interface CRKCardPresentation : NSObject <CRKCardSectionViewProviderDelegate, _CRKSendMessageCardFactoryDelegate, _CRKCardSectionViewLoaderDelegate, _CRKCardViewControllerTransitionAnimatorDelegate, CRKCardViewControllerDelegate, CRKCardPresenting>
{
    _CRKCardSectionViewLoader *_cardSectionViewLoader;	// 8 = 0x8
    id <CRKIdentifiedProviding> _loadedCardViewControllerProvider;	// 16 = 0x10
    CRProtocolRestrictedInvocationChain *_cardViewControllerDelegateChain;	// 24 = 0x18
    id <CRKCardViewControllerDelegate> _externalCardViewControllerDelegate;	// 32 = 0x20
    _Bool _debugModeEnabled;	// 40 = 0x28
    CRKCardPresentationConfiguration *_configuration;	// 48 = 0x30
    UIViewController<CRKCardViewControlling> *_cardViewController;	// 56 = 0x38
    id <CRKCardPresentationDelegate> _delegate;	// 64 = 0x40
}

+ (void)unregisterProvider:(id)arg1;	// IMP=0x000000000000319a
+ (void)registerProvider:(id)arg1;	// IMP=0x0000000000003124
+ (void)initialize;	// IMP=0x000000000000254e
- (void).cxx_destruct;	// IMP=0x00000000000051b8
@property(nonatomic) _Bool debugModeEnabled; // @synthesize debugModeEnabled=_debugModeEnabled;
@property(nonatomic) __weak id <CRKCardPresentationDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) UIViewController<CRKCardViewControlling> *cardViewController; // @synthesize cardViewController=_cardViewController;
@property(copy, nonatomic) CRKCardPresentationConfiguration *configuration; // @synthesize configuration=_configuration;
- (void)cardViewController:(id)arg1 requestCardSectionViewSourceForCard:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0000000000004d98
- (void)transitionAnimator:(id)arg1 willTransitionFromCardViewController:(id)arg2 toCardViewController:(id)arg3 withAnimationCoordinator:(id)arg4;	// IMP=0x0000000000004ce4
- (long long)cardSectionViewLoader:(id)arg1 compareCardSectionViewProviderOne:(id)arg2 providerTwo:(id)arg3;	// IMP=0x0000000000004c14
- (long long)semanticContentAttributeForCardFactory:(id)arg1;	// IMP=0x0000000000004b80
- (double)boundingWidthForProvider:(id)arg1;	// IMP=0x0000000000004a5c
- (_Bool)cardSectionDisplayRequiresUserConsentForProvider:(id)arg1;	// IMP=0x0000000000004a18
- (id)defaultFeedbackDelegateForProvider:(id)arg1;	// IMP=0x0000000000004a0a
- (void)_establishParsecSessionIfNeeded:(CDUnknownBlockType)arg1;	// IMP=0x0000000000004925
- (void)_configureWithRequestedCard:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000003b46
- (void)_fullyConfigureWithRequestedCard:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000003839
- (void)_loadAndRegisterBundleProviders:(CDUnknownBlockType)arg1;	// IMP=0x000000000000352c
- (id)_cardSectionViewControllerForCardSection:(id)arg1;	// IMP=0x0000000000003371
- (void)_updateViewConfigurationsDebugMode:(_Bool)arg1;	// IMP=0x000000000000322f
- (void)configureWithCardRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000003018
- (void)configureWithContent:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000002f82
- (void)configureWithCard:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000002f70
@property(readonly, nonatomic) id <CRCard> card;
- (void)setConfiguration:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000000276d
- (id)init;	// IMP=0x000000000000269f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

