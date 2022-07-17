//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TextInputCore/NSSecureCoding-Protocol.h>

@class NSArray, NSLocale, NSString, TIWordEntryAligned;

@interface TITypingSessionAligned : NSObject <NSSecureCoding>
{
    _Bool _success;	// 8 = 0x8
    _Bool _containsCPEntries;	// 9 = 0x9
    NSArray *_layouts;	// 16 = 0x10
    NSLocale *_locale;	// 24 = 0x18
    NSArray *_alignedEntries;	// 32 = 0x20
    TIWordEntryAligned *_unfinishedEntry;	// 40 = 0x28
    NSString *_alignedText;	// 48 = 0x30
    NSString *_completeText;	// 56 = 0x38
    NSString *_highConfAlignedSubSegment;	// 64 = 0x40
    unsigned long long _firstCPEntryIndex;	// 72 = 0x48
}

+ (id)resolveBackspacesInKeyboardInputs:(id)arg1;	// IMP=0x00000000000bd551
+ (id)completeStringFromWordEntry:(id)arg1 leadingInputs:(id)arg2 trailingInputs:(id)arg3 followsContinuousPath:(_Bool)arg4;	// IMP=0x00000000000bcd65
+ (id)alignedPathTouchesForWord:(id)arg1;	// IMP=0x00000000000bca03
+ (id)alignedEntryForWord:(id)arg1;	// IMP=0x00000000000bc1ed
+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000bc1e5
- (void).cxx_destruct;	// IMP=0x00000000000bbb63
@property(nonatomic) unsigned long long firstCPEntryIndex; // @synthesize firstCPEntryIndex=_firstCPEntryIndex;
@property(nonatomic) _Bool containsCPEntries; // @synthesize containsCPEntries=_containsCPEntries;
@property(nonatomic) _Bool success; // @synthesize success=_success;
@property(retain, nonatomic) NSString *highConfAlignedSubSegment; // @synthesize highConfAlignedSubSegment=_highConfAlignedSubSegment;
@property(readonly, nonatomic) NSString *completeText; // @synthesize completeText=_completeText;
@property(retain, nonatomic) NSString *alignedText; // @synthesize alignedText=_alignedText;
@property(readonly, nonatomic) TIWordEntryAligned *unfinishedEntry; // @synthesize unfinishedEntry=_unfinishedEntry;
@property(retain, nonatomic) NSArray *alignedEntries; // @synthesize alignedEntries=_alignedEntries;
@property(readonly, nonatomic) NSLocale *locale; // @synthesize locale=_locale;
@property(readonly, nonatomic) NSArray *layouts; // @synthesize layouts=_layouts;
- (_Bool)isNewLineScenarioWithCurrentWord:(id)arg1 andPreviousWord:(id)arg2;	// IMP=0x00000000000bb9e7
- (void)computeAlignedWordsFromSession:(id)arg1;	// IMP=0x00000000000b8c59
- (id)textToAppendForEntry:(id)arg1 sessionIndx:(unsigned long long)arg2;	// IMP=0x00000000000b8b15
- (void)getAlignedTextAndConfidence;	// IMP=0x00000000000b87ca
- (_Bool)compareForConfidenceContextA:(id)arg1 contextB:(id)arg2;	// IMP=0x00000000000b846a
- (id)initWithSession:(id)arg1;	// IMP=0x00000000000b83a2
- (id)restrictedAlignedSessionWithWordLimit:(unsigned long long)arg1;	// IMP=0x00000000000b80cf
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000b7ff5
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000b7dc2

@end
