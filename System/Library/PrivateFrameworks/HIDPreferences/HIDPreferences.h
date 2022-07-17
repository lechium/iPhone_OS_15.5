//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HIDPreferences/HIDPreferencesProtocol-Protocol.h>

@class NSString;
@protocol OS_dispatch_queue, OS_xpc_object;

@interface HIDPreferences : NSObject <HIDPreferencesProtocol>
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    int _option;	// 16 = 0x10
    NSObject<OS_xpc_object> *_connection;	// 24 = 0x18
}

+ (id)getReply:(id)arg1;	// IMP=0x0000000000003fa1
+ (void)destroyConnection:(id)arg1;	// IMP=0x000000000000398b
- (void).cxx_destruct;	// IMP=0x0000000000004f7f
- (void)setDomain:(id)arg1 value:(id)arg2 domain:(id)arg3;	// IMP=0x0000000000004d0c
- (void)copyDomain:(id)arg1 domain:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x00000000000049df
- (void)setMultiple:(id)arg1 keysToRemove:(id)arg2 user:(id)arg3 host:(id)arg4 domain:(id)arg5;	// IMP=0x00000000000046f8
- (void)copyMultiple:(id)arg1 user:(id)arg2 host:(id)arg3 domain:(id)arg4 reply:(CDUnknownBlockType)arg5;	// IMP=0x00000000000042c9
- (void)synchronize:(id)arg1 host:(id)arg2 domain:(id)arg3;	// IMP=0x00000000000040ca
- (void)copy:(id)arg1 user:(id)arg2 host:(id)arg3 domain:(id)arg4 reply:(CDUnknownBlockType)arg5;	// IMP=0x0000000000003c51
- (void)set:(id)arg1 value:(id)arg2 user:(id)arg3 host:(id)arg4 domain:(id)arg5;	// IMP=0x000000000000399f
- (id)setupConnection;	// IMP=0x00000000000037be
- (void)dealloc;	// IMP=0x000000000000375e
- (id)initWithOption:(int)arg1;	// IMP=0x000000000000361d
- (id)init;	// IMP=0x000000000000356a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
