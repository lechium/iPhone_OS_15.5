//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <OnBoardingKit/OBPasscodeFieldDelegate-Protocol.h>

@class NSString, OBPasscodeField;

__attribute__((visibility("hidden")))
@interface OBSimplePasscodeInputView <OBPasscodeFieldDelegate>
{
    _Bool _limitCharactersToNumbers;	// 8 = 0x8
    OBPasscodeField *_passcodeField;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000006377
@property(retain, nonatomic) OBPasscodeField *passcodeField; // @synthesize passcodeField=_passcodeField;
@property(nonatomic) _Bool limitCharactersToNumbers; // @synthesize limitCharactersToNumbers=_limitCharactersToNumbers;
- (void)passcodeField:(id)arg1 enteredPasscode:(id)arg2;	// IMP=0x0000000000006252
- (id)passcode;	// IMP=0x0000000000006202
- (void)setPasscode:(id)arg1;	// IMP=0x0000000000006190
- (id)passcodeDisplayView;	// IMP=0x000000000000617b
- (id)initWithFrame:(struct CGRect)arg1 numberOfEntryFields:(unsigned long long)arg2;	// IMP=0x0000000000005e62

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

