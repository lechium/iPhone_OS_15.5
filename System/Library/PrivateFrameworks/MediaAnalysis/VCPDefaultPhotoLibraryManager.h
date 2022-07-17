//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MediaAnalysis/PHPhotoLibraryAvailabilityObserver-Protocol.h>

@class NSString, NSURL, PHPhotoLibrary;
@protocol OS_dispatch_queue;

@interface VCPDefaultPhotoLibraryManager : NSObject <PHPhotoLibraryAvailabilityObserver>
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    NSURL *_defaultPhotoLibraryURL;	// 16 = 0x10
    PHPhotoLibrary *_defaultPhotoLibrary;	// 24 = 0x18
}

+ (id)sharedManager;	// IMP=0x000000000018228e
- (void).cxx_destruct;	// IMP=0x00000000001829ad
- (void)photoLibraryDidBecomeUnavailable:(id)arg1;	// IMP=0x000000000018283b
- (void)closedefaultPhotoLibrary;	// IMP=0x000000000018278e
- (id)defaultPhotoLibrary;	// IMP=0x0000000000182327
- (id)init;	// IMP=0x0000000000182236

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
