//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TSReading/TSKSearchReference-Protocol.h>

@class NSArray, NSString, TSWPSelection, TSWPSmartField, TSWPStorage;
@protocol TSKAnnotation;

@interface TSWPSearchReference : NSObject <TSKSearchReference>
{
    TSWPStorage *_storage;	// 8 = 0x8
    TSWPSelection *_selection;	// 16 = 0x10
    struct _NSRange _smartFieldRange;	// 24 = 0x18
    _Bool _refersToSmartField;	// 40 = 0x28
    TSWPSmartField *_smartField;	// 48 = 0x30
    _Bool _autohideHighlight;	// 56 = 0x38
    _Bool _pulseHighlight;	// 57 = 0x39
    NSArray *_findHighlights;	// 64 = 0x40
    id <TSKAnnotation> annotation;	// 72 = 0x48
    struct CGPoint searchReferencePoint;	// 80 = 0x50
}

+ (id)searchReferenceWithStorage:(id)arg1 selection:(id)arg2;	// IMP=0x00000000003168a5
+ (id)searchReferenceWithStorage:(id)arg1 range:(struct _NSRange)arg2;	// IMP=0x000000000031685b
@property(retain, nonatomic) id <TSKAnnotation> annotation; // @synthesize annotation;
@property(nonatomic) struct CGPoint searchReferencePoint; // @synthesize searchReferencePoint;
@property(nonatomic) _Bool pulseHighlight; // @synthesize pulseHighlight=_pulseHighlight;
@property(nonatomic) _Bool autohideHighlight; // @synthesize autohideHighlight=_autohideHighlight;
@property(retain, nonatomic) NSArray *findHighlights; // @synthesize findHighlights=_findHighlights;
@property(retain, nonatomic) TSWPSelection *selection; // @synthesize selection=_selection;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000003174d2
- (_Bool)isSelectable;	// IMP=0x0000000000317374
- (_Bool)isReplaceable;	// IMP=0x0000000000317249
- (id)model;	// IMP=0x0000000000317237
- (id)commandForReplacingWithString:(id)arg1 options:(unsigned long long)arg2;	// IMP=0x000000000031722f
- (id)searchReferenceEnd;	// IMP=0x00000000003171e6
- (id)searchReferenceStart;	// IMP=0x000000000031719e
- (id)searchReferenceForReplacingWithString:(id)arg1 options:(unsigned long long)arg2 authorCreatedWithCommand:(id *)arg3;	// IMP=0x0000000000317196
- (id)storage;	// IMP=0x000000000031718c
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) _Bool isInsertionPoint;
@property(nonatomic) struct _NSRange range;
- (long long)compare:(id)arg1;	// IMP=0x0000000000316dee
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000316be8
@property(retain, nonatomic) TSWPSmartField *smartField;
@property(nonatomic) _Bool refersToSmartField;
@property(nonatomic) struct _NSRange smartFieldRange;
- (void)pUpdateSelection;	// IMP=0x0000000000316a1e
- (void)dealloc;	// IMP=0x00000000003169bf
- (id)initWithStorage:(id)arg1 selection:(id)arg2;	// IMP=0x0000000000316926
- (id)initWithStorage:(id)arg1 range:(struct _NSRange)arg2;	// IMP=0x00000000003168d9

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

