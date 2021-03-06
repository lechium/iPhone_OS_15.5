//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableArray;

@interface SPKeyReconciler : NSObject
{
    NSDictionary *_backingDictionary;	// 8 = 0x8
    NSMutableArray *_keyIndices;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000002bdee
- (id)reconcileKey:(id)arg1 matchedIndex:(unsigned int *)arg2 sequence:(unsigned char *)arg3 error:(unsigned char *)arg4;	// IMP=0x000000000002bb1a
- (id)description;	// IMP=0x000000000002b8b7
- (id)initWithDictionary:(id)arg1;	// IMP=0x000000000002b66f

@end

