//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMapTable;

@interface HDIdentifierTable : NSObject
{
    NSMapTable *_map;	// 8 = 0x8
    unsigned long long _nextIdentifier;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000006b8684
- (id)allObjects;	// IMP=0x00000000006b8676
- (void)removeAllObjects;	// IMP=0x00000000006b8660
- (void)removeObjectWithIdentifier:(unsigned long long)arg1;	// IMP=0x00000000006b864f
- (id)objectWithIdentifier:(unsigned long long)arg1;	// IMP=0x00000000006b8622
- (unsigned long long)addObject:(id)arg1;	// IMP=0x00000000006b8530
- (unsigned long long)count;	// IMP=0x00000000006b851a

@end

