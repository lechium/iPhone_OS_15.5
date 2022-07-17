//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface SCRCMathIdentifierExpression
{
    long long _fontStyle;	// 32 = 0x20
}

@property(readonly, nonatomic) long long fontStyle; // @synthesize fontStyle=_fontStyle;
- (_Bool)canFormWordStartingWithExpression:(id)arg1;	// IMP=0x0000000000014543
- (_Bool)isNaturalSuperscript;	// IMP=0x0000000000014531
- (_Bool)_isPrime;	// IMP=0x00000000000144c8
- (_Bool)isNumber;	// IMP=0x0000000000014349
- (id)mathMLString;	// IMP=0x00000000000142c8
- (id)speakableDescriptionWithSpeakingStyle:(long long)arg1 arePausesAllowed:(_Bool)arg2 isPartOfWord:(_Bool)arg3;	// IMP=0x000000000001419b
- (id)speakableDescriptionWithSpeakingStyle:(long long)arg1 arePausesAllowed:(_Bool)arg2;	// IMP=0x0000000000014186
- (id)description;	// IMP=0x00000000000140d2
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000013fd6

@end
