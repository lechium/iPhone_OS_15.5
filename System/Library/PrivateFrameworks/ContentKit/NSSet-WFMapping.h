//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSSet.h>

@interface NSSet (WFMapping)
+ (id)wf_classSetFromArray:(id)arg1;	// IMP=0x00000000000f712a
- (id)mapAndFilterObjectsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000000063ad
- (id)mapObjectsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000000639b
- (id)setByRemovingObject:(id)arg1;	// IMP=0x000000000004d88f
- (id)wf_combinationsWithRepetitionsOfSize:(unsigned long long)arg1;	// IMP=0x00000000000aad62
@property(readonly, nonatomic) NSSet *wf_combinations;
@end

