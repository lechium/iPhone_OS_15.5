//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSNumber, NSString;

@interface TIMecabraCandidate
{
    _Bool _emojiCandidate;	// 8 = 0x8
    _Bool _extensionCandidate;	// 9 = 0x9
    _Bool _isForShortcutConversion;	// 10 = 0xa
    _Bool _isAutocorrection;	// 11 = 0xb
    _Bool _OTAWordListCandidate;	// 12 = 0xc
    _Bool _regionalCandidate;	// 13 = 0xd
    _Bool _responseKitCandidate;	// 14 = 0xe
    _Bool _bilingualCandidate;	// 15 = 0xf
    _Bool _asIsCandidate;	// 16 = 0x10
    _Bool _continuousPathConversion;	// 17 = 0x11
    _Bool _partialCandidate;	// 18 = 0x12
    _Bool _wubixingConvertedByPinyin;	// 19 = 0x13
    _Bool _prefixMatched;	// 20 = 0x14
    NSString *_candidate;	// 24 = 0x18
    NSString *_input;	// 32 = 0x20
    NSNumber *_mecabraCandidatePointerValue;	// 40 = 0x28
    unsigned long long _deleteCount;	// 48 = 0x30
    long long _cursorMovement;	// 56 = 0x38
    NSString *_responseKitCategory;	// 64 = 0x40
}

+ (int)type;	// IMP=0x000000000004d8ff
+ (_Bool)supportsSecureCoding;	// IMP=0x000000000004d8f7
- (void).cxx_destruct;	// IMP=0x000000000004d8a4
- (_Bool)isPrefixMatched;	// IMP=0x000000000004d894
- (_Bool)isWubixingConvertedByPinyin;	// IMP=0x000000000004d884
- (_Bool)isPartialCandidate;	// IMP=0x000000000004d874
@property(nonatomic, getter=isContinuousPathConversion) _Bool continuousPathConversion; // @synthesize continuousPathConversion=_continuousPathConversion;
- (_Bool)isAsIsCandidate;	// IMP=0x000000000004d854
- (_Bool)isBilingualCandidate;	// IMP=0x000000000004d844
- (id)responseKitCategory;	// IMP=0x000000000004d833
- (_Bool)isResponseKitCandidate;	// IMP=0x000000000004d823
- (long long)cursorMovement;	// IMP=0x000000000004d812
- (_Bool)isRegionalCandidate;	// IMP=0x000000000004d802
- (_Bool)isOTAWordListCandidate;	// IMP=0x000000000004d7f2
- (_Bool)isAutocorrection;	// IMP=0x000000000004d7e2
- (_Bool)isForShortcutConversion;	// IMP=0x000000000004d7d2
- (_Bool)isExtensionCandidate;	// IMP=0x000000000004d7c2
- (_Bool)isEmojiCandidate;	// IMP=0x000000000004d7b2
@property(retain, nonatomic) NSNumber *mecabraCandidatePointerValue; // @synthesize mecabraCandidatePointerValue=_mecabraCandidatePointerValue;
- (id)input;	// IMP=0x000000000004d77c
- (id)candidate;	// IMP=0x000000000004d76b
- (void)encodeWithCandidateResultSetCoder:(id)arg1;	// IMP=0x000000000004d669
- (id)initWithCandidateResultSetCoder:(id)arg1;	// IMP=0x000000000004d427
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000004d2a9
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000004cfad
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000004ccd8
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000004cb57
@property(readonly, nonatomic) unsigned short flags;
- (_Bool)isMecabraCandidate;	// IMP=0x000000000004ca50
- (unsigned long long)deleteCount;	// IMP=0x000000000004ca2f
- (_Bool)isFullwidthCandidate;	// IMP=0x000000000004ca12
- (id)label;	// IMP=0x000000000004c972
- (id)initWithCandidate:(id)arg1 forInput:(id)arg2 mecabraCandidatePointerValue:(id)arg3 withFlags:(unsigned short)arg4 deleteCount:(unsigned long long)arg5 cursorMovement:(long long)arg6;	// IMP=0x000000000004c774
- (id)initWithCandidate:(id)arg1 forInput:(id)arg2 mecabraCandidatePointerValue:(id)arg3 withFlags:(unsigned short)arg4;	// IMP=0x000000000004c752
- (id)initWithResponseKitString:(id)arg1 responseKitCategory:(id)arg2 mecabraCandidatePointerValue:(id)arg3;	// IMP=0x000000000004c6cd
- (id)initWithSurface:(id)arg1 input:(id)arg2 mecabraCandidatePointerValue:(id)arg3;	// IMP=0x000000000004c6b8

@end

