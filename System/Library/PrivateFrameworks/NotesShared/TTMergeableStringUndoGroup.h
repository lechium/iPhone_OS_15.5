//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <NotesShared/TTMergeableStringUndoCommand-Protocol.h>

@class NSMutableArray, NSMutableDictionary, NSString;

@interface TTMergeableStringUndoGroup : NSObject <TTMergeableStringUndoCommand>
{
    NSMutableDictionary *_seen;	// 8 = 0x8
    NSMutableArray *_commands;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000085301
@property(retain, nonatomic) NSMutableArray *commands; // @synthesize commands=_commands;
@property(retain, nonatomic) NSMutableDictionary *seen; // @synthesize seen=_seen;
@property(readonly, copy) NSString *description;
- (_Bool)addToGroup:(id)arg1;	// IMP=0x000000000008523e
- (void)applyToString:(id)arg1;	// IMP=0x000000000008507b
- (_Bool)hasTopoIDsThatCanChange;	// IMP=0x0000000000084f29
- (void)updateTopoIDRange:(struct TopoIDRange)arg1 toNewRangeID:(struct TopoIDRange)arg2;	// IMP=0x0000000000084c7e
- (_Bool)addSeenRange:(struct TopoIDRange)arg1;	// IMP=0x0000000000084ade
- (void)addCommand:(id)arg1;	// IMP=0x0000000000084a42
- (void)closeGroup;	// IMP=0x0000000000084a2e
- (id)init;	// IMP=0x000000000008497d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

