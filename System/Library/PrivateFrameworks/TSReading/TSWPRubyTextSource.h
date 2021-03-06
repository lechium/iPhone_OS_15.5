//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TSReading/TSWPTextSource-Protocol.h>

@class NSString, TSWPRangeMap;
@protocol TSWPTextSource;

@interface TSWPRubyTextSource : NSObject <TSWPTextSource>
{
    struct vector<unsigned long, std::allocator<unsigned long>> _spaceCharIndexes;	// 8 = 0x8
    struct vector<unsigned long, std::allocator<unsigned long>> _bidiCharIndexes;	// 32 = 0x20
    id <TSWPTextSource> _source;	// 56 = 0x38
    TSWPRangeMap *_rangeMap;	// 64 = 0x40
    unsigned long long _length;	// 72 = 0x48
    unsigned long long _storageLength;	// 80 = 0x50
}

- (id).cxx_construct;	// IMP=0x000000000026eec4
- (void).cxx_destruct;	// IMP=0x000000000026ee8a
- (unsigned long long)storageLength;	// IMP=0x000000000026ee80
- (unsigned long long)charIndexRemappedFromStorage:(unsigned long long)arg1;	// IMP=0x000000000026ee4f
- (struct _NSRange)charRangeMappedFromStorage:(struct _NSRange)arg1;	// IMP=0x000000000026ee13
- (struct _NSRange)charRangeMappedToStorage:(struct _NSRange)arg1;	// IMP=0x000000000026edda
- (unsigned long long)charIndexMappedFromStorage:(unsigned long long)arg1;	// IMP=0x000000000026eda1
- (unsigned long long)charIndexMappedToStorage:(unsigned long long)arg1;	// IMP=0x000000000026ed6b
- (id)objectAtLocationPriorToMappedCharIndex:(unsigned long long)arg1 forAttributeKind:(unsigned int)arg2 effectiveRange:(struct _NSRange *)arg3;	// IMP=0x000000000026ecec
- (long long)hyphenationLocationBeforeIndex:(long long)arg1 inRange:(struct _NSRange)arg2 locale:(struct __CFLocale *)arg3 hyphenChar:(unsigned int *)arg4;	// IMP=0x000000000026ebf5
- (unsigned short)characterAtIndex:(unsigned long long)arg1;	// IMP=0x000000000026ebbf
- (struct _NSRange)wordAtCharIndex:(unsigned long long)arg1 includePreviousWord:(_Bool)arg2;	// IMP=0x000000000026eb64
- (id)characterStyleAtCharIndex:(unsigned long long)arg1 effectiveRange:(struct _NSRange *)arg2;	// IMP=0x000000000026ead0
- (_Bool)isWritingDirectionRightToLeftForParagraphAtCharIndex:(unsigned long long)arg1;	// IMP=0x000000000026eac8
- (id)paragraphStyleAtCharIndex:(unsigned long long)arg1 effectiveRange:(struct _NSRange *)arg2;	// IMP=0x000000000026ea3c
- (id)attachmentOrFootnoteAtCharIndex:(unsigned long long)arg1;	// IMP=0x000000000026ea06
- (id)attachmentAtCharIndex:(unsigned long long)arg1;	// IMP=0x000000000026e9d0
- (id)footnoteReferenceAtCharIndex:(unsigned long long)arg1;	// IMP=0x000000000026e99a
- (id)smartFieldsWithAttributeKind:(unsigned int)arg1 intersectingRange:(struct _NSRange)arg2;	// IMP=0x000000000026e94c
- (id)smartFieldAtCharIndex:(unsigned long long)arg1 attributeKind:(unsigned int)arg2 effectiveRange:(struct _NSRange *)arg3;	// IMP=0x000000000026e883
- (struct __CFDictionary *)createFilteredCoreTextAttributes:(struct __CFDictionary *)arg1 effectiveRange:(struct _NSRange *)arg2 filterDelegate:(id)arg3;	// IMP=0x000000000026e7ee
- (double)filteredCoreTextAttributesFontScaleEffectiveRange:(struct _NSRange *)arg1 filterDelegate:(id)arg2;	// IMP=0x000000000026e751
- (void)attributesAtCharIndex:(unsigned long long)arg1 attributesOfInterest:(_Bool [19])arg2 attributesTable:(id [19])arg3 effectiveRange:(struct _NSRange *)arg4;	// IMP=0x000000000026e6bd
- (_Bool)hasColumnStyleForParagraphBreakAtCharIndex:(unsigned long long)arg1;	// IMP=0x000000000026e687
- (_Bool)hasColumnBreakAtCharIndex:(unsigned long long)arg1;	// IMP=0x000000000026e651
- (void)getCharacters:(unsigned short *)arg1 range:(struct _NSRange)arg2;	// IMP=0x000000000026e4ed
- (id)string;	// IMP=0x000000000026e24b
- (unsigned long long)length;	// IMP=0x000000000026e241
- (_Bool)adjustRangesByDelta:(long long)arg1;	// IMP=0x000000000026e120
- (void)dealloc;	// IMP=0x000000000026e0d6
- (unsigned int)composedCharacterAtCharIndex:(unsigned long long)arg1 isSurrogatePair:(_Bool *)arg2;	// IMP=0x000000000026dffd
- (id)initWithSource:(id)arg1 subRange:(struct _NSRange)arg2;	// IMP=0x000000000026d799

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

