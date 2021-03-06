//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray;

@interface WBSWebExtensionWebAccessibleResources : NSObject
{
    NSArray *_matchPatternStrings;	// 8 = 0x8
    NSArray *_resourceNames;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000122774
@property(readonly, nonatomic) NSArray *resourceNames; // @synthesize resourceNames=_resourceNames;
@property(readonly, nonatomic) NSArray *matchPatternStrings; // @synthesize matchPatternStrings=_matchPatternStrings;
- (void)_populateWebAccessibleResources:(id)arg1 errorStrings:(id *)arg2;	// IMP=0x000000000012258e
- (id)_regexStringFromPath:(id)arg1;	// IMP=0x000000000012241d
- (id)initWithManifestV2Array:(id)arg1 errorString:(id *)arg2;	// IMP=0x0000000000122414
- (id)initWithManifestV3Dictionary:(id)arg1 errorStrings:(id *)arg2 matchPatternException:(id *)arg3;	// IMP=0x0000000000122060

@end

