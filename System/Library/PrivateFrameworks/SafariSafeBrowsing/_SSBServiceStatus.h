//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface _SSBServiceStatus : NSObject
{
    struct ServiceStatus _serviceStatus;	// 8 = 0x8
}

- (id).cxx_construct;	// IMP=0x0000000000002590
- (void).cxx_destruct;	// IMP=0x0000000000002547
@property(readonly, nonatomic) unsigned long long databaseUpdaterState;
@property(readonly, nonatomic) NSArray *databaseUpdatersStatuses;
- (id)bundleIdentifierForConnectionAtIndex:(unsigned long long)arg1;	// IMP=0x000000000000233d
- (int)processIdentifierForConnectionAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000002268
@property(readonly, nonatomic) unsigned long long connectionCount;
@property(readonly, copy, nonatomic) NSArray *activeTransactions;
@property(readonly) int processIdentifier;
@property(readonly, copy, nonatomic) NSString *name;
- (id)initWithServiceStatus:(struct ServiceStatus)arg1;	// IMP=0x0000000000002046

@end
