//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UIKitCore/NSSecureCoding-Protocol.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface UIDictationInterpretation : NSObject <NSSecureCoding>
{
    NSArray *_tokens;	// 8 = 0x8
    double _averageConfidenceScore;	// 16 = 0x10
}

+ (id)serializedInterpretationFromTokens:(id)arg1 transform:(const struct __CFString *)arg2;	// IMP=0x0000000000a0e5aa
+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000a0e0dd
- (void).cxx_destruct;	// IMP=0x0000000000a0eaab
@property(nonatomic) double averageConfidenceScore; // @synthesize averageConfidenceScore=_averageConfidenceScore;
@property(readonly, nonatomic) NSArray *tokens; // @synthesize tokens=_tokens;
- (id)description;	// IMP=0x0000000000a0e95a
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000a0e887
- (id)serializedInterpretationWithTransform:(const struct __CFString *)arg1;	// IMP=0x0000000000a0e53b
@property(readonly, nonatomic) _Bool removeSpaceAfter;
@property(readonly, nonatomic) _Bool removeSpaceBefore;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000a0e437
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000a0e323
- (id)initWithTokens:(id)arg1 score:(double)arg2;	// IMP=0x0000000000a0e28a
- (id)initWithTokens:(id)arg1;	// IMP=0x0000000000a0e0e5

@end
