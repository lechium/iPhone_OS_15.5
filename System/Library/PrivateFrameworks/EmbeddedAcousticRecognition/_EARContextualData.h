//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface _EARContextualData : NSObject
{
    struct shared_ptr<quasar::ContextualData> _contextualData;	// 8 = 0x8
}

+ (void)initialize;	// IMP=0x00000000002f8d20
- (id).cxx_construct;	// IMP=0x00000000002fa091
- (void).cxx_destruct;	// IMP=0x00000000002fa083
- (unordered_map_2a96e01d)getTemplateToDeviationCost;	// IMP=0x00000000002fa04c
- (unordered_map_2a96e01d)getTemplateToAverageCost;	// IMP=0x00000000002fa015
- (map_03a1181d)getWords;	// IMP=0x00000000002f9fe1
- (id)metrics;	// IMP=0x00000000002f9de0
- (void)iterRankedContactSourceWithApplication:(id)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x00000000002f9c15
- (void)iterNamedEntitySourceWithApplication:(id)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x00000000002f99f9
- (_Bool)addNamedEntity:(id)arg1 metadata:(id)arg2;	// IMP=0x00000000002f90fb
- (id)initWithConfiguration:(id)arg1;	// IMP=0x00000000002f8d48

@end

