//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <RelevanceEngine/REMLElementRanker-Protocol.h>

@class NSString, REMLElementComparator;
@protocol OS_dispatch_queue;

@interface _REElementRankerWrapper : NSObject <REMLElementRanker>
{
    CDUnknownBlockType _featureMapGenerator;	// 8 = 0x8
    REMLElementComparator *_comparator;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_queue;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000009daa7
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) REMLElementComparator *comparator; // @synthesize comparator=_comparator;
@property(copy, nonatomic) CDUnknownBlockType featureMapGenerator; // @synthesize featureMapGenerator=_featureMapGenerator;
- (_Bool)shouldHideElement:(id)arg1;	// IMP=0x000000000009d8ad

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
