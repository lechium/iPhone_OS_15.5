//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSError, NSMutableDictionary;

@interface CKDMMCSItemGroupSet : NSObject
{
    NSMutableDictionary *_itemsByGroupTuple;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000002132f4
@property(retain, nonatomic) NSMutableDictionary *itemsByGroupTuple; // @synthesize itemsByGroupTuple=_itemsByGroupTuple;
- (void)addItem:(id)arg1;	// IMP=0x00000000002131c2
- (id)allItemGroups;	// IMP=0x0000000000213172
@property(readonly, nonatomic) NSError *error;
- (id)description;	// IMP=0x0000000000212f3d
- (id)CKPropertiesDescription;	// IMP=0x0000000000212ed1
- (id)initWithItems:(id)arg1;	// IMP=0x0000000000212d5e
- (id)init;	// IMP=0x0000000000212d08

@end

