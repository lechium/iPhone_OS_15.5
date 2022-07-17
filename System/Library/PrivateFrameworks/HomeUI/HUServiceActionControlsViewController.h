//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeUI/HUControlPanelControllerDelegate-Protocol.h>
#import <HomeUI/HUDetailsPresentationDelegateHost-Protocol.h>
#import <HomeUI/HUServiceActionControlsItemManagerDelegate-Protocol.h>

@class HFServiceActionItem, HUControlPanelController, NSString;
@protocol HUPresentationDelegate, HUServiceActionControlsViewControllerDelegate;

@interface HUServiceActionControlsViewController <HUServiceActionControlsItemManagerDelegate, HUControlPanelControllerDelegate, HUDetailsPresentationDelegateHost>
{
    _Bool _requiresPresentingViewControllerDismissal;	// 8 = 0x8
    id <HUPresentationDelegate> _presentationDelegate;	// 16 = 0x10
    HFServiceActionItem *_serviceActionItem;	// 24 = 0x18
    unsigned long long _mode;	// 32 = 0x20
    id <HUServiceActionControlsViewControllerDelegate> _serviceActionControlsDelegate;	// 40 = 0x28
    HUControlPanelController *_controlPanelController;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00000000002ae919
@property(retain, nonatomic) HUControlPanelController *controlPanelController; // @synthesize controlPanelController=_controlPanelController;
@property(nonatomic) __weak id <HUServiceActionControlsViewControllerDelegate> serviceActionControlsDelegate; // @synthesize serviceActionControlsDelegate=_serviceActionControlsDelegate;
@property(readonly, nonatomic) unsigned long long mode; // @synthesize mode=_mode;
@property(retain, nonatomic) HFServiceActionItem *serviceActionItem; // @synthesize serviceActionItem=_serviceActionItem;
@property(nonatomic) _Bool requiresPresentingViewControllerDismissal; // @synthesize requiresPresentingViewControllerDismissal=_requiresPresentingViewControllerDismissal;
@property(nonatomic) __weak id <HUPresentationDelegate> presentationDelegate; // @synthesize presentationDelegate=_presentationDelegate;
- (void)diffableDataItemManager:(id)arg1 willUpdateItems:(id)arg2 addItems:(id)arg3 removeItems:(id)arg4 isInitialLoad:(_Bool)arg5;	// IMP=0x00000000002ae55d
- (_Bool)itemManager:(id)arg1 shouldShowSectionTitleForControlPanelItem:(id)arg2;	// IMP=0x00000000002ae4e6
- (_Bool)itemManager:(id)arg1 shouldShowControlPanelItem:(id)arg2;	// IMP=0x00000000002ae46f
- (void)itemManager:(id)arg1 performUpdateRequest:(id)arg2;	// IMP=0x00000000002ae146
- (_Bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;	// IMP=0x00000000002ae13e
- (void)updateCell:(id)arg1 forItem:(id)arg2 indexPath:(id)arg3 animated:(_Bool)arg4;	// IMP=0x00000000002ae014
- (void)setupCell:(id)arg1 forItem:(id)arg2 indexPath:(id)arg3;	// IMP=0x00000000002adf54
- (Class)cellClassForItem:(id)arg1 indexPath:(id)arg2;	// IMP=0x00000000002ade5e
- (void)_done:(id)arg1;	// IMP=0x00000000002ade05
- (void)viewDidLoad;	// IMP=0x00000000002add62
- (id)initWithServiceActionItem:(id)arg1 mode:(unsigned long long)arg2;	// IMP=0x00000000002adc62

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
