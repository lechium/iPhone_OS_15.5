//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class NSArray, NSDate;

@protocol NNSyncableResult <NSObject>
@property(readonly, nonatomic) unsigned long long sync_headlineCount;
@property(readonly, nonatomic) NSDate *sync_expirationDate;
@property(readonly, nonatomic) NSArray *sync_sections;
@end

