//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSCache;

@interface STSPluginLoader : NSObject
{
    NSCache *_pluginCache;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000000876a
@property(retain, nonatomic) NSCache *pluginCache; // @synthesize pluginCache=_pluginCache;
- (id)pluginWithName:(id)arg1;	// IMP=0x00000000000084fe
- (id)init;	// IMP=0x00000000000084a8

@end
