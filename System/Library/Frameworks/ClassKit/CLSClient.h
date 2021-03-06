//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ClassKit/CLSClientInterface-Protocol.h>

@class NSString;
@protocol CLSClientDelegate;

__attribute__((visibility("hidden")))
@interface CLSClient : NSObject <CLSClientInterface>
{
    id <CLSClientDelegate> _delagate;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000006ed8d
@property(nonatomic) __weak id <CLSClientDelegate> delagate; // @synthesize delagate=_delagate;
- (oneway void)clientRemote_databaseRecreated;	// IMP=0x000000000006ece2

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

