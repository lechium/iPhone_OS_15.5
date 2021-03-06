//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, ODIState;

__attribute__((visibility("hidden")))
@interface ODIHierarchy : NSObject
{
    int mType;	// 8 = 0x8
    int mMaxMappableTreeDepth;	// 12 = 0xc
    ODIState *mState;	// 16 = 0x10
    NSMutableDictionary *mNodeInfoMap;	// 24 = 0x18
}

+ (_Bool)mapIdentifier:(id)arg1 state:(id)arg2;	// IMP=0x0000000000343452
- (void).cxx_destruct;	// IMP=0x0000000000343566
- (void)map;	// IMP=0x00000000003453f2
- (void)mapNode:(id)arg1;	// IMP=0x0000000000344aca
- (struct CGRect)boundsOfNode:(id)arg1;	// IMP=0x0000000000344a20
- (void)setAbsolutePositionOfNode:(id)arg1 parentRow:(int)arg2 parentXOffset:(float)arg3;	// IMP=0x000000000034483c
- (void)mapLogicalBoundsWithXRanges:(const void *)arg1;	// IMP=0x00000000003447a8
- (void *)mapRangesForNode:(id)arg1;	// IMP=0x0000000000343874
- (void)createInfoForNode:(id)arg1 depth:(int)arg2;	// IMP=0x00000000003436d5
- (id)infoForNode:(id)arg1;	// IMP=0x000000000034365a
- (id)initWithType:(int)arg1 state:(id)arg2;	// IMP=0x000000000034358e

@end

