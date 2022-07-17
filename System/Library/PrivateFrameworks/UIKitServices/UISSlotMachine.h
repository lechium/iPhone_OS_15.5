//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CAContext, NSMutableDictionary, NSSet;
@protocol UISSlotDrawer;

@interface UISSlotMachine : NSObject
{
    id <UISSlotDrawer> _slotDrawer;	// 8 = 0x8
    unsigned long long _options;	// 16 = 0x10
    NSMutableDictionary *_cachedContents;	// 24 = 0x18
    CAContext *_layerContext;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000000cbb6
- (void)removeContentsForTag:(id)arg1;	// IMP=0x000000000000cb46
- (void)removeContentForStyle:(id)arg1 tag:(id)arg2;	// IMP=0x000000000000ca5e
- (id)remoteContentForLayerContextWithId:(unsigned long long)arg1 style:(id)arg2 tag:(id)arg3;	// IMP=0x000000000000c610
@property(readonly, nonatomic) NSSet *allTags;
- (id)initWithSlotDrawer:(id)arg1 options:(unsigned long long)arg2;	// IMP=0x000000000000c503

@end
