//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AudioToolboxCore/AUPBInspecting-Protocol.h>
#import <AudioToolboxCore/AUPBRegistrarListening-Protocol.h>

@class NSMutableArray, NSString, NSXPCConnection;
@protocol AUPBRegistrarHosting, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface AUPBClientManager : NSObject <AUPBRegistrarListening, AUPBInspecting>
{
    NSXPCConnection *mRegistrarConnection;	// 8 = 0x8
    id <AUPBRegistrarHosting> mProxyInterface;	// 16 = 0x10
    NSMutableArray *mRemoteServers;	// 24 = 0x18
    struct vector<PropertyListener, std::allocator<PropertyListener>> mPropertyListeners;	// 32 = 0x20
    struct vector<NewServerListener, std::allocator<NewServerListener>> mNewServerListeners;	// 56 = 0x38
    unsigned int mServerRefCounter;	// 80 = 0x50
    NSObject<OS_dispatch_queue> *mTouchServersQueue;	// 88 = 0x58
    int mNotifyToken;	// 96 = 0x60
    _Bool mValidToken;	// 100 = 0x64
    _Bool mConnectionAcknowledged;	// 101 = 0x65
}

+ (id)allocWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000013356c
+ (id)sharedInstance;	// IMP=0x00000000001334ed
- (id).cxx_construct;	// IMP=0x0000000000136c4b
- (void).cxx_destruct;	// IMP=0x0000000000136c11
- (int)setSerialAUProperty:(unsigned int)arg1 onServer:(struct OpaqueAUPBServer *)arg2 audioUnit:(struct OpaqueRemoteAudioUnit *)arg3 scope:(unsigned int)arg4 element:(unsigned int)arg5 toData:(id)arg6;	// IMP=0x000000000013693b
- (int)getSerialAUProperty:(unsigned int)arg1 onServer:(struct OpaqueAUPBServer *)arg2 audioUnit:(struct OpaqueRemoteAudioUnit *)arg3 scope:(unsigned int)arg4 element:(unsigned int)arg5 inData:(id *)arg6;	// IMP=0x0000000000136666
- (int)setAUParameter:(unsigned int)arg1 onServer:(struct OpaqueAUPBServer *)arg2 audioUnit:(struct OpaqueRemoteAudioUnit *)arg3 scope:(unsigned int)arg4 element:(unsigned int)arg5 value:(float)arg6;	// IMP=0x000000000013638f
- (int)getAUParameter:(unsigned int)arg1 onServer:(struct OpaqueAUPBServer *)arg2 audioUnit:(struct OpaqueRemoteAudioUnit *)arg3 scope:(unsigned int)arg4 element:(unsigned int)arg5 copiedIntoValue:(float *)arg6;	// IMP=0x00000000001360aa
- (int)setAUProperty:(unsigned int)arg1 onServer:(struct OpaqueAUPBServer *)arg2 audioUnit:(struct OpaqueRemoteAudioUnit *)arg3 scope:(unsigned int)arg4 element:(unsigned int)arg5 withValue:(const void *)arg6 size:(unsigned int)arg7;	// IMP=0x0000000000135d0d
- (int)getAUProperty:(unsigned int)arg1 onServer:(struct OpaqueAUPBServer *)arg2 audioUnit:(struct OpaqueRemoteAudioUnit *)arg3 scope:(unsigned int)arg4 element:(unsigned int)arg5 copiedIntoBufer:(void **)arg6 withSize:(unsigned int *)arg7;	// IMP=0x0000000000135a2d
- (int)getAUPropertyInfo:(unsigned int)arg1 onServer:(struct OpaqueAUPBServer *)arg2 audioUnit:(struct OpaqueRemoteAudioUnit *)arg3 scope:(unsigned int)arg4 element:(unsigned int)arg5 intoDataSize:(unsigned int *)arg6 writeable:(char *)arg7;	// IMP=0x000000000013574d
- (int)setPBProperty:(unsigned int)arg1 onServer:(struct OpaqueAUPBServer *)arg2 block:(struct OpaqueAUPB *)arg3 value:(void *)arg4;	// IMP=0x0000000000135486
- (int)copyPBProperty:(unsigned int)arg1 onServer:(struct OpaqueAUPBServer *)arg2 block:(struct OpaqueAUPB *)arg3 intoValue:(const void **)arg4;	// IMP=0x00000000001351d2
- (int)removePropertyListenersForServer:(struct OpaqueAUPBServer *)arg1;	// IMP=0x000000000013517e
- (int)removePropertyListener:(CDUnknownFunctionPointerType)arg1 onServer:(struct OpaqueAUPBServer *)arg2 block:(struct OpaqueAUPB *)arg3 property:(unsigned int)arg4 withUserData:(void *)arg5;	// IMP=0x0000000000134fd1
- (int)addPropertyListener:(CDUnknownFunctionPointerType)arg1 onServer:(struct OpaqueAUPBServer *)arg2 block:(struct OpaqueAUPB *)arg3 property:(unsigned int)arg4 withUserData:(void *)arg5;	// IMP=0x0000000000134d22
- (int)removeServerListener:(CDUnknownFunctionPointerType)arg1 withUserData:(void *)arg2;	// IMP=0x0000000000134bdd
- (int)addNewServerListener:(CDUnknownFunctionPointerType)arg1 withUserData:(void *)arg2;	// IMP=0x000000000013497c
- (id)serverFromRef:(struct OpaqueAUPBServer *)arg1;	// IMP=0x0000000000134855
- (void)processingBlock:(unsigned int)arg1 propertiesChanged:(id)arg2 withQualifierData:(id)arg3;	// IMP=0x00000000001341f5
- (void)processingBlock:(unsigned int)arg1 propertyChanged:(unsigned int)arg2;	// IMP=0x0000000000133ea6
- (unsigned int)auHandleFromRef:(struct OpaqueRemoteAudioUnit *)arg1;	// IMP=0x0000000000133e9d
- (struct OpaqueRemoteAudioUnit *)auRefFromHandle:(unsigned int)arg1;	// IMP=0x0000000000133e95
- (struct OpaqueAUPB *)aupbRefFromHandle:(unsigned int)arg1;	// IMP=0x0000000000133e8d
- (void)newServerAdded:(id)arg1;	// IMP=0x0000000000133b37
- (void)handleRegistrarCrash;	// IMP=0x00000000001339a6
- (void)startRegistarConnection;	// IMP=0x0000000000133770
- (id)init;	// IMP=0x00000000001335fe
- (void)dealloc;	// IMP=0x00000000001335b5
- (id)autorelease;	// IMP=0x00000000001335ac
- (oneway void)release;	// IMP=0x00000000001335a6
- (unsigned long long)retainCount;	// IMP=0x0000000000133599
- (id)retain;	// IMP=0x0000000000133590
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000133587

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

