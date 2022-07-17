//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableDictionary, NSValue;

__attribute__((visibility("hidden")))
@interface CKQuadTreeNode : NSObject
{
    CKQuadTreeNode *_topRight;	// 8 = 0x8
    CKQuadTreeNode *_topLeft;	// 16 = 0x10
    CKQuadTreeNode *_bottomLeft;	// 24 = 0x18
    CKQuadTreeNode *_bottomRight;	// 32 = 0x20
    NSMutableDictionary *_userInfo;	// 40 = 0x28
    NSValue *_point;	// 48 = 0x30
    struct CGRect _bounds;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x000000000002be75
@property(retain, nonatomic) NSValue *point; // @synthesize point=_point;
@property(readonly, nonatomic) struct CGRect bounds; // @synthesize bounds=_bounds;
- (id)objectForKey:(id)arg1;	// IMP=0x000000000002be2c
- (void)setObject:(id)arg1 forKey:(id)arg2;	// IMP=0x000000000002be16
- (void)visit:(CDUnknownBlockType)arg1;	// IMP=0x000000000002bca1
- (void)insertPoint:(struct CGPoint)arg1;	// IMP=0x000000000002baba
- (id)nodeForPoint:(struct CGPoint)arg1;	// IMP=0x000000000002b7ce
@property(readonly, nonatomic, getter=isLeaf) _Bool leaf;
@property(readonly, copy, nonatomic) NSArray *nodes;
- (id)debugDescription;	// IMP=0x000000000002b6ef
- (id)debugDescriptionWithLevel:(long long)arg1;	// IMP=0x000000000002b26e
- (id)description;	// IMP=0x000000000002b147
- (id)initWithBounds:(struct CGRect)arg1;	// IMP=0x000000000002af7c
- (id)init;	// IMP=0x000000000002af4a

@end
