//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <WeatherFoundation/NSCopying-Protocol.h>
#import <WeatherFoundation/NSSecureCoding-Protocol.h>

@class NSMutableArray, NSString, NSURL, UIImage, WFAirQualityProviderStation;
@protocol OS_dispatch_queue;

@interface WFAirQualityProviderAttribution : NSObject <NSSecureCoding, NSCopying>
{
    _Bool _logoRequestInFlight;	// 8 = 0x8
    struct os_unfair_lock_s _dataSynchronizationLock;	// 12 = 0xc
    NSString *_name;	// 16 = 0x10
    long long _dataOrigination;	// 24 = 0x18
    UIImage *_cachedLogoImage;	// 32 = 0x20
    WFAirQualityProviderStation *_station;	// 40 = 0x28
    NSObject<OS_dispatch_queue> *_logoImageLoadingQueue;	// 48 = 0x30
    NSMutableArray *_outstandingRequestsCompletionBlocks;	// 56 = 0x38
    NSURL *_logoURL;	// 64 = 0x40
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000473db
+ (id)defaultProviderAttribution;	// IMP=0x000000000004657b
- (void).cxx_destruct;	// IMP=0x000000000004773b
@property(copy, nonatomic) NSURL *logoURL; // @synthesize logoURL=_logoURL;
@property(nonatomic) struct os_unfair_lock_s dataSynchronizationLock; // @synthesize dataSynchronizationLock=_dataSynchronizationLock;
@property(nonatomic) _Bool logoRequestInFlight; // @synthesize logoRequestInFlight=_logoRequestInFlight;
@property(retain, nonatomic) NSMutableArray *outstandingRequestsCompletionBlocks; // @synthesize outstandingRequestsCompletionBlocks=_outstandingRequestsCompletionBlocks;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *logoImageLoadingQueue; // @synthesize logoImageLoadingQueue=_logoImageLoadingQueue;
@property(retain, nonatomic) WFAirQualityProviderStation *station; // @synthesize station=_station;
@property(copy, nonatomic) UIImage *cachedLogoImage; // @synthesize cachedLogoImage=_cachedLogoImage;
@property(nonatomic) long long dataOrigination; // @synthesize dataOrigination=_dataOrigination;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (id)description;	// IMP=0x00000000000475b8
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000474b5
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000473e3
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000472f4
- (void)p_invokeAndClearCompletionBlocksWithImage:(id)arg1 error:(id)arg2;	// IMP=0x00000000000470d1
- (void)p_queueCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000004701e
- (void)p_clearRequestInFlight;	// IMP=0x0000000000046fe5
- (void)p_setRequestInFlight;	// IMP=0x0000000000046fa9
- (_Bool)p_checkRequestInFlight;	// IMP=0x0000000000046f6d
- (id)p_imageWithData:(id)arg1;	// IMP=0x0000000000046e7f
- (void)p_loadRemoteLogoImageForProvider:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000046a74
- (void)loadLogoImageWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000046917
- (void)_initInternal;	// IMP=0x000000000004688f
- (id)initWithName:(id)arg1 logoURL:(id)arg2 dataOrigination:(long long)arg3 station:(id)arg4;	// IMP=0x00000000000467b9
- (id)initWithName:(id)arg1 logoURL:(id)arg2 dataOrigination:(long long)arg3;	// IMP=0x00000000000467a4
- (id)initWithName:(id)arg1 logoImage:(id)arg2 dataOrigination:(long long)arg3 station:(id)arg4;	// IMP=0x00000000000466ce

@end

