//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AppleAccountUI/PSCloudStorageOffersManagerDelegate-Protocol.h>

@class NSString, PSCloudStorageOffersManager;

@interface AAUICloudStorageOffersManager : NSObject <PSCloudStorageOffersManagerDelegate>
{
    PSCloudStorageOffersManager *_cloudStorageOffersManager;	// 8 = 0x8
    CDUnknownBlockType _completionHandler;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000022078
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(retain, nonatomic) PSCloudStorageOffersManager *cloudStorageOffersManager; // @synthesize cloudStorageOffersManager=_cloudStorageOffersManager;
- (void)manager:(id)arg1 didCompleteWithError:(id)arg2;	// IMP=0x0000000000021ffa
- (void)managerDidCancel:(id)arg1;	// IMP=0x0000000000021fae
- (void)manager:(id)arg1 loadDidFailWithError:(id)arg2;	// IMP=0x0000000000021f64
- (void)presentCloudStorageOffersPageFromNavigationController:(id)arg1 requiredStorageThreshold:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000021e36

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

