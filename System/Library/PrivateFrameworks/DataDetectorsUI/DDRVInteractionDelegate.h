//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <DataDetectorsUI/DDDetectionControllerInteractionDelegate-Protocol.h>

@class NSString, RVItem;

__attribute__((visibility("hidden")))
@interface DDRVInteractionDelegate : NSObject <DDDetectionControllerInteractionDelegate>
{
    RVItem *_item;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000003984f
- (void)actionDidFinish:(id)arg1;	// IMP=0x00000000000397f4
- (void)actionWillStart:(id)arg1;	// IMP=0x0000000000039799
- (id)initWithItem:(id)arg1;	// IMP=0x000000000003972e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

