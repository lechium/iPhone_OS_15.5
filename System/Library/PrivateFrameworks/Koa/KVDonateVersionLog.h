//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSURL;
@protocol OS_dispatch_queue;

@interface KVDonateVersionLog : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    NSMutableDictionary *_log;	// 16 = 0x10
    NSURL *_logFileURL;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000001616d
- (unsigned long long)incrementVersionForItemType:(long long)arg1 originAppId:(id)arg2 deviceId:(id)arg3 userId:(id)arg4;	// IMP=0x0000000000016031
- (id)initWithQueue:(id)arg1 directoryPath:(id)arg2;	// IMP=0x0000000000015b96
- (id)init;	// IMP=0x0000000000015b4e

@end

