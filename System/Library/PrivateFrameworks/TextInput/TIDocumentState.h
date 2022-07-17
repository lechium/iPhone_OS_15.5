//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TextInput/NSCopying-Protocol.h>
#import <TextInput/NSSecureCoding-Protocol.h>

@class NSString;

@interface TIDocumentState : NSObject <NSSecureCoding, NSCopying>
{
    NSString *_contextBeforeInput;	// 8 = 0x8
    NSString *_markedText;	// 16 = 0x10
    NSString *_selectedText;	// 24 = 0x18
    NSString *_contextAfterInput;	// 32 = 0x20
    struct _NSRange _selectedRangeInMarkedText;	// 40 = 0x28
}

+ (id)_selectedTextByDeletingInteriorSentences:(id)arg1;	// IMP=0x000000000001665b
+ (id)_string:(id)arg1 byTrimmingWordsAfterIndex:(unsigned long long)arg2;	// IMP=0x00000000000164f3
+ (id)_string:(id)arg1 byTrimmingWordsBeforeIndex:(unsigned long long)arg2;	// IMP=0x00000000000163b6
+ (id)documentStateWithContextBefore:(id)arg1 markedText:(id)arg2 selectedRange:(struct _NSRange)arg3 contextAfter:(id)arg4;	// IMP=0x00000000000162ac
+ (id)documentStateWithContextBefore:(id)arg1 selectedText:(id)arg2 contextAfter:(id)arg3;	// IMP=0x0000000000016202
+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000161fa
+ (id)unboundedDocumentStateForTestingWithContextBefore:(id)arg1 selectedText:(id)arg2 contextAfter:(id)arg3;	// IMP=0x00000000000185a2
+ (id)documentStateForTestingWithContextBefore:(id)arg1 selectedText:(id)arg2 contextAfter:(id)arg3 markedText:(id)arg4 selectedRangeInMarkedText:(struct _NSRange)arg5;	// IMP=0x00000000000184f0
+ (id)documentStateForTestingWithContextBefore:(id)arg1 selectedText:(id)arg2 contextAfter:(id)arg3;	// IMP=0x000000000001844d
+ (id)documentStateForTestingWithText:(id)arg1 selectedRange:(struct _NSRange)arg2;	// IMP=0x00000000000183f0
- (void).cxx_destruct;	// IMP=0x0000000000016116
@property(readonly, nonatomic) struct _NSRange selectedRangeInMarkedText; // @synthesize selectedRangeInMarkedText=_selectedRangeInMarkedText;
@property(readonly, nonatomic) NSString *contextAfterInput; // @synthesize contextAfterInput=_contextAfterInput;
@property(readonly, nonatomic) NSString *selectedText; // @synthesize selectedText=_selectedText;
@property(readonly, nonatomic) NSString *markedText; // @synthesize markedText=_markedText;
@property(readonly, nonatomic) NSString *contextBeforeInput; // @synthesize contextBeforeInput=_contextBeforeInput;
@property(readonly, nonatomic) NSString *string;
- (_Bool)documentIsEmpty;	// IMP=0x0000000000015e99
- (id)description;	// IMP=0x0000000000015ad5
- (unsigned long long)hash;	// IMP=0x000000000001599c
- (unsigned long long)hashString:(id)arg1 intoHashValue:(unsigned long long)arg2;	// IMP=0x0000000000015972
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000156ad
- (_Bool)isEqualIgnoringMarkedText:(id)arg1;	// IMP=0x00000000000154e6
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000001541c
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000015234
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000151ed
- (id)initWithUnboundedContextBefore:(id)arg1 markedText:(id)arg2 selectedText:(id)arg3 unboundedContextAfter:(id)arg4 selectedRangeInMarkedText:(struct _NSRange)arg5;	// IMP=0x000000000001507a
- (id)initWithContextBefore:(id)arg1 markedText:(id)arg2 selectedText:(id)arg3 contextAfter:(id)arg4 selectedRangeInMarkedText:(struct _NSRange)arg5;	// IMP=0x0000000000014d23
- (id)documentStateAfterCursorAdjustment:(long long)arg1;	// IMP=0x0000000000017d62
- (id)documentStateAfterReplacingText:(id)arg1 withText:(id)arg2;	// IMP=0x0000000000017b1a
- (id)documentStateAfterCollapsingSelection;	// IMP=0x00000000000179d1
- (id)documentStateAfterUnmarkingText;	// IMP=0x000000000001766a
- (id)documentStateAfterSettingMarkedText:(id)arg1 selectedRange:(struct _NSRange)arg2;	// IMP=0x0000000000017493
- (id)documentStateAfterDeletingForward;	// IMP=0x00000000000171fe
- (id)documentStateAfterDeletingBackward;	// IMP=0x0000000000016f76
- (id)documentStateAfterInsertingTextAfterSelection:(id)arg1;	// IMP=0x0000000000016e68
- (id)documentStateAfterInsertingText:(id)arg1;	// IMP=0x0000000000016d4d
- (unsigned long long)inputIndexWithTerminatorPredicate:(CDUnknownBlockType)arg1;	// IMP=0x0000000000018334
- (id)inputStringWithTerminatorPredicate:(CDUnknownBlockType)arg1;	// IMP=0x00000000000181fe
- (id)inputStemWithTerminatorPredicate:(CDUnknownBlockType)arg1;	// IMP=0x0000000000018154
- (id)wordPrefixOfString:(id)arg1 withTerminatorPredicate:(CDUnknownBlockType)arg2 reverse:(_Bool)arg3;	// IMP=0x0000000000017faf
- (_Bool)deletingBackwardsWillRemoveText;	// IMP=0x0000000000016c55
- (id)initWithText:(id)arg1 selectedRange:(struct _NSRange)arg2;	// IMP=0x0000000000016b3e

@end
