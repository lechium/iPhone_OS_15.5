//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableArray, NSString;

@interface TSKTreeNode
{
    NSString *mDisplayName;	// 8 = 0x8
    id mObject;	// 16 = 0x10
    NSMutableArray *mChildren;	// 24 = 0x18
}

- (id)description;	// IMP=0x000000000008306e
- (id)shallowCopy;	// IMP=0x0000000000082e67
- (void)enumerateAllChildrenWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000082d9a
- (id)childEnumerator;	// IMP=0x0000000000082d7d
- (void)removeAllChildren;	// IMP=0x0000000000082d47
- (void)removeChildAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000082d02
- (void)removeChildWithDataObject:(id)arg1;	// IMP=0x0000000000082a6d
- (void)removeChildWithName:(id)arg1;	// IMP=0x00000000000827bf
- (void)addNode:(id)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x0000000000082775
- (void)addObject:(id)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x000000000008263b
- (void)addChildWithName:(id)arg1 object:(id)arg2;	// IMP=0x0000000000082421
- (_Bool)hasChildWithName:(id)arg1;	// IMP=0x00000000000822d0
- (long long)indexOfNodeWithObject:(id)arg1;	// IMP=0x0000000000082213
- (id)nodeWithObject:(id)arg1;	// IMP=0x00000000000820b1
- (id)nodeAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000081fec
- (id)objectAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000081f91
@property(retain, nonatomic) id dataObject;
@property(retain, nonatomic) NSMutableArray *children;
@property(retain, nonatomic) NSString *name;
- (void)dealloc;	// IMP=0x0000000000081e26
- (id)initWithContext:(id)arg1;	// IMP=0x0000000000081dbb

@end
