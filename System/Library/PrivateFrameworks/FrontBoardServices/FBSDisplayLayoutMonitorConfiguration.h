//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BSServiceConnectionEndpoint;

@interface FBSDisplayLayoutMonitorConfiguration : NSObject
{
    BSServiceConnectionEndpoint *_endpoint;	// 8 = 0x8
    _Bool _needsUserInteractivePriority;	// 16 = 0x10
    CDUnknownBlockType _transitionHandler;	// 24 = 0x18
}

+ (id)configurationWithEndpoint:(id)arg1;	// IMP=0x000000000002e749
+ (id)configurationForDefaultMainDisplayMonitor;	// IMP=0x000000000002e6dd
- (void).cxx_destruct;	// IMP=0x000000000002e9e7
@property(readonly, copy, nonatomic) BSServiceConnectionEndpoint *endpoint; // @synthesize endpoint=_endpoint;
@property(copy, nonatomic) CDUnknownBlockType transitionHandler; // @synthesize transitionHandler=_transitionHandler;
@property(nonatomic) _Bool needsUserInteractivePriority; // @synthesize needsUserInteractivePriority=_needsUserInteractivePriority;
- (id)_initWithEndpoint:(id)arg1;	// IMP=0x000000000002e672
- (id)init;	// IMP=0x000000000002e544

@end
