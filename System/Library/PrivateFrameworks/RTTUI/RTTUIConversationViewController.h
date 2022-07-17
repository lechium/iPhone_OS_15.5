//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

#import <RTTUI/RTTUIServiceCellDelegate-Protocol.h>
#import <RTTUI/RTTUIUtteranceCellDelegate-Protocol.h>
#import <RTTUI/UITableViewDataSource-Protocol.h>
#import <RTTUI/UITableViewDelegate-Protocol.h>
#import <RTTUI/UITextViewDelegate-Protocol.h>

@class AXDispatchTimer, CAShapeLayer, DDParsecCollectionViewController, NSDictionary, NSMutableArray, NSMutableCharacterSet, NSMutableString, NSString, RTTConversation, RTTUITextView, RTTUtterance, TUCall, UIButton, UITableView;
@protocol BSInvalidatable;

@interface RTTUIConversationViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, RTTUIUtteranceCellDelegate, UITextViewDelegate, RTTUIServiceCellDelegate>
{
    RTTUITextView *_textView;	// 8 = 0x8
    CAShapeLayer *_bubbleLayer;	// 16 = 0x10
    UIButton *_gaButton;	// 24 = 0x18
    AXDispatchTimer *_ttyPredictionsTimer;	// 32 = 0x20
    AXDispatchTimer *_realTimeTimeout;	// 40 = 0x28
    AXDispatchTimer *_muteStatusTimeout;	// 48 = 0x30
    NSMutableCharacterSet *_unsupportedCharacterSet;	// 56 = 0x38
    NSDictionary *_asciiSubstitutions;	// 64 = 0x40
    AXDispatchTimer *_voAnnouncementTimer;	// 72 = 0x48
    NSMutableString *_voAnnouncementBuffer;	// 80 = 0x50
    NSMutableArray *_serviceUpdates;	// 88 = 0x58
    id <BSInvalidatable> _sleepTimerDisabledAssertion;	// 96 = 0x60
    AXDispatchTimer *_textInputQuickCoalescer;	// 104 = 0x68
    RTTConversation *_conversation;	// 112 = 0x70
    CDUnknownBlockType _rttConversationAvailabilityCallback;	// 120 = 0x78
    DDParsecCollectionViewController *_lookupController;	// 128 = 0x80
    UITableView *_tableView;	// 136 = 0x88
    RTTUtterance *_currentUtterance;	// 144 = 0x90
    TUCall *_call;	// 152 = 0x98
}

+ (_Bool)_validRectangle:(struct CGRect)arg1;	// IMP=0x00000000000092d0
+ (id)viewControllerForConversation:(id)arg1;	// IMP=0x00000000000044d2
+ (id)viewControllerForCall:(id)arg1;	// IMP=0x000000000000443a
- (void).cxx_destruct;	// IMP=0x000000000000f81a
@property(retain, nonatomic) TUCall *call; // @synthesize call=_call;
@property(retain, nonatomic) RTTUtterance *currentUtterance; // @synthesize currentUtterance=_currentUtterance;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) DDParsecCollectionViewController *lookupController; // @synthesize lookupController=_lookupController;
@property(copy, nonatomic) CDUnknownBlockType rttConversationAvailabilityCallback; // @synthesize rttConversationAvailabilityCallback=_rttConversationAvailabilityCallback;
@property(retain, nonatomic) RTTConversation *conversation; // @synthesize conversation=_conversation;
- (void)_define:(id)arg1;	// IMP=0x000000000000f22a
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;	// IMP=0x000000000000f18f
- (_Bool)utteranceIsSelected;	// IMP=0x000000000000ef8a
- (void)textViewDidChange:(id)arg1;	// IMP=0x000000000000ecb2
- (_Bool)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;	// IMP=0x000000000000e78c
- (void)textViewDidChangeSelection:(id)arg1;	// IMP=0x000000000000e6a9
- (void)utteranceCellDidUpdateContent:(id)arg1;	// IMP=0x000000000000e551
- (void)_updateTableViewRowsAtIndexPaths:(id)arg1 action:(long long)arg2 animation:(long long)arg3;	// IMP=0x000000000000e2e2
- (void)_updateTableViewRowAtIndexPath:(id)arg1 action:(long long)arg2 animation:(long long)arg3;	// IMP=0x000000000000e224
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x000000000000dfee
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x000000000000d444
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;	// IMP=0x000000000000d02d
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;	// IMP=0x000000000000d01b
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x000000000000cf17
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x000000000000cf0c
- (void)updateViewForKeyboard:(id)arg1;	// IMP=0x000000000000cea5
- (void)shareCallInfo:(id)arg1;	// IMP=0x000000000000cd02
- (void)setupTableView;	// IMP=0x000000000000c258
- (void)updateTableViewSizeAnimated:(_Bool)arg1;	// IMP=0x000000000000b6b2
- (void)updateGAButton;	// IMP=0x000000000000b417
- (void)_processRealtimeTimeout;	// IMP=0x000000000000b3a7
- (void)realtimeTextDidChange;	// IMP=0x000000000000abf1
- (id)lastConversationRowPathForUtterance:(id)arg1;	// IMP=0x000000000000ab29
- (void)gaButtonPressed:(id)arg1;	// IMP=0x000000000000a946
- (void)deviceDidReceiveString:(id)arg1 forUtterance:(id)arg2;	// IMP=0x0000000000009c36
- (void)_scrollToIndexPathIfNecessary:(id)arg1 animated:(_Bool)arg2;	// IMP=0x00000000000095ec
- (void)updateVoiceOverAnnouncement:(id)arg1;	// IMP=0x0000000000009353
- (id)currentContactPath;	// IMP=0x0000000000009249
- (id)cannedResponses;	// IMP=0x00000000000091f2
- (id)serviceUpdateCellAtIndexPath:(id)arg1;	// IMP=0x000000000000909d
- (id)utteranceCellAtIndexPath:(id)arg1;	// IMP=0x0000000000008f48
- (void)setTextViewUtterance:(id)arg1;	// IMP=0x0000000000008f0a
- (id)textViewUtterance;	// IMP=0x0000000000008eed
- (void)updateUtterance:(id)arg1 forIndexPath:(id)arg2;	// IMP=0x0000000000008e65
- (id)addUtterance:(id)arg1;	// IMP=0x0000000000008831
- (void)_replaceServiceCellWithOldUpdate:(id)arg1 withNewUpdate:(id)arg2 options:(id)arg3;	// IMP=0x0000000000008590
- (void)replaceServiceCellWithOldUpdate:(id)arg1 withNewUpdate:(id)arg2 options:(id)arg3;	// IMP=0x000000000000845a
- (void)_removeServiceCellWithUpdate:(id)arg1;	// IMP=0x000000000000826f
- (void)removeServiceCellWithUpdate:(id)arg1;	// IMP=0x00000000000081ac
- (void)_addServiceCellWithUpdate:(id)arg1 options:(id)arg2;	// IMP=0x0000000000007fc0
- (void)addServiceCellWithUpdate:(id)arg1 options:(id)arg2;	// IMP=0x0000000000007e97
- (void)updateInputEnabled;	// IMP=0x0000000000007d3b
- (_Bool)currentCallIsDowngraded;	// IMP=0x0000000000007cf4
- (_Bool)isCurrentCallSendingOnHold;	// IMP=0x0000000000007cb0
- (_Bool)isCurrentCallReceivingOnHold;	// IMP=0x0000000000007ba6
- (_Bool)isCurrentCallOnHold;	// IMP=0x0000000000007b6d
- (_Bool)isCurrentCallConnected;	// IMP=0x0000000000007b27
- (id)currentCall;	// IMP=0x0000000000007b15
- (id)contactDisplayString;	// IMP=0x0000000000007995
- (void)logCallHold:(_Bool)arg1;	// IMP=0x0000000000007808
- (void)toggleHold:(id)arg1;	// IMP=0x0000000000007646
- (void)toggleMute:(id)arg1;	// IMP=0x000000000000721c
- (void)updateBarButtons;	// IMP=0x000000000000686a
- (void)_updateBarButtonState;	// IMP=0x0000000000006458
- (void)showCallEnded;	// IMP=0x00000000000063c1
- (void)updateCallHold:(id)arg1;	// IMP=0x00000000000060bc
- (void)callDidConnect:(id)arg1;	// IMP=0x000000000000589d
- (void)updateCallDowngradeStatus;	// IMP=0x0000000000005785
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x000000000000551e
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x000000000000530b
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x00000000000051f4
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0000000000004f5f
- (void)viewDidLoad;	// IMP=0x0000000000004f07
- (void)dealloc;	// IMP=0x0000000000004e6f
- (id)inputTextView;	// IMP=0x0000000000004914
- (id)init;	// IMP=0x000000000000459b
- (_Bool)_canShowWhileLocked;	// IMP=0x0000000000004593

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
