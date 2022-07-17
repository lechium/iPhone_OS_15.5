//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProofReader/PRErrorModel.h>

@interface CHSpellCheckerErrorModel : PRErrorModel
{
}

- (double)transpositionErrorScoreForIntendedFirstCharacter:(unsigned short)arg1 intendedSecondCharacter:(unsigned short)arg2;	// IMP=0x00000000000cb6c0
- (double)replacementErrorScoreForIntendedCharacter:(unsigned short)arg1 actualCharacter:(unsigned short)arg2;	// IMP=0x00000000000cb620
- (unsigned long long)getCharIndex:(unsigned short)arg1;	// IMP=0x00000000000cb5c0

@end
