//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface VSCacheUpdateRequest : NSObject
{
    NSString *_modelID;	// 8 = 0x8
    NSString *_classID;	// 16 = 0x10
}

- (id)description;	// IMP=0x000000000002a767
- (id)coalescedRequest:(id)arg1;	// IMP=0x000000000002a6ca
- (id)classIdentifier;	// IMP=0x000000000002a6c0
- (id)modelIdentifier;	// IMP=0x000000000002a6b6
- (void)dealloc;	// IMP=0x000000000002a66c
- (id)initWithModelIdentifier:(id)arg1 classIdentifier:(id)arg2;	// IMP=0x000000000002a61f

@end
