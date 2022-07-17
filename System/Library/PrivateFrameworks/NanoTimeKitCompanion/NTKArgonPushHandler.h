//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <NanoTimeKitCompanion/NTKArgonPushProviding-Protocol.h>

@class CKDatabase, NSString;
@protocol OS_dispatch_queue;

@interface NTKArgonPushHandler : NSObject <NTKArgonPushProviding>
{
    CKDatabase *_database;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_callbackQueue;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000016251c
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue; // @synthesize callbackQueue=_callbackQueue;
@property(readonly, nonatomic) CKDatabase *database; // @synthesize database=_database;
- (void)handleNotificationUserInfo:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000162203
- (void)registerToken:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000161afa
- (id)initWithCloudKitDatabase:(id)arg1;	// IMP=0x0000000000161a4d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
