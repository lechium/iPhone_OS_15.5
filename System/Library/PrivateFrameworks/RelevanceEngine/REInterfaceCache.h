//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface REInterfaceCache
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    NSMutableDictionary *_supportedInterfaces;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000a4cdc
- (void)enumerateExportedMethodsOfProtocol:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000000000a4c44
- (void)enumerateExportedMethodsOfClass:(Class)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000000000a4bbe
- (void)enumerateExportedPropertiesOfProtocol:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000000000a4b26
- (void)enumerateExportedPropertiesOfClass:(Class)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000000000a4aa0
- (_Bool)exportedInterfaceProtocol:(id)arg1;	// IMP=0x00000000000a4a1d
- (_Bool)exportedInterfaceClass:(Class)arg1;	// IMP=0x00000000000a49b6
- (_Bool)_interface:(id)arg1 implementsInterface:(id)arg2;	// IMP=0x00000000000a48ee
- (void)_enumerateMethodsOfInterface:(id)arg1 forProtocol:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;	// IMP=0x00000000000a4701
- (void)_enumeratePropertiesOfInterface:(id)arg1 forProtocol:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;	// IMP=0x00000000000a4514
- (id)_accessInterfaceForKey:(id)arg1;	// IMP=0x00000000000a43a9
- (id)_queue_valueForKey:(id)arg1 level:(unsigned long long)arg2;	// IMP=0x00000000000a3335
- (id)_supportedProtocols;	// IMP=0x00000000000a32c9
- (id)_init;	// IMP=0x00000000000a3234
- (_Bool)_supportsCache;	// IMP=0x00000000000a31b9

@end
