//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Preferences/KeychainSyncViewController-Protocol.h>

@class PSKeychainSyncHeaderView, PSSpecifier;
@protocol KeychainSyncViewControllerDelegate;

@interface PSKeychainSyncViewController <KeychainSyncViewController>
{
    PSKeychainSyncHeaderView *_headerView;	// 184 = 0xb8
    PSSpecifier *_groupSpecifier;	// 192 = 0xc0
    id <KeychainSyncViewControllerDelegate> _delegate;	// 200 = 0xc8
}

- (void).cxx_destruct;	// IMP=0x00000000000a4ff9
@property(nonatomic) __weak id <KeychainSyncViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (double)heightForHeaderInTableView:(id)arg1;	// IMP=0x00000000000a4f29
- (id)viewForHeaderInTableView:(id)arg1;	// IMP=0x00000000000a4f17
- (void)setTitle:(id)arg1;	// IMP=0x00000000000a4e47
- (id)specifiers;	// IMP=0x00000000000a4da7
- (id)groupSpecifier;	// IMP=0x00000000000a4d92
- (id)headerView;	// IMP=0x00000000000a4d33

@end
