//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface FCEndpointConfiguration : NSObject
{
    NSString *_clientAPIBaseURLString;	// 8 = 0x8
    NSString *_notificationsBaseURLString;	// 16 = 0x10
    NSString *_staticAssetBaseURLString;	// 24 = 0x18
    NSString *_remoteDataSourceBaseURLString;	// 32 = 0x20
    NSString *_newsletterAPIBaseURLString;	// 40 = 0x28
    NSString *_appAnalyticsBaseURLString;	// 48 = 0x30
    NSString *_fairPlayBaseURLString;	// 56 = 0x38
    NSString *_searchAPIBaseURLString;	// 64 = 0x40
    NSString *_authTokenAPIBaseURLString;	// 72 = 0x48
    NSString *_sportsDataVisualizationAPIBaseURLString;	// 80 = 0x50
    NSString *_appAnalyticsNotificationReceiptBaseURLString;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x00000000002427fb
@property(readonly, nonatomic) NSString *appAnalyticsNotificationReceiptBaseURLString; // @synthesize appAnalyticsNotificationReceiptBaseURLString=_appAnalyticsNotificationReceiptBaseURLString;
@property(readonly, nonatomic) NSString *sportsDataVisualizationAPIBaseURLString; // @synthesize sportsDataVisualizationAPIBaseURLString=_sportsDataVisualizationAPIBaseURLString;
@property(readonly, nonatomic) NSString *authTokenAPIBaseURLString; // @synthesize authTokenAPIBaseURLString=_authTokenAPIBaseURLString;
@property(readonly, nonatomic) NSString *searchAPIBaseURLString; // @synthesize searchAPIBaseURLString=_searchAPIBaseURLString;
@property(readonly, nonatomic) NSString *fairPlayBaseURLString; // @synthesize fairPlayBaseURLString=_fairPlayBaseURLString;
@property(readonly, nonatomic) NSString *appAnalyticsBaseURLString; // @synthesize appAnalyticsBaseURLString=_appAnalyticsBaseURLString;
@property(readonly, nonatomic) NSString *newsletterAPIBaseURLString; // @synthesize newsletterAPIBaseURLString=_newsletterAPIBaseURLString;
@property(readonly, nonatomic) NSString *remoteDataSourceBaseURLString; // @synthesize remoteDataSourceBaseURLString=_remoteDataSourceBaseURLString;
@property(readonly, nonatomic) NSString *staticAssetBaseURLString; // @synthesize staticAssetBaseURLString=_staticAssetBaseURLString;
@property(readonly, nonatomic) NSString *notificationsBaseURLString; // @synthesize notificationsBaseURLString=_notificationsBaseURLString;
@property(readonly, nonatomic) NSString *clientAPIBaseURLString; // @synthesize clientAPIBaseURLString=_clientAPIBaseURLString;
- (unsigned long long)hash;	// IMP=0x0000000000242700
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000024259e
- (id)initWithClientAPIBaseURLString:(id)arg1 notificationsBaseURLString:(id)arg2 staticAssetBaseURLString:(id)arg3 remoteDataSourceBaseURLString:(id)arg4 newsletterAPIBaseURLString:(id)arg5 appAnalyticsBaseURLString:(id)arg6 fairPlayBaseURLString:(id)arg7 searchAPIBaseURLString:(id)arg8 appAnalyticsNotificationReceiptBaseURLString:(id)arg9 authTokenAPIBaseURLString:(id)arg10 sportsDataVisualizationAPIBaseURLString:(id)arg11;	// IMP=0x0000000000242379
- (id)initWithClientAPIBaseURLString:(id)arg1 notificationsBaseURLString:(id)arg2 staticAssetBaseURLString:(id)arg3 remoteDataSourceBaseURLString:(id)arg4 newsletterAPIBaseURLString:(id)arg5 appAnalyticsBaseURLString:(id)arg6 fairPlayBaseURLString:(id)arg7 searchAPIBaseURLString:(id)arg8 appAnalyticsNotificationReceiptBaseURLString:(id)arg9 authTokenAPIBaseURLString:(id)arg10;	// IMP=0x000000000024233b
- (id)initWithClientAPIBaseURLString:(id)arg1 notificationsBaseURLString:(id)arg2 staticAssetBaseURLString:(id)arg3 remoteDataSourceBaseURLString:(id)arg4 newsletterAPIBaseURLString:(id)arg5 appAnalyticsBaseURLString:(id)arg6 fairPlayBaseURLString:(id)arg7 searchAPIBaseURLString:(id)arg8 appAnalyticsNotificationReceiptBaseURLString:(id)arg9;	// IMP=0x00000000002422fd
- (id)initWithClientAPIBaseURLString:(id)arg1 notificationsBaseURLString:(id)arg2 staticAssetBaseURLString:(id)arg3 remoteDataSourceBaseURLString:(id)arg4 newsletterAPIBaseURLString:(id)arg5 appAnalyticsBaseURLString:(id)arg6 fairPlayBaseURLString:(id)arg7 searchAPIBaseURLString:(id)arg8;	// IMP=0x00000000002422c8
- (id)initWithClientAPIBaseURLString:(id)arg1 notificationsBaseURLString:(id)arg2 staticAssetBaseURLString:(id)arg3 remoteDataSourceBaseURLString:(id)arg4 newsletterAPIBaseURLString:(id)arg5 appAnalyticsBaseURLString:(id)arg6 fairPlayBaseURLString:(id)arg7;	// IMP=0x0000000000242293
- (id)initWithClientAPIBaseURLString:(id)arg1 notificationsBaseURLString:(id)arg2 staticAssetBaseURLString:(id)arg3 remoteDataSourceBaseURLString:(id)arg4 newsletterAPIBaseURLString:(id)arg5 appAnalyticsBaseURLString:(id)arg6;	// IMP=0x0000000000242267
- (id)initWithClientAPIBaseURLString:(id)arg1 notificationsBaseURLString:(id)arg2 staticAssetBaseURLString:(id)arg3 remoteDataSourceBaseURLString:(id)arg4 newsletterAPIBaseURLString:(id)arg5;	// IMP=0x000000000024224b
- (id)initWithClientAPIBaseURLString:(id)arg1 notificationsBaseURLString:(id)arg2 staticAssetBaseURLString:(id)arg3 remoteDataSourceBaseURLString:(id)arg4;	// IMP=0x0000000000242228
- (id)initWithClientAPIBaseURLString:(id)arg1 notificationsBaseURLString:(id)arg2;	// IMP=0x00000000002421ff

@end
