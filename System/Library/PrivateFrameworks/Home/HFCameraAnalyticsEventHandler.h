//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface HFCameraAnalyticsEventHandler : NSObject
{
}

+ (id)decoratedPayloadFor:(id)arg1;	// IMP=0x00000000001bf8eb
+ (id)sendDonationEventWithCameraClipCount:(unsigned long long)arg1 processName:(id)arg2 error:(id)arg3;	// IMP=0x00000000001bf7bd
+ (id)sendCameraClipPlayerDidUpdateEventWithError:(id)arg1;	// IMP=0x00000000001bf67b
+ (id)sendAssociatedAccessoriesDidModifyListEventWithPayload:(id)arg1;	// IMP=0x00000000001bf63f
+ (id)sendAssociatedAccessoriesDidLaunchEventWithCount:(id)arg1;	// IMP=0x00000000001bf57d
+ (void)sendEventNamed:(id)arg1 payload:(id)arg2;	// IMP=0x00000000001bf42c

@end
