//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSOrderedSet;

@interface WFContentCoercionNode : NSObject
{
    id _itemOrItemClass;	// 8 = 0x8
    WFContentCoercionNode *_parent;	// 16 = 0x10
}

+ (id)coercionNodeWithItemOrItemClass:(id)arg1 parent:(id)arg2;	// IMP=0x000000000011722f
+ (id)coercionNodeWithItemClass:(Class)arg1 parent:(id)arg2;	// IMP=0x00000000001171d7
+ (id)coercionNodeWithItem:(id)arg1 parent:(id)arg2;	// IMP=0x000000000011716b
- (void).cxx_destruct;	// IMP=0x0000000000116ec6
@property(readonly, nonatomic) WFContentCoercionNode *parent; // @synthesize parent=_parent;
@property(readonly, nonatomic) id itemOrItemClass; // @synthesize itemOrItemClass=_itemOrItemClass;
- (id)continueCoercionUsingPathEnumerator:(id)arg1 contentItems:(id)arg2 options:(id)arg3 error:(id *)arg4;	// IMP=0x0000000000116bda
- (id)runCoercionSynchronouslyWithOptions:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000116aaf
- (void)continueCoercionUsingPathEnumerator:(id)arg1 contentItems:(id)arg2 options:(id)arg3 error:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x00000000001168c0
- (void)runCoercionWithOptions:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000011678f
@property(readonly, nonatomic) NSOrderedSet *coercionPath;
@property(readonly, nonatomic) NSOrderedSet *itemOrItemClassPath;
- (id)successorsWithOptions:(id)arg1 goalType:(id)arg2;	// IMP=0x00000000001161cb
- (id)successorsWithOptions:(id)arg1;	// IMP=0x00000000001161b7
- (id)description;	// IMP=0x0000000000116108
- (id)initWithItemOrItemClass:(id)arg1 parent:(id)arg2;	// IMP=0x0000000000116071

@end
