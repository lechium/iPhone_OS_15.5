//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface VCPObjectPool : NSObject
{
    CDUnknownBlockType _allocator;	// 8 = 0x8
    NSMutableArray *_objects;	// 16 = 0x10
}

+ (id)objectPoolWithAllocator:(CDUnknownBlockType)arg1;	// IMP=0x00000000001cd75c
- (void).cxx_destruct;	// IMP=0x00000000001cd9ed
- (void)returnObject:(id)arg1;	// IMP=0x00000000001cd962
- (id)getObject;	// IMP=0x00000000001cd7c1
- (id)initWithAllocator:(CDUnknownBlockType)arg1;	// IMP=0x00000000001cd69b

@end
