//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Silex/SXActionSerializationManager-Protocol.h>
#import <Silex/SXActionSerializer-Protocol.h>

@class NSMutableDictionary, NSString;

@interface SXActionSerializationManager : NSObject <SXActionSerializer, SXActionSerializationManager>
{
    NSMutableDictionary *_serializers;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000000a65a8
@property(readonly, nonatomic) NSMutableDictionary *serializers; // @synthesize serializers=_serializers;
- (void)registerSerializer:(id)arg1 actionType:(id)arg2;	// IMP=0x00000000000a6503
- (id)URLForAction:(id)arg1 type:(long long)arg2;	// IMP=0x00000000000a6426
- (id)init;	// IMP=0x00000000000a63c0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

