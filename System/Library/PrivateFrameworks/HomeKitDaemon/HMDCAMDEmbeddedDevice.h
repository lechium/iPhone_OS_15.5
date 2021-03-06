//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HomeKitDaemon/HMDCAMCommunicationProtocols-Protocol.h>

@class NSMutableDictionary, NSString;

@interface HMDCAMDEmbeddedDevice : NSObject <HMDCAMCommunicationProtocols>
{
    NSMutableDictionary *_classInstances;	// 8 = 0x8
    _Bool _filterNSDataLogging;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000a98a3b
@property _Bool filterNSDataLogging; // @synthesize filterNSDataLogging=_filterNSDataLogging;
- (id)valueForUndefinedKey:(id)arg1;	// IMP=0x0000000000a98a1f
- (id)performCommandFromClass:(id)arg1 method:(id)arg2 arguments:(id)arg3 error:(id *)arg4;	// IMP=0x0000000000a98955
- (id)instanceOfClass:(Class)arg1 forShortName:(id)arg2;	// IMP=0x0000000000a9885c
- (id)init;	// IMP=0x0000000000a987f2

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

