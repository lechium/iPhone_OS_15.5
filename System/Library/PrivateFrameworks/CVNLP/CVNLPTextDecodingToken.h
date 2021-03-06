//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSNumber, NSString;

@interface CVNLPTextDecodingToken : NSObject
{
    _Bool _hasPrecedingSpace;	// 8 = 0x8
    NSString *_string;	// 16 = 0x10
    NSString *_terminatingCharacter;	// 24 = 0x18
    NSNumber *_score;	// 32 = 0x20
    NSNumber *_alignmentScore;	// 40 = 0x28
    struct _NSRange _activationRange;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000000007190
@property(readonly, nonatomic) struct _NSRange activationRange; // @synthesize activationRange=_activationRange;
@property(readonly, copy, nonatomic) NSNumber *alignmentScore; // @synthesize alignmentScore=_alignmentScore;
@property(readonly, copy, nonatomic) NSNumber *score; // @synthesize score=_score;
@property(readonly, copy, nonatomic) NSString *terminatingCharacter; // @synthesize terminatingCharacter=_terminatingCharacter;
@property(readonly, nonatomic) _Bool hasPrecedingSpace; // @synthesize hasPrecedingSpace=_hasPrecedingSpace;
@property(readonly, copy, nonatomic) NSString *string; // @synthesize string=_string;
@property(readonly, copy, nonatomic) NSString *fullString;
- (id)initWithString:(id)arg1 score:(id)arg2 activationRange:(struct _NSRange)arg3 hasPrecedingSpace:(_Bool)arg4;	// IMP=0x0000000000007040
- (id)initWithString:(id)arg1 score:(id)arg2 activationRange:(struct _NSRange)arg3 terminatingCharacter:(id)arg4;	// IMP=0x0000000000007000
- (id)initWithString:(id)arg1 score:(id)arg2 alignmentScore:(id)arg3 activationRange:(struct _NSRange)arg4 terminatingCharacter:(id)arg5;	// IMP=0x0000000000006f10

@end

