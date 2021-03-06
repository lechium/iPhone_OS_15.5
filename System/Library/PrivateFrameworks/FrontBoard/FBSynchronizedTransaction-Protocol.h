//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <FrontBoard/NSObject-Protocol.h>

@protocol FBSynchronizedTransactionDelegate;

@protocol FBSynchronizedTransaction <NSObject>
@property(nonatomic) __weak id <FBSynchronizedTransactionDelegate> synchronizationDelegate;
- (void)performSynchronizedCommit;
- (_Bool)isReadyForSynchronizedCommit;
@end

