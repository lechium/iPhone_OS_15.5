//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface CLSSceneMatcher : NSObject
{
    NSMutableDictionary *_confidenceThresholdBySceneIdentifierBySceneLabel;	// 8 = 0x8
}

+ (id)sceneNamesWithSceneLabel:(id)arg1;	// IMP=0x00000000000505ee
+ (id)confidenceThresholdTypeBySceneLabel;	// IMP=0x0000000000050506
+ (id)sceneNamesBySceneLabel;	// IMP=0x00000000000502e6
+ (id)whiteboardSceneNames;	// IMP=0x00000000000502d9
+ (id)interestingSceneNames;	// IMP=0x00000000000502cc
+ (id)childTeenAndAdultSceneNames;	// IMP=0x00000000000502bf
+ (id)babySceneNames;	// IMP=0x00000000000502b2
+ (id)babyAndPetSceneNames;	// IMP=0x00000000000502a5
+ (id)babyChildTeenAdultAndPetSceneNames;	// IMP=0x0000000000050298
+ (id)junkSceneNamesLegacy;	// IMP=0x000000000005028b
+ (id)junkSceneNames;	// IMP=0x000000000005027e
+ (id)sharedSceneMatcher;	// IMP=0x000000000005024e
- (void).cxx_destruct;	// IMP=0x000000000005023e
- (id)confidenceThresholdBySceneIdentifierForSceneLabel:(id)arg1;	// IMP=0x000000000004fc5c

@end

