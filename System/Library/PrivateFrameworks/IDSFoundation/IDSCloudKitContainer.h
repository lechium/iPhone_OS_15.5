//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IDSCKContainer, IDSCloudKitGroupServer, IDSCloudKitKeyElectionStore, IDSCloudKitKeyValueStore, IDSCloudKitTransportLog, NSString;
@protocol OS_dispatch_queue;

@interface IDSCloudKitContainer : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    IDSCKContainer *_container;	// 16 = 0x10
    IDSCloudKitKeyValueStore *_keyValueStore;	// 24 = 0x18
    IDSCloudKitGroupServer *_publicGroupServer;	// 32 = 0x20
    IDSCloudKitGroupServer *_privateGroupServer;	// 40 = 0x28
    IDSCloudKitTransportLog *_transportLog;	// 48 = 0x30
    IDSCloudKitKeyElectionStore *_keyElectionStore;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00000000000046b3
@property(readonly, nonatomic) IDSCloudKitKeyElectionStore *keyElectionStore; // @synthesize keyElectionStore=_keyElectionStore;
@property(readonly, nonatomic) IDSCloudKitTransportLog *transportLog; // @synthesize transportLog=_transportLog;
@property(readonly, nonatomic) IDSCloudKitGroupServer *privateGroupServer; // @synthesize privateGroupServer=_privateGroupServer;
@property(readonly, nonatomic) IDSCloudKitGroupServer *publicGroupServer; // @synthesize publicGroupServer=_publicGroupServer;
@property(readonly, nonatomic) IDSCloudKitKeyValueStore *keyValueStore; // @synthesize keyValueStore=_keyValueStore;
@property(retain, nonatomic) IDSCKContainer *container; // @synthesize container=_container;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(readonly, nonatomic) NSString *containerIdentifier;
- (id)initWithIdentifier:(id)arg1 queue:(id)arg2;	// IMP=0x00000000000042eb

@end

