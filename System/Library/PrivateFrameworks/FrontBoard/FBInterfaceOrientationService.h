//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class FBInterfaceOrientationServiceServer;

@interface FBInterfaceOrientationService : NSObject
{
    long long _interfaceOrientation;	// 8 = 0x8
    FBInterfaceOrientationServiceServer *_server;	// 16 = 0x10
}

+ (id)sharedInstance;	// IMP=0x000000000003a842
- (void).cxx_destruct;	// IMP=0x000000000003a928
@property(readonly, nonatomic) long long interfaceOrientation; // @synthesize interfaceOrientation=_interfaceOrientation;
- (void)setInterfaceOrientation:(long long)arg1 animationSettings:(id)arg2 direction:(long long)arg3;	// IMP=0x000000000003a904
- (void)setInterfaceOrientation:(long long)arg1;	// IMP=0x000000000003a8ed
- (id)init;	// IMP=0x000000000003a897

@end

