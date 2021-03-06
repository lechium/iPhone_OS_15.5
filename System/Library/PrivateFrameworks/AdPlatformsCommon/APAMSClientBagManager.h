//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AdPlatformsCommon/AMSBagConsumer-Protocol.h>

@class NSString;

@interface APAMSClientBagManager : NSObject <AMSBagConsumer>
{
}

+ (void)isSubsequentAdsFetchDisabled:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000012814
+ (_Bool)isSubsequentAdsFetchDisabled;	// IMP=0x0000000000012693
+ (id)adprivacydBag;	// IMP=0x0000000000012601
+ (id)bagSubProfileVersion;	// IMP=0x00000000000125b1
+ (id)bagSubProfile;	// IMP=0x0000000000012561

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

