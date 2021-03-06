//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, VUICollectionChange;

@interface VUICollectionChangeSet : NSObject
{
    VUICollectionChange *_deleteChange;	// 8 = 0x8
    VUICollectionChange *_insertChange;	// 16 = 0x10
    NSArray *_moveChanges;	// 24 = 0x18
    NSArray *_updateChanges;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000000110e6
@property(copy, nonatomic) NSArray *updateChanges; // @synthesize updateChanges=_updateChanges;
@property(copy, nonatomic) NSArray *moveChanges; // @synthesize moveChanges=_moveChanges;
@property(retain, nonatomic) VUICollectionChange *insertChange; // @synthesize insertChange=_insertChange;
@property(retain, nonatomic) VUICollectionChange *deleteChange; // @synthesize deleteChange=_deleteChange;
- (id)_changesKinds;	// IMP=0x0000000000010f0b
- (id)description;	// IMP=0x0000000000010bee
- (_Bool)containsOnlyChangeKind:(unsigned long long)arg1;	// IMP=0x0000000000010b31
@property(readonly, nonatomic) _Bool hasChanges;

@end

