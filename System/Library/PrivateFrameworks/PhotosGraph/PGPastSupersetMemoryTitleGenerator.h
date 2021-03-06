//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDateInterval, PGGraphLocationNode;

@interface PGPastSupersetMemoryTitleGenerator
{
    PGGraphLocationNode *_supersetLocationNode;	// 8 = 0x8
    NSDateInterval *_supersetDateInterval;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000031c892
@property(readonly) NSDateInterval *supersetDateInterval; // @synthesize supersetDateInterval=_supersetDateInterval;
@property(readonly) PGGraphLocationNode *supersetLocationNode; // @synthesize supersetLocationNode=_supersetLocationNode;
- (id)_timeTitle;	// IMP=0x000000000031c7b7
- (id)_locationTitle;	// IMP=0x000000000031c589
- (void)_generateTitleAndSubtitleWithResult:(CDUnknownBlockType)arg1;	// IMP=0x000000000031c480
- (id)initWithMomentNodes:(id)arg1 supersetLocationNode:(id)arg2 supersetDateInterval:(id)arg3 titleGenerationContext:(id)arg4;	// IMP=0x000000000031c3c7

@end

