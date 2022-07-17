//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CRContext;

__attribute__((visibility("hidden")))
@interface CRTTMergeableStringUndoEditCommand : NSObject
{
    void *_deleteRanges;	// 8 = 0x8
    void *_insertStrings;	// 16 = 0x10
    CRContext *_context;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000001a46f
@property(nonatomic) __weak CRContext *context; // @synthesize context=_context;
@property(readonly, nonatomic) void *insertStrings; // @synthesize insertStrings=_insertStrings;
@property(readonly, nonatomic) void *deleteRanges; // @synthesize deleteRanges=_deleteRanges;
- (id)description;	// IMP=0x000000000001a28f
- (void)_applyToString:(id)arg1;	// IMP=0x000000000001a09e
- (void)applyToString:(id)arg1;	// IMP=0x0000000000019f67
- (id)renamedWith:(id)arg1;	// IMP=0x0000000000018f93
- (void)updateInsertTopoIDRange:(struct TopoIDRange)arg1 toNewRangeID:(struct TopoIDRange)arg2;	// IMP=0x0000000000018dfc
- (void)retainTemporaryIDsInManager:(id)arg1 copyingFrom:(id)arg2;	// IMP=0x0000000000018d61
- (_Bool)hasTemporaryIDs;	// IMP=0x0000000000018cb9
- (id)temporaryIDs;	// IMP=0x0000000000018aef
- (void)updateTopoIDRange:(struct TopoIDRange)arg1 toNewRangeID:(struct TopoIDRange)arg2;	// IMP=0x000000000001899b
- (void)dealloc;	// IMP=0x0000000000018875
- (id)init;	// IMP=0x00000000000187e0

@end
