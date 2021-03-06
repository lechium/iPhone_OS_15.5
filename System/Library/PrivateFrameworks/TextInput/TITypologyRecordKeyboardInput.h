//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class TIKeyboardConfiguration, TIKeyboardInput, TIKeyboardOutput, TIKeyboardState;

@interface TITypologyRecordKeyboardInput
{
    TIKeyboardInput *_input;	// 24 = 0x18
    TIKeyboardState *_keyboardState;	// 32 = 0x20
    TIKeyboardOutput *_output;	// 40 = 0x28
    TIKeyboardConfiguration *_keyboardConfig;	// 48 = 0x30
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000000673d
- (void).cxx_destruct;	// IMP=0x00000000000066ea
@property(retain, nonatomic) TIKeyboardConfiguration *keyboardConfig; // @synthesize keyboardConfig=_keyboardConfig;
@property(retain, nonatomic) TIKeyboardOutput *output; // @synthesize output=_output;
@property(retain, nonatomic) TIKeyboardState *keyboardState; // @synthesize keyboardState=_keyboardState;
@property(retain, nonatomic) TIKeyboardInput *input; // @synthesize input=_input;
- (void)replaceDocumentState:(id)arg1;	// IMP=0x00000000000065e4
- (id)changedText;	// IMP=0x0000000000005d30
- (id)shortDescription;	// IMP=0x0000000000005821
- (id)textSummary;	// IMP=0x0000000000005574
- (void)removeContextFromKeyboardState;	// IMP=0x00000000000054f5
- (id)currentKeyboardState;	// IMP=0x00000000000054e3
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000000540e
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000052ad
- (void)applyToStatistic:(id)arg1;	// IMP=0x000000000003ac93

@end

