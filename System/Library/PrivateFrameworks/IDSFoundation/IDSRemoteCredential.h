//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol OS_xpc_object;

@interface IDSRemoteCredential : NSObject
{
    NSObject<OS_xpc_object> *_connection;	// 8 = 0x8
    int _retries;	// 16 = 0x10
    _Bool _wantsRetries;	// 20 = 0x14
}

- (void).cxx_destruct;	// IMP=0x00000000001382a5
@property(nonatomic) _Bool wantsRetries; // @synthesize wantsRetries=_wantsRetries;
- (void)_sendMessage:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000000001377ce
- (void)sendAccountSyncMessage:(id)arg1 messageID:(id)arg2 queueOneIdentifier:(id)arg3 allowCloudFallback:(_Bool)arg4 completionBlock:(CDUnknownBlockType)arg5;	// IMP=0x0000000000137510
- (void)requestIDStatusForURIs:(id)arg1 service:(id)arg2 lightQuery:(_Bool)arg3 allowQuery:(_Bool)arg4 completionBlock:(CDUnknownBlockType)arg5;	// IMP=0x000000000013750a
- (void)sendIDSLocalDeviceInfoRequestWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000013730c
- (void)fetchRemoteAccountsOfServiceTypes:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000000136f57
- (void)fetchRemoteiMessageAndFaceTimeAccountInfoWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000136bcd
- (void)dealloc;	// IMP=0x0000000000136b8f
- (_Bool)_connect;	// IMP=0x000000000013692d
- (_Bool)_disconnect;	// IMP=0x000000000013682b
- (void)_disconnected;	// IMP=0x000000000013654b

@end
