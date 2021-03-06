//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface TIKeyboardCandidateSingle
{
    _Bool _extensionCandidate;	// 80 = 0x50
    NSString *_candidate;	// 88 = 0x58
    NSString *_input;	// 96 = 0x60
    long long _cursorMovement;	// 104 = 0x68
}

+ (int)type;	// IMP=0x000000000002add3
+ (id)secureCandidateForInput:(id)arg1 slotID:(unsigned int)arg2 customInfoType:(unsigned long long)arg3;	// IMP=0x000000000002ad54
+ (id)secureCandidateForInput:(id)arg1 slotID:(unsigned int)arg2;	// IMP=0x000000000002ace4
+ (id)candidateWithUnchangedInput:(id)arg1;	// IMP=0x000000000002ac9b
+ (id)candidateWithCandidate:(id)arg1 forInput:(id)arg2 cursorMovement:(long long)arg3;	// IMP=0x000000000002ac05
+ (id)candidateWithCandidate:(id)arg1 forInput:(id)arg2 customInfoType:(unsigned long long)arg3;	// IMP=0x000000000002ab6f
+ (id)candidateWithCandidate:(id)arg1 forInput:(id)arg2;	// IMP=0x000000000002ab03
+ (id)candidateWithCandidate:(id)arg1 forInput:(id)arg2 extensionCandidate:(_Bool)arg3;	// IMP=0x000000000002aa88
+ (_Bool)supportsSecureCoding;	// IMP=0x000000000002aa80
- (void).cxx_destruct;	// IMP=0x000000000002aa4f
@property(nonatomic) long long cursorMovement; // @synthesize cursorMovement=_cursorMovement;
@property(nonatomic, getter=isExtensionCandidate) _Bool extensionCandidate; // @synthesize extensionCandidate=_extensionCandidate;
@property(copy, nonatomic) NSString *input; // @synthesize input=_input;
@property(copy, nonatomic) NSString *candidate; // @synthesize candidate=_candidate;
- (void)encodeWithCandidateResultSetCoder:(id)arg1;	// IMP=0x000000000002a8ab
- (id)initWithCandidateResultSetCoder:(id)arg1;	// IMP=0x000000000002a759
- (id)candidateByReplacingWithCandidate:(id)arg1 input:(id)arg2;	// IMP=0x000000000002a6cc
- (id)candidateByReplacingWithCandidate:(id)arg1;	// IMP=0x000000000002a666
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000002a56c
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000002a40d
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000002a34f
- (_Bool)isAutocorrectionIgnoringCaseAndDiacriticsAndSupplementalItemPrefix;	// IMP=0x000000000002a23e
- (_Bool)isAutocorrectionIgnoringCaseAndSupplementalItemPrefix;	// IMP=0x000000000002a190
- (id)initWithResponseCandidate:(id)arg1;	// IMP=0x000000000002a172
- (id)initWithUnchangedInput:(id)arg1;	// IMP=0x000000000002a15d
- (id)initWithCandidate:(id)arg1 forInput:(id)arg2 extensionCandidate:(_Bool)arg3;	// IMP=0x000000000002a07a
- (id)initWithCandidate:(id)arg1 forInput:(id)arg2;	// IMP=0x000000000002a065
- (id)initWithCandidate:(id)arg1;	// IMP=0x000000000002a051

@end

