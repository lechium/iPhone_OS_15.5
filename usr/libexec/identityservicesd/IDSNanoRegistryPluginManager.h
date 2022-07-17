//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray;
@protocol IDSPluginNanoRegistryProtocol, OS_dispatch_queue;

@interface IDSNanoRegistryPluginManager : NSObject
{
    _Bool _pluginImplementsWatchDidStartAdvertising;	// 8 = 0x8
    _Bool _pluginImplementsWatchDidStopAdvertising;	// 9 = 0x9
    _Bool _isAdvertising;	// 10 = 0xa
    NSObject<OS_dispatch_queue> *_callbackQueue;	// 16 = 0x10
    NSMutableArray *_peripheralManagers;	// 24 = 0x18
    id <IDSPluginNanoRegistryProtocol> _plugin;	// 32 = 0x20
}

+ (id)sharedInstance;	// IMP=0x004000000006a900
- (void).cxx_destruct;	// IMP=0x002000000006c7c0
@property(nonatomic) _Bool isAdvertising; // @synthesize isAdvertising=_isAdvertising;
@property(retain, nonatomic) id <IDSPluginNanoRegistryProtocol> plugin; // @synthesize plugin=_plugin;
@property(retain, nonatomic) NSMutableArray *peripheralManagers; // @synthesize peripheralManagers=_peripheralManagers;
@property(nonatomic) _Bool pluginImplementsWatchDidStopAdvertising; // @synthesize pluginImplementsWatchDidStopAdvertising=_pluginImplementsWatchDidStopAdvertising;
@property(nonatomic) _Bool pluginImplementsWatchDidStartAdvertising; // @synthesize pluginImplementsWatchDidStartAdvertising=_pluginImplementsWatchDidStartAdvertising;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue; // @synthesize callbackQueue=_callbackQueue;
- (void)_initializePluginWithClass:(Class)arg1;	// IMP=0x001000000006ba90
- (void)_initializePlugin;	// IMP=0x001000000006b6f0
- (void)executeSynchronouslyOnCallbackQueue:(CDUnknownBlockType)arg1;	// IMP=0x001000000006b600
- (void)initializePluginWithClass:(Class)arg1;	// IMP=0x001000000006b520
- (void)notifyWatchToStopAdvertising;	// IMP=0x001000000006b210
- (void)notifyWatchDidStopAdvertisingWithPeripheralManager:(id)arg1;	// IMP=0x001000000006b020
- (void)notifyWatchToStartAdvertising;	// IMP=0x001000000006ad10
- (void)notifyWatchDidStartAdvertisingWithPeripheralManager:(id)arg1;	// IMP=0x001000000006ab60
- (id)init;	// IMP=0x001000000006a9c0

@end
