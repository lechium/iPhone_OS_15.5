//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSMutableArray.h>

@interface NSMutableArray (TSUAdditions)
- (unsigned long long)tsu_insertObject:(id)arg1 usingComparator:(CDUnknownBlockType)arg2;	// IMP=0x0000000000283a8d
- (void)tsu_trimObjectsFromIndex:(unsigned long long)arg1;	// IMP=0x0000000000283a4f
- (void)tsu_removeObjectsIdenticalToObjectsInArray:(id)arg1;	// IMP=0x000000000028388a
- (void)tsu_addObjectsFromNonNilArray:(id)arg1;	// IMP=0x0000000000283871
- (void)tsu_addNonNilObject:(id)arg1;	// IMP=0x0000000000283858
- (void)tsu_addObjects:(id)arg1;	// IMP=0x0000000000283768
- (id)tsu_pop;	// IMP=0x0000000000283720
- (void)tsu_push:(id)arg1;	// IMP=0x000000000028370e
- (id)tsu_dequeue;	// IMP=0x00000000002836fc
- (void)tsu_enqueue:(id)arg1;	// IMP=0x00000000002836e8
@end

