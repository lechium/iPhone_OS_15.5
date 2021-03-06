//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIFoundation/NSTextStorageObserving-Protocol.h>

@class NSAttributedString, NSCountableTextRange, NSRunStorage, NSStorage, NSString, NSTextStorage;
@protocol NSTextContentStorageDelegate;

@interface NSTextContentStorage <NSTextStorageObserving>
{
    NSAttributedString *_attributedString;	// 64 = 0x40
    NSTextStorage *_textStorage;	// 72 = 0x48
    NSCountableTextRange *_documentRange;	// 80 = 0x50
    NSRunStorage *_indexTable;	// 88 = 0x58
    NSStorage *_elements;	// 96 = 0x60
    struct _NSRange _cachedRange;	// 104 = 0x68
    struct _NSRange _modifiedRange;	// 120 = 0x78
    long long _modifiedDocumentLengthDelta;	// 136 = 0x88
    struct _NSRange _editedRange;	// 144 = 0x90
    long long _editedDelta;	// 160 = 0xa0
    unsigned long long _editedMask;	// 168 = 0xa8
    _Bool _notifyingToFixSelection;	// 176 = 0xb0
    struct {
        id *_field1;
        struct _NSRange _field2;
        id _field3[64];
        long long _field4;
        struct _NSRange _field5;
        unsigned long long _field6;
        long long _field7;
        _Bool _field8;
        _Bool _field9;
    } *_activeEnumerationCache;	// 184 = 0xb8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000009ecbe
- (_Bool)isCountableDataSource;	// IMP=0x00000000000a2f9e
- (id)adjustedRangeFromRange:(id)arg1 forEditingTextSelection:(_Bool)arg2;	// IMP=0x00000000000a2d61
- (long long)offsetFromLocation:(id)arg1 toLocation:(id)arg2;	// IMP=0x00000000000a2c18
- (id)locationFromLocation:(id)arg1 offset:(long long)arg2;	// IMP=0x00000000000a2c06
- (id)locationFromLocation:(id)arg1 withOffset:(long long)arg2;	// IMP=0x00000000000a2ac5
- (void)synchronizeToBackingStore:(CDUnknownBlockType)arg1;	// IMP=0x00000000000a25a0
- (void)replaceContentsInRange:(id)arg1 withTextElements:(id)arg2;	// IMP=0x00000000000a1c28
- (id)enumerateTextElementsFromLocation:(id)arg1 options:(unsigned long long)arg2 usingBlock:(CDUnknownBlockType)arg3;	// IMP=0x00000000000a06b1
@property(readonly) NSCountableTextRange *documentRange;
- (void)synchronizeTextLayoutManagers:(CDUnknownBlockType)arg1;	// IMP=0x00000000000a0457
- (void)performEditingTransactionForTextStorage:(id)arg1 withBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000000000a0445
- (void)performEditingTransactionForTextStorage:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000000000a03d9
- (void)endEditingTransaction;	// IMP=0x00000000000a03c5
- (void)beginEditingTransaction;	// IMP=0x00000000000a03b1
- (void)processEditingForTextStorage:(id)arg1 edited:(unsigned long long)arg2 range:(struct _NSRange)arg3 changeInLength:(long long)arg4 invalidatedRange:(struct _NSRange)arg5;	// IMP=0x000000000009f65e
- (void)updateRangesForTextElement:(id)arg1 locationDelta:(long long)arg2;	// IMP=0x000000000009f4be
@property(retain, nonatomic) NSTextStorage *textStorage; // @dynamic textStorage;
- (_Bool)_supportsTextAttributesInRange:(struct _NSRange)arg1;	// IMP=0x000000000009f276
- (_Bool)_supportsTextAttributes:(id)arg1;	// IMP=0x000000000009f201
- (id)textElementsForAttributedString:(id)arg1;	// IMP=0x000000000009f1f9
- (id)attributedStringForTextElements:(id)arg1;	// IMP=0x000000000009f1b3
- (id)textElementForAttributedString:(id)arg1;	// IMP=0x000000000009f17d
- (id)attributedStringForTextElement:(id)arg1;	// IMP=0x000000000009f13a
@property(copy) NSAttributedString *attributedString; // @dynamic attributedString;
@property __weak id <NSTextContentStorageDelegate> delegate; // @dynamic delegate;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000009edad
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000009ecc6
- (void)dealloc;	// IMP=0x000000000009ec57
- (id)init;	// IMP=0x000000000009ebd7
- (void)_commonInitialization;	// IMP=0x000000000009eb18

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

