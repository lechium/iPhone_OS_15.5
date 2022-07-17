//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSMutableArray.h>

@interface NSMutableArray (SafariCoreExtras)
- (void)safari_insertObject:(id)arg1 inSortedOrderUsingComparator:(CDUnknownBlockType)arg2;	// IMP=0x00000000000314e4
- (void)safari_insertObjects:(id)arg1 afterObject:(id)arg2;	// IMP=0x0000000000031406
- (void)safari_insertObject:(id)arg1 afterObject:(id)arg2;	// IMP=0x0000000000031340
- (void)safari_removeObjectsAtIndexes:(id)arg1 withOffset:(long long)arg2 startingAtIndex:(unsigned long long)arg3;	// IMP=0x00000000000312a3
- (void)safari_removeObjectsPassingTest:(CDUnknownBlockType)arg1;	// IMP=0x0000000000031257
- (void)safari_setObject:(id)arg1 atIndex:(unsigned long long)arg2 withPaddingObject:(id)arg3;	// IMP=0x00000000000311ae
- (void)safari_addObjectsFromArrayUnlessNil:(id)arg1;	// IMP=0x0000000000031195
- (void)safari_addObjectUnlessNil:(id)arg1;	// IMP=0x000000000003117c
@end
