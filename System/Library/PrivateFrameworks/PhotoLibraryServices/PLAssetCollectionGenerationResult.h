//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSSet;

@interface PLAssetCollectionGenerationResult : NSObject
{
    _Bool _frequentLocationsDidChange;	// 8 = 0x8
    NSSet *_insertedOrUpdatedMoments;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000030226a
@property(readonly, nonatomic) _Bool frequentLocationsDidChange; // @synthesize frequentLocationsDidChange=_frequentLocationsDidChange;
@property(readonly, nonatomic) NSSet *insertedOrUpdatedMoments; // @synthesize insertedOrUpdatedMoments=_insertedOrUpdatedMoments;
- (id)initWithInsertedOrUpdatedMoments:(id)arg1 frequentLocationsDidChange:(_Bool)arg2;	// IMP=0x00000000003021e1

@end
