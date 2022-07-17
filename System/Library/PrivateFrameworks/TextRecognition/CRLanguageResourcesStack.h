//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableSet, NSString;
@protocol OS_dispatch_semaphore;

@interface CRLanguageResourcesStack : NSObject
{
    long long _totalResources;	// 8 = 0x8
    NSMutableArray *_availableResources;	// 16 = 0x10
    NSString *_localeIdentifier;	// 24 = 0x18
    NSObject<OS_dispatch_semaphore> *_resourceCountSemaphore;	// 32 = 0x20
    NSMutableSet *_subscribers;	// 40 = 0x28
    long long _resourceType;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00000000000f5786
@property long long resourceType; // @synthesize resourceType=_resourceType;
@property(retain) NSMutableSet *subscribers; // @synthesize subscribers=_subscribers;
@property(retain) NSObject<OS_dispatch_semaphore> *resourceCountSemaphore; // @synthesize resourceCountSemaphore=_resourceCountSemaphore;
@property(retain) NSString *localeIdentifier; // @synthesize localeIdentifier=_localeIdentifier;
@property(retain) NSMutableArray *availableResources; // @synthesize availableResources=_availableResources;
@property long long totalResources; // @synthesize totalResources=_totalResources;
- (long long)subscriberCount;	// IMP=0x00000000000f568e
- (_Bool)hasSubscriber:(id)arg1;	// IMP=0x00000000000f55ac
- (void)removeSubscriber:(id)arg1;	// IMP=0x00000000000f54d2
- (void)addSubscriber:(id)arg1;	// IMP=0x00000000000f53f8
- (void)pushResource:(id)arg1;	// IMP=0x00000000000f531c
- (id)popResource;	// IMP=0x00000000000f50d2
- (id)initWithLocaleIdentifier:(id)arg1 resourceType:(long long)arg2;	// IMP=0x00000000000f4fbe

@end
