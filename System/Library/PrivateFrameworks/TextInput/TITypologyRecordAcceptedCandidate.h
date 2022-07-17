//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, TIKeyboardCandidate, TIKeyboardConfiguration, TIKeyboardState;

@interface TITypologyRecordAcceptedCandidate
{
    TIKeyboardCandidate *_candidate;	// 24 = 0x18
    TIKeyboardState *_keyboardState;	// 32 = 0x20
    TIKeyboardConfiguration *_keyboardConfig;	// 40 = 0x28
    NSString *_textToCommit;	// 48 = 0x30
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000000443d
- (void).cxx_destruct;	// IMP=0x00000000000043ea
@property(copy, nonatomic) NSString *textToCommit; // @synthesize textToCommit=_textToCommit;
@property(retain, nonatomic) TIKeyboardConfiguration *keyboardConfig; // @synthesize keyboardConfig=_keyboardConfig;
@property(retain, nonatomic) TIKeyboardState *keyboardState; // @synthesize keyboardState=_keyboardState;
@property(retain, nonatomic) TIKeyboardCandidate *candidate; // @synthesize candidate=_candidate;
- (void)replaceDocumentState:(id)arg1;	// IMP=0x00000000000042e7
- (id)changedText;	// IMP=0x0000000000004082
- (id)shortDescription;	// IMP=0x0000000000003ecd
- (id)textSummary;	// IMP=0x0000000000003e5c
- (void)removeContextFromKeyboardState;	// IMP=0x0000000000003ddd
- (id)currentKeyboardState;	// IMP=0x0000000000003dcb
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000003cf6
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000003b7f
- (void)applyToStatistic:(id)arg1;	// IMP=0x000000000003ad1a

@end
