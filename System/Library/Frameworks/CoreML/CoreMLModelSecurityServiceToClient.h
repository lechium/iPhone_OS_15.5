//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreML/CoreMLModelSecurityServiceToClientProtocol-Protocol.h>

@class NSCountedSet, NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface CoreMLModelSecurityServiceToClient : NSObject <CoreMLModelSecurityServiceToClientProtocol>
{
    NSMutableDictionary *_featureProviderMap;	// 8 = 0x8
    NSCountedSet *_featureProviderCount;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_serviceToClientQueue;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000b3f1c
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *serviceToClientQueue; // @synthesize serviceToClientQueue=_serviceToClientQueue;
@property(retain, nonatomic) NSCountedSet *featureProviderCount; // @synthesize featureProviderCount=_featureProviderCount;
@property(retain, nonatomic) NSMutableDictionary *featureProviderMap; // @synthesize featureProviderMap=_featureProviderMap;
- (void)clientFeatureNames:(id)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x00000000000b3e05
- (void)clientFeatureValueForName:(id)arg1 uniqueKeyForProvider:(id)arg2 withReply:(CDUnknownBlockType)arg3;	// IMP=0x00000000000b3d26
- (id)init;	// IMP=0x00000000000b3c8c

@end
