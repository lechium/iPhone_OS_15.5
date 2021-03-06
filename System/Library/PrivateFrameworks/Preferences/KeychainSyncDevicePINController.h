//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class DevicePINController, NSString, UIKeyboard;

@interface KeychainSyncDevicePINController
{
    DevicePINController *_devicePINController;	// 184 = 0xb8
    _Bool _showingBlockedMessage;	// 192 = 0xc0
    NSString *_enterPasscodeTitle;	// 200 = 0xc8
    NSString *_enterPasscodeReason;	// 208 = 0xd0
    UIKeyboard *_disabledKeyboard;	// 216 = 0xd8
}

- (void).cxx_destruct;	// IMP=0x000000000009a659
@property(retain, nonatomic) UIKeyboard *disabledKeyboard; // @synthesize disabledKeyboard=_disabledKeyboard;
@property(retain, nonatomic) NSString *enterPasscodeReason; // @synthesize enterPasscodeReason=_enterPasscodeReason;
@property(retain, nonatomic) NSString *enterPasscodeTitle; // @synthesize enterPasscodeTitle=_enterPasscodeTitle;
- (void)didFinishEnteringText:(id)arg1;	// IMP=0x000000000009a504
- (long long)tableView:(id)arg1 titleAlignmentForFooterInSection:(long long)arg2;	// IMP=0x000000000009a4f9
- (id)specifiers;	// IMP=0x000000000009a0e7
- (void)updateBlockedState:(id)arg1;	// IMP=0x000000000009a00e
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x0000000000099f45
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0000000000099eb2
- (void)dealloc;	// IMP=0x0000000000099e29
- (id)init;	// IMP=0x0000000000099d4d

@end

