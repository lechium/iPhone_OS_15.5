//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <NotesShared/TTMergeableStringUndoCommand-Protocol.h>

@class NSString;

@interface TTMergeableStringUndoAttributeCommand : NSObject <TTMergeableStringUndoCommand>
{
    void *_attributeRanges;	// 8 = 0x8
}

@property(readonly, nonatomic) void *attributeRanges; // @synthesize attributeRanges=_attributeRanges;
@property(readonly, copy) NSString *description;
- (_Bool)addToGroup:(id)arg1;	// IMP=0x000000000017c0e1
- (void)applyToString:(id)arg1;	// IMP=0x000000000017bf72
- (_Bool)hasTopoIDsThatCanChange;	// IMP=0x000000000017befa
- (void)updateTopoIDRange:(struct TopoIDRange)arg1 toNewRangeID:(struct TopoIDRange)arg2;	// IMP=0x000000000017bc14
- (void)dealloc;	// IMP=0x000000000017bbc6
- (id)init;	// IMP=0x000000000017bb50

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

