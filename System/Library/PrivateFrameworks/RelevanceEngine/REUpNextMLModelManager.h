//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface REUpNextMLModelManager : NSObject
{
}

+ (void)removeStoredModel;	// IMP=0x00000000000346a7
- (float)predicitedProbabilityForLogicalElement:(id)arg1;	// IMP=0x00000000000346bb
- (id)comparatorWithRules:(id)arg1;	// IMP=0x00000000000346b3
- (void)performTrainingWithFeatureMaps:(id)arg1 events:(id)arg2;	// IMP=0x00000000000346ad
- (void)removeObserver:(id)arg1;	// IMP=0x00000000000346a1
- (void)addObserver:(id)arg1;	// IMP=0x000000000003469b

@end

