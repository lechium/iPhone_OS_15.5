//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CarPlayUIServices/CRSUIDashboardWidgetSceneSettings-Protocol.h>

@class NSObject, NSString;
@protocol OS_xpc_object;

@protocol CRSUITemplateDashboardWidgetSceneSettings <CRSUIDashboardWidgetSceneSettings>
@property(readonly, copy, nonatomic) NSString *proxiedApplicationBundleIdentifier;
@property(readonly, copy, nonatomic) NSObject<OS_xpc_object> *templateEndpoint;
@end
