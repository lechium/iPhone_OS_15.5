//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AvatarPersistence/NSObject-Protocol.h>

@class NSArray;
@protocol AVTStoreBackend;

@protocol AVTStoreBackendDelegate <NSObject>

@optional
- (void)backend:(id <AVTStoreBackend>)arg1 didChangeRecordsWithIdentifiers:(NSArray *)arg2;
@end

