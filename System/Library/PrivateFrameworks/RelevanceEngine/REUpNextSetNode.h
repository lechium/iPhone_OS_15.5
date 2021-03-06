//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface REUpNextSetNode : NSObject
{
    id _item;	// 8 = 0x8
    REUpNextSetNode *_parent;	// 16 = 0x10
    NSMutableArray *_children;	// 24 = 0x18
    unsigned long long _rank;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000006090e
@property(nonatomic) unsigned long long rank; // @synthesize rank=_rank;
@property(retain, nonatomic) NSMutableArray *children; // @synthesize children=_children;
@property(retain, nonatomic) REUpNextSetNode *parent; // @synthesize parent=_parent;
@property(readonly, nonatomic) id item; // @synthesize item=_item;
- (void)remove;	// IMP=0x0000000000060678
- (void)join:(id)arg1;	// IMP=0x000000000006057d
- (id)rootNode;	// IMP=0x00000000000604d7
- (id)initWithItem:(id)arg1;	// IMP=0x000000000006042d

@end

