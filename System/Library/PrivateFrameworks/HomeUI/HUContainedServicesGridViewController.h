//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeUI/HUDetailsPresentationDelegateHost-Protocol.h>
#import <HomeUI/HUPresentationDelegate-Protocol.h>
#import <HomeUI/HUServiceGridItemManagerDelegate-Protocol.h>

@class HFItem, NSString;
@protocol HUContainedServiceGridViewControllerDelegate, HUPresentationDelegate, HUServiceContainerItem><NSCopying;

@interface HUContainedServicesGridViewController <HUPresentationDelegate, HUServiceGridItemManagerDelegate, HUDetailsPresentationDelegateHost>
{
    _Bool _requiresPresentingViewControllerDismissal;	// 8 = 0x8
    _Bool _presentedModally;	// 9 = 0x9
    id <HUPresentationDelegate> _presentationDelegate;	// 16 = 0x10
    HFItem<HUServiceContainerItem><NSCopying> *_serviceContainerItem;	// 24 = 0x18
    id <HUContainedServiceGridViewControllerDelegate> _serviceGridDelegate;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000004bd56
@property(nonatomic, getter=isPresentedModally) _Bool presentedModally; // @synthesize presentedModally=_presentedModally;
@property(nonatomic) __weak id <HUContainedServiceGridViewControllerDelegate> serviceGridDelegate; // @synthesize serviceGridDelegate=_serviceGridDelegate;
@property(readonly, copy, nonatomic) HFItem<HUServiceContainerItem><NSCopying> *serviceContainerItem; // @synthesize serviceContainerItem=_serviceContainerItem;
@property(nonatomic) _Bool requiresPresentingViewControllerDismissal; // @synthesize requiresPresentingViewControllerDismissal=_requiresPresentingViewControllerDismissal;
@property(nonatomic) __weak id <HUPresentationDelegate> presentationDelegate; // @synthesize presentationDelegate=_presentationDelegate;
- (void)_updateRightBarButtons;	// IMP=0x000000000004ba82
- (id)finishPresentation:(id)arg1 animated:(_Bool)arg2;	// IMP=0x000000000004ba6b
- (void)itemManagerDidUpdate:(id)arg1;	// IMP=0x000000000004ba2a
- (id)detailsViewControllerForPresentationCoordinator:(id)arg1 item:(id)arg2;	// IMP=0x000000000004b93d
- (_Bool)hasDetailsActionForPresentationCoordinator:(id)arg1 item:(id)arg2;	// IMP=0x000000000004b88c
- (id)layoutOptionsForSection:(long long)arg1;	// IMP=0x000000000004b7bd
- (void)configureCell:(id)arg1 forItem:(id)arg2;	// IMP=0x000000000004b6b8
- (void)_edit:(id)arg1;	// IMP=0x000000000004b445
- (void)viewDidLoad;	// IMP=0x000000000004b3aa
- (void)_done:(id)arg1;	// IMP=0x000000000004b351
- (id)initWithItemManager:(id)arg1;	// IMP=0x000000000004b29c
- (id)initWithServiceContainerItem:(id)arg1 isPresentedModally:(_Bool)arg2 valueSource:(id)arg3;	// IMP=0x000000000004aa36
- (id)initWithServiceContainerItem:(id)arg1;	// IMP=0x000000000004aa1f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

