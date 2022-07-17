//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class PFStoryAutoEditConfiguration, PFStoryAutoEditFrequencyTable;
@protocol PFRandomNumberGenerator;

@interface PXStoryRecipeClipMotionStyleProvider : NSObject
{
    PFStoryAutoEditFrequencyTable *_frequencyTable;	// 8 = 0x8
    PFStoryAutoEditFrequencyTable *_diptychFrequencyTable;	// 16 = 0x10
    PFStoryAutoEditFrequencyTable *_triptychFrequencyTable;	// 24 = 0x18
    id <PFRandomNumberGenerator> _randomNumberGenerator;	// 32 = 0x20
    PFStoryAutoEditConfiguration *_configuration;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000081ada
@property(readonly, nonatomic) PFStoryAutoEditConfiguration *configuration; // @synthesize configuration=_configuration;
- (void)provideMotionStylesForMomentClipRange:(struct _NSRange)arg1 withClipCatalog:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;	// IMP=0x0000000000081209
- (CDStruct_b8e7e30c)nextMotionInfoForModuleExcludingMomentMotion:(long long)arg1 previousModuleMotion:(long long)arg2;	// IMP=0x000000000008111c
- (CDStruct_b8e7e30c)nextMotionInfoForDisplayAssetCount:(long long)arg1;	// IMP=0x00000000000810fa
- (CDStruct_b8e7e30c)_nextMotionInfoForDisplayAssetCount:(long long)arg1 excluding:(id)arg2;	// IMP=0x0000000000080f9b
- (long long)_nextMotionStyleForDisplayAssetCount:(long long)arg1 excluding:(id)arg2;	// IMP=0x0000000000080e56
- (id)initWithConfiguration:(id)arg1 colorGradeCategory:(id)arg2 songPace:(long long)arg3 randomNumberGenerator:(id)arg4;	// IMP=0x0000000000080c08
- (id)init;	// IMP=0x0000000000080b8e

@end
