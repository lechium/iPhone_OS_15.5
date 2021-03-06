//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreLocation/CLRegion.h>

#import <HomeKitDaemon/HMFObject-Protocol.h>

@class NSArray, NSString;

@interface CLRegion (HomeLocation) <HMFObject>
+ (id)shortDescription;	// IMP=0x000000000047fff2
@property(readonly, copy) NSString *hm_description;
@property(readonly, copy) NSString *privateDescription;
@property(readonly, copy) NSString *shortDescription;
@property(readonly, copy) NSString *description;

// Remaining properties
@property(readonly, copy, nonatomic) NSArray *attributeDescriptions;
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly, copy) NSString *propertyDescription;
@property(readonly) Class superclass;
@end

