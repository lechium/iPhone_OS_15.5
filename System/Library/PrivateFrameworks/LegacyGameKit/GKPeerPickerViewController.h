//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class GKContentView, GKSession, NSMutableArray, NSMutableDictionary, NSString, NSTimer, UITableView;

@interface GKPeerPickerViewController : UIViewController
{
    NSMutableDictionary *_sessionMap;	// 8 = 0x8
    GKContentView *_btView;	// 16 = 0x10
    GKContentView *_listView;	// 24 = 0x18
    GKContentView *_statusView;	// 32 = 0x20
    GKContentView *_inviteView;	// 40 = 0x28
    GKContentView *_currentView;	// 48 = 0x30
    GKContentView *_connectTypeView;	// 56 = 0x38
    GKContentView *_noPeersView;	// 64 = 0x40
    UITableView *_peerTableView;	// 72 = 0x48
    unsigned long long _connectionTypesMask;	// 80 = 0x50
    NSString *_currentConnectionTypeKey;	// 88 = 0x58
    NSMutableArray *_menuQueue;	// 96 = 0x60
    _Bool _animating;	// 104 = 0x68
    _Bool _alertPresented;	// 105 = 0x69
    int _state;	// 108 = 0x6c
    int _pendingState;	// 112 = 0x70
    _Bool _updating;	// 116 = 0x74
    NSTimer *_invitationWaitTimer;	// 120 = 0x78
    int _bluetoothStatus;	// 128 = 0x80
    NSString *_searchingForServicesString;	// 136 = 0x88
    NSMutableArray *_peers;	// 144 = 0x90
    NSString *_pendingPeer;	// 152 = 0x98
    _Bool _alertCancelled;	// 160 = 0xa0
    id _delegate;	// 168 = 0xa8
}

- (void).cxx_destruct;	// IMP=0x000000000000f319
@property(retain, nonatomic) NSTimer *invitationWaitTimer; // @synthesize invitationWaitTimer=_invitationWaitTimer;
@property(nonatomic) _Bool updating; // @synthesize updating=_updating;
@property(nonatomic) int pendingState; // @synthesize pendingState=_pendingState;
@property(nonatomic) int state; // @synthesize state=_state;
@property(nonatomic) _Bool alertCancelled; // @synthesize alertCancelled=_alertCancelled;
@property(nonatomic) _Bool alertPresented; // @synthesize alertPresented=_alertPresented;
@property(nonatomic, getter=isAnimating) _Bool animating; // @synthesize animating=_animating;
@property(retain, nonatomic) NSMutableArray *menuQueue; // @synthesize menuQueue=_menuQueue;
@property(nonatomic) int bluetoothStatus; // @synthesize bluetoothStatus=_bluetoothStatus;
@property(nonatomic) NSString *currentConnectionTypeKey; // @synthesize currentConnectionTypeKey=_currentConnectionTypeKey;
@property unsigned long long connectionTypesMask; // @synthesize connectionTypesMask=_connectionTypesMask;
@property(retain, nonatomic) NSMutableArray *peers; // @synthesize peers=_peers;
@property(copy, nonatomic) NSString *searchingForServicesString; // @synthesize searchingForServicesString=_searchingForServicesString;
@property(retain, nonatomic) UITableView *peerTableView; // @synthesize peerTableView=_peerTableView;
@property(readonly, nonatomic) GKContentView *currentView; // @synthesize currentView=_currentView;
@property(retain, nonatomic) GKContentView *noPeersView; // @synthesize noPeersView=_noPeersView;
@property(retain, nonatomic) GKContentView *connectTypeView; // @synthesize connectTypeView=_connectTypeView;
@property(retain, nonatomic) GKContentView *inviteView; // @synthesize inviteView=_inviteView;
@property(retain, nonatomic) GKContentView *statusView; // @synthesize statusView=_statusView;
@property(retain, nonatomic) GKContentView *listView; // @synthesize listView=_listView;
@property(retain, nonatomic) GKContentView *btView; // @synthesize btView=_btView;
@property(retain, nonatomic) NSMutableDictionary *sessionMap; // @synthesize sessionMap=_sessionMap;
@property __weak id delegate; // @synthesize delegate=_delegate;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;	// IMP=0x000000000000efdd
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2;	// IMP=0x000000000000ef29
- (void)didPresentAlertView:(id)arg1;	// IMP=0x000000000000eea9
- (void)_turnBluetoothOn:(id)arg1;	// IMP=0x000000000000eea3
- (void)_nearbyButtonPressed:(id)arg1;	// IMP=0x000000000000ee0e
- (void)_onlineButtonPressed:(id)arg1;	// IMP=0x000000000000eda8
- (void)_declineInvitation:(id)arg1;	// IMP=0x000000000000ed37
- (void)_acceptInvitation:(id)arg1;	// IMP=0x000000000000eafd
- (void)_cancelButtonPressed:(id)arg1;	// IMP=0x000000000000dc1a
- (void)session:(id)arg1 didFailWithError:(id)arg2;	// IMP=0x000000000000db38
- (void)session:(id)arg1 peerDidBecomeBusy:(id)arg2;	// IMP=0x000000000000d9bf
- (void)session:(id)arg1 connectionWithPeerFailed:(id)arg2 withError:(id)arg3;	// IMP=0x000000000000d318
- (void)session:(id)arg1 didReceiveConnectionRequestFromPeer:(id)arg2;	// IMP=0x000000000000ce98
- (void)session:(id)arg1 peer:(id)arg2 didChangeState:(int)arg3;	// IMP=0x000000000000c4f9
- (void)_changePanelAnimationDidEnd:(id)arg1;	// IMP=0x000000000000bdad
- (void)contentView:(id)arg1 clickedButtonAtIndex:(long long)arg2;	// IMP=0x000000000000bcdf
- (void)_showView:(id)arg1 animated:(_Bool)arg2;	// IMP=0x000000000000bbdc
- (void)_showNoPeersView:(_Bool)arg1;	// IMP=0x000000000000bb4c
- (void)_showStatusView:(int)arg1 peerName:(id)arg2 animated:(_Bool)arg3;	// IMP=0x000000000000b735
- (void)_showInviteViewWithName:(id)arg1 animated:(_Bool)arg2;	// IMP=0x000000000000b57c
- (void)_showListView:(_Bool)arg1;	// IMP=0x000000000000b51f
- (void)_setupListView;	// IMP=0x000000000000b0d5
- (void)_showBluetoothErrorView:(_Bool)arg1;	// IMP=0x000000000000af45
- (void)_showRequestBluetoothView:(_Bool)arg1;	// IMP=0x000000000000ae8f
- (void)_showConnectTypeView:(_Bool)arg1;	// IMP=0x000000000000ae20
- (_Bool)_shouldShowConnectTypeView;	// IMP=0x000000000000ad8d
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x000000000000acea
- (id)_createAlertFromGKContentView:(id)arg1;	// IMP=0x000000000000a91a
- (_Bool)_updatePicker:(int)arg1;	// IMP=0x0000000000008441
- (void)loadInitialView;	// IMP=0x00000000000083ef
- (void)loadView;	// IMP=0x00000000000083dd
- (void)dismiss;	// IMP=0x000000000000837d
- (void)show;	// IMP=0x00000000000082cb
- (void)_createNoPeersViewIfNeeded;	// IMP=0x00000000000081b2
- (void)_createStatusViewIfNeeded;	// IMP=0x00000000000080ad
- (void)_createInviteViewIfNeeded;	// IMP=0x0000000000007f61
- (void)_createListViewIfNeeded;	// IMP=0x0000000000007e64
- (void)_createBTViewIfNeeded;	// IMP=0x0000000000007c40
- (void)_createConnectTypeViewIfNeeded;	// IMP=0x0000000000007ad6
- (void)_btPowerStateChanged:(id)arg1;	// IMP=0x0000000000007ad0
- (int)_determineBluetoothStatus;	// IMP=0x0000000000007aa2
- (void)_timedOutWaitingForInvitation:(id)arg1;	// IMP=0x000000000000795c
- (void)_setSessionAvailabilityForState:(int)arg1;	// IMP=0x00000000000074fd
- (void)_sortAndUpdateTable;	// IMP=0x00000000000073cb
@property(readonly, nonatomic, getter=isVisible) _Bool visible; // @dynamic visible;
@property(readonly, nonatomic) GKSession *currentSession; // @dynamic currentSession;
- (void)dealloc;	// IMP=0x0000000000006fb8
- (void)didReceiveMemoryWarning;	// IMP=0x0000000000006f89
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;	// IMP=0x0000000000006f81
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x0000000000006e44
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x000000000000f995
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;	// IMP=0x000000000000f8c2
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x000000000000f3ca
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x000000000000f335
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x000000000000f32a

@end

