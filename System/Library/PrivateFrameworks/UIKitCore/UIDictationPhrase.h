//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface UIDictationPhrase : NSObject
{
    NSString *_text;	// 8 = 0x8
    NSArray *_alternativeInterpretations;	// 16 = 0x10
    long long _style;	// 24 = 0x18
}

+ (id)phraseWithText:(id)arg1 alternativeInterpretations:(id)arg2 style:(long long)arg3;	// IMP=0x0000000000b74006
+ (id)phraseWithText:(id)arg1 alternativeInterpretations:(id)arg2;	// IMP=0x0000000000b73fc5
@property(nonatomic) long long style; // @synthesize style=_style;
@property(readonly, nonatomic) NSArray *alternativeInterpretations; // @synthesize alternativeInterpretations=_alternativeInterpretations;
@property(readonly, nonatomic) NSString *text; // @synthesize text=_text;
- (id)description;	// IMP=0x0000000000b74050
- (void)dealloc;	// IMP=0x0000000000b73f7b
- (id)initWithText:(id)arg1 alternativeInterpretations:(id)arg2 style:(long long)arg3;	// IMP=0x0000000000b73f03

@end

