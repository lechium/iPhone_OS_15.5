//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Preferences/PSListController.h>

@class AFSettingsConnection, PSDeleteButtonCell, UIActivityIndicatorView;
@protocol AssistantHistoryDelegate;

@interface AssistantHistoryViewController : PSListController
{
    AFSettingsConnection *_settingsConnection;	// 192 = 0xc0
    PSDeleteButtonCell *_deleteButtonCell;	// 200 = 0xc8
    UIActivityIndicatorView *_indicatorView;	// 208 = 0xd0
    id <AssistantHistoryDelegate> _delegate;	// 216 = 0xd8
}

- (void).cxx_destruct;	// IMP=0x0000000000003a3f
@property(nonatomic) __weak id <AssistantHistoryDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_presentPrivacySheet;	// IMP=0x00000000000039a8
- (id)_deletionResponseAlertForFailure;	// IMP=0x00000000000037ce
- (void)_presentErrorAlert;	// IMP=0x00000000000036b8
- (void)_endIndicatorViewSpinning;	// IMP=0x000000000000350a
- (void)_animateSpinnerIn;	// IMP=0x000000000000335c
- (void)_startIndicatorViewSpinning;	// IMP=0x000000000000306a
- (void)_deleteSiriHistory;	// IMP=0x0000000000002e33
- (void)_handleDeleteSiriHistoryButtonPress;	// IMP=0x00000000000029b8
- (long long)_getDataSharingOptInStatus;	// IMP=0x000000000000277f
- (id)specifiers;	// IMP=0x000000000000213f
- (id)init;	// IMP=0x000000000000204c

@end

