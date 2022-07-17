//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TSReading/TSKDocumentObject-Protocol.h>
#import <TSReading/TSPCopying-Protocol.h>

@class NSDate, TSUColor, TSWPChangeSession, TSWPStorage;

@interface TSWPChange <TSKDocumentObject, TSPCopying>
{
    TSWPStorage *_parentStorage;	// 8 = 0x8
    int _kind;	// 16 = 0x10
    TSWPChangeSession *_session;	// 24 = 0x18
    NSDate *_date;	// 32 = 0x20
    _Bool _hidden;	// 40 = 0x28
}

@property(nonatomic) TSWPStorage *parentStorage; // @synthesize parentStorage=_parentStorage;
- (_Bool)isFromChangeSession:(id)arg1;	// IMP=0x00000000002ecf0b
- (_Bool)canMergeWithKind:(int)arg1 session:(id)arg2;	// IMP=0x00000000002ecedb
- (void)adoptStylesheet:(id)arg1 withMapper:(id)arg2;	// IMP=0x00000000002eced5
- (id)copyWithContext:(id)arg1;	// IMP=0x00000000002ece27
- (void)wasRemovedFromDocumentRoot:(id)arg1;	// IMP=0x00000000002ece15
- (void)willBeRemovedFromDocumentRoot:(id)arg1;	// IMP=0x00000000002ece0f
- (void)wasAddedToDocumentRoot:(id)arg1 context:(id)arg2;	// IMP=0x00000000002ecdfd
- (void)willBeAddedToDocumentRoot:(id)arg1 context:(id)arg2;	// IMP=0x00000000002ecdf7
- (void)p_invalidateAnnotationResultsForDocumentRoot:(id)arg1;	// IMP=0x00000000002ecdb8
- (void)trackedTextDidChange;	// IMP=0x00000000002ecd87
@property(readonly, nonatomic) TSUColor *changeAdornmentsColor;
@property(readonly, nonatomic) TSUColor *textMarkupColor;
@property(readonly, nonatomic) _Bool showsHiddenDeletionMarkup;
@property(readonly, nonatomic) _Bool showsMarkup;
@property(nonatomic, getter=isHidden) _Bool hidden;
@property(readonly, nonatomic) _Bool isDeletion;
@property(readonly, nonatomic) _Bool isInsertion;
- (void)dealloc;	// IMP=0x00000000002eca0f
- (id)initWithContext:(id)arg1 kind:(int)arg2 session:(id)arg3;	// IMP=0x00000000002ec8f9
@property(retain, nonatomic) NSDate *date;
@property(retain, nonatomic) TSWPChangeSession *session;

@end
