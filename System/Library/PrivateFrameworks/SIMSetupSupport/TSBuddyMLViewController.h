//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIViewController.h>

#import <SIMSetupSupport/RemoteUIControllerDelegate-Protocol.h>
#import <SIMSetupSupport/TSSetupFlowItem-Protocol.h>

@class CTPlan, CoreTelephonyClient, NSDictionary, NSMutableArray, NSString, RemoteUIController;
@protocol TSSIMSetupFlowDelegate;

@interface TSBuddyMLViewController : UIViewController <RemoteUIControllerDelegate, TSSetupFlowItem>
{
    NSMutableArray *_objectModels;	// 8 = 0x8
    NSString *_idNeedsEncryption;	// 16 = 0x10
    CoreTelephonyClient *_coreTelephonyClient;	// 24 = 0x18
    NSString *_mcc;	// 32 = 0x20
    NSString *_mnc;	// 40 = 0x28
    NSString *_gid1;	// 48 = 0x30
    NSString *_gid2;	// 56 = 0x38
    _Bool _inBuddy;	// 64 = 0x40
    _Bool _initialRequest;	// 65 = 0x41
    id <TSSIMSetupFlowDelegate> _delegate;	// 72 = 0x48
    CTPlan *_plan;	// 80 = 0x50
    NSString *_buddyMLURL;	// 88 = 0x58
    NSDictionary *_postdata;	// 96 = 0x60
    RemoteUIController *_remoteUIController;	// 104 = 0x68
}

- (void).cxx_destruct;	// IMP=0x000000000002d783
@property(retain) RemoteUIController *remoteUIController; // @synthesize remoteUIController=_remoteUIController;
@property(retain) NSDictionary *postdata; // @synthesize postdata=_postdata;
@property(retain) NSString *buddyMLURL; // @synthesize buddyMLURL=_buddyMLURL;
@property(retain) CTPlan *plan; // @synthesize plan=_plan;
@property __weak id <TSSIMSetupFlowDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_requestCipherText:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000002d3df
- (void)_handlePlanAddition:(id)arg1;	// IMP=0x000000000002cecf
- (void)_configureRUIController;	// IMP=0x000000000002cc9c
- (void)remoteUIController:(id)arg1 didFinishLoadWithError:(id)arg2 forRequest:(id)arg3;	// IMP=0x000000000002c7a4
- (void)remoteUIController:(id)arg1 shouldLoadRequest:(id)arg2 redirectResponse:(id)arg3 withCompletionHandler:(CDUnknownBlockType)arg4;	// IMP=0x000000000002c242
- (void)remoteUIController:(id)arg1 didReceiveObjectModel:(id)arg2 actionSignal:(unsigned long long *)arg3;	// IMP=0x000000000002bb13
- (void)remoteUIController:(id)arg1 didRemoveObjectModel:(id)arg2;	// IMP=0x000000000002ba1a
- (void)remoteUIController:(id)arg1 willPresentObjectModel:(id)arg2 modally:(_Bool)arg3;	// IMP=0x000000000002b9fa
- (void)prepare:(CDUnknownBlockType)arg1;	// IMP=0x000000000002b7ff
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x000000000002b7ab
- (void)viewDidLoad;	// IMP=0x000000000002b4ef
- (id)initWithCTPlan:(id)arg1 inBuddy:(_Bool)arg2;	// IMP=0x000000000002b3f7
- (id)initWithCTPlan:(id)arg1 websheetURL:(id)arg2 postdata:(id)arg3;	// IMP=0x000000000002b2be

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

