//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface _CPLResourcesMutableArray : NSObject
{
    NSMutableDictionary *_resourcesPerType;	// 8 = 0x8
    NSMutableDictionary *_updatedResourcesPerType;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000009d215
- (id)reallyUpdatedResources;	// IMP=0x000000000009d1ff
- (id)allResources;	// IMP=0x000000000009d1e9
- (void)addResource:(id)arg1;	// IMP=0x000000000009d108
- (id)initWithResources:(id)arg1;	// IMP=0x000000000009ce9f

@end

