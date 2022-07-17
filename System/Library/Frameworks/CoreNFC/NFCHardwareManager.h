//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreNFC/NFCHardwareManagerCallbacks-Protocol.h>
#import <CoreNFC/NFCSessionCallbacks-Protocol.h>

@class NFCSession, NSArray, NSHashTable, NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface NFCHardwareManager : NSObject <NFCSessionCallbacks, NFCHardwareManagerCallbacks>
{
    NSHashTable *_delegates;	// 8 = 0x8
    NFCSession *_xpcSession;	// 16 = 0x10
    NSMutableDictionary *_queuedReaderSessions;	// 24 = 0x18
}

+ (id)sharedHardwareManager;	// IMP=0x0000000000028899
- (void).cxx_destruct;	// IMP=0x00000000000299ba
- (void)didInvalidate;	// IMP=0x000000000002991d
- (void)hardwareFailedToLoad;	// IMP=0x0000000000029880
- (id)getReaderSessionWithKey:(id)arg1;	// IMP=0x000000000002986a
- (_Bool)areFeaturesSupported:(unsigned long long)arg1 outError:(id *)arg2;	// IMP=0x0000000000029204
- (void)addNFCHardwareManagerCallbacksListener:(id)arg1;	// IMP=0x0000000000029188
@property(readonly, copy, nonatomic, getter=getDelegates) NSArray *delegates;
- (void)dequeueReaderSession:(id)arg1;	// IMP=0x00000000000290d3
- (void)queueReaderSession:(id)arg1 sessionConfig:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000028a08
- (id)init;	// IMP=0x00000000000288ee

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
