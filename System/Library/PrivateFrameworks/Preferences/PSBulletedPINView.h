//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Preferences/PSPasscodeFieldDelegate-Protocol.h>

@class NSString, PSPasscodeField;

@interface PSBulletedPINView <PSPasscodeFieldDelegate>
{
    PSPasscodeField *_passcodeField;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x0000000000076458
- (void)passcodeField:(id)arg1 enteredPasscode:(id)arg2;	// IMP=0x0000000000076446
- (void)setBlocked:(_Bool)arg1;	// IMP=0x0000000000076423
- (_Bool)resignFirstResponder;	// IMP=0x00000000000763d7
- (_Bool)becomeFirstResponder;	// IMP=0x00000000000763ba
- (_Bool)canBecomeFirstResponder;	// IMP=0x000000000007639d
- (_Bool)isFirstResponder;	// IMP=0x0000000000076380
- (void)appendString:(id)arg1;	// IMP=0x0000000000076347
- (void)deleteLastCharacter;	// IMP=0x000000000007630e
- (void)setStringValue:(id)arg1;	// IMP=0x00000000000762d5
- (id)stringValue;	// IMP=0x00000000000762b8
- (void)hidePasscodeField:(_Bool)arg1;	// IMP=0x0000000000076080
- (void)layoutSubviews;	// IMP=0x0000000000075e76
- (void)dealloc;	// IMP=0x0000000000075e2b
- (id)initWithFrame:(struct CGRect)arg1 numberOfFields:(int)arg2;	// IMP=0x0000000000075b0b
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000075afd

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
