//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/HMFLogging-Protocol.h>

@class NSMutableArray, NSString;
@protocol HMDCameraRecordingSessionVariantFragmentManagerDelegate;

@interface HMDCameraRecordingSessionVariantFragmentManager : HMFObject <HMFLogging>
{
    id <HMDCameraRecordingSessionVariantFragmentManagerDelegate> _delegate;	// 8 = 0x8
    NSMutableArray *_fullFragmentTimeRanges;	// 16 = 0x10
    NSMutableArray *_variantFragments;	// 24 = 0x18
    NSString *_logIdentifier;	// 32 = 0x20
}

+ (id)logCategory;	// IMP=0x0000000000741e8c
- (void).cxx_destruct;	// IMP=0x00000000007418bd
@property(readonly, copy) NSString *logIdentifier; // @synthesize logIdentifier=_logIdentifier;
@property(readonly) NSMutableArray *variantFragments; // @synthesize variantFragments=_variantFragments;
@property(readonly) NSMutableArray *fullFragmentTimeRanges; // @synthesize fullFragmentTimeRanges=_fullFragmentTimeRanges;
@property __weak id <HMDCameraRecordingSessionVariantFragmentManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_drainVariantFragmentQueue;	// IMP=0x0000000000741309
- (void)handleVariantFragment:(id)arg1;	// IMP=0x0000000000740fdc
- (void)handleFullFragment:(id)arg1;	// IMP=0x0000000000740ef0
@property(readonly) _Bool expectsVariantFragment;
- (id)initWithLogIdentifier:(id)arg1;	// IMP=0x0000000000740dcf

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

