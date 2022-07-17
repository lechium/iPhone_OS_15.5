//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <KeychainCircle/KCJoiningRequestCircleDelegate-Protocol.h>

@class NSString;

@interface KCJoiningRequestAccountCircleDelegate : NSObject <KCJoiningRequestCircleDelegate>
{
}

+ (id)delegate;	// IMP=0x000000000001101e
- (_Bool)processCircleJoinData:(id)arg1 version:(int)arg2 error:(id *)arg3;	// IMP=0x0000000000010fd3
- (struct __OpaqueSOSPeerInfo *)copyPeerInfoError:(id *)arg1;	// IMP=0x0000000000010f86

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
