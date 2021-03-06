//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface WFWhitelistSiteBuffer : NSObject
{
    NSMutableDictionary *_siteTree;	// 8 = 0x8
    unsigned long long _maxSize;	// 16 = 0x10
}

@property unsigned long long maxSize; // @synthesize maxSize=_maxSize;
@property(retain) NSMutableDictionary *siteTree; // @synthesize siteTree=_siteTree;
- (_Bool)containsURLString:(id)arg1;	// IMP=0x00000000000086a4
- (_Bool)treeContainsURLString:(id)arg1;	// IMP=0x0000000000008530
- (void)addURLString:(id)arg1;	// IMP=0x000000000000824e
- (void)dealloc;	// IMP=0x000000000000820e
- (id)init;	// IMP=0x00000000000081ba

@end

