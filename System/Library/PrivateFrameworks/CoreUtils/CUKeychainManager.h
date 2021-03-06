//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface CUKeychainManager : NSObject
{
}

- (_Bool)updateItem:(id)arg1 matchingItem:(id)arg2 flags:(unsigned int)arg3 error:(id *)arg4;	// IMP=0x00000000000613a3
- (_Bool)updateItem:(id)arg1 matchingItem:(id)arg2 error:(id *)arg3;	// IMP=0x000000000006138b
- (_Bool)removeItemMatchingItem:(id)arg1 flags:(unsigned int)arg2 error:(id *)arg3;	// IMP=0x0000000000061175
- (_Bool)removeItemMatchingItem:(id)arg1 error:(id *)arg2;	// IMP=0x000000000006115e
- (_Bool)addOrUpdateOrReAddItem:(id)arg1 flags:(unsigned int)arg2 logCategory:(struct LogCategory *)arg3 logLabel:(id)arg4 error:(id *)arg5;	// IMP=0x0000000000060bf2
- (_Bool)addOrUpdateOrReAddItem:(id)arg1 logCategory:(struct LogCategory *)arg2 logLabel:(id)arg3 error:(id *)arg4;	// IMP=0x0000000000060bc8
- (id)addItem:(id)arg1 returnFlags:(unsigned int)arg2 error:(id *)arg3;	// IMP=0x00000000000608e9
- (_Bool)addItem:(id)arg1 flags:(unsigned int)arg2 error:(id *)arg3;	// IMP=0x00000000000607a0
- (_Bool)addItem:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000060789
- (id)_copyItemsMatchingItemSeparate:(id)arg1 flags:(unsigned int)arg2 error:(id *)arg3;	// IMP=0x0000000000060208
- (id)_copyItemsMatchingItem:(id)arg1 flags:(unsigned int)arg2 error:(id *)arg3;	// IMP=0x000000000005fc27
- (id)copyItemsMatchingItem:(id)arg1 flags:(unsigned int)arg2 error:(id *)arg3;	// IMP=0x000000000005fc15
- (id)copyItemMatchingItem:(id)arg1 flags:(unsigned int)arg2 error:(id *)arg3;	// IMP=0x000000000005f8e7

@end

