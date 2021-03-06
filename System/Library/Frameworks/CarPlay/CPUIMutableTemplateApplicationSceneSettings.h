//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIMutableApplicationSceneSettings.h>

#import <CarPlay/CPUITemplateApplicationSceneSettings-Protocol.h>

@class NSObject, NSString;
@protocol OS_xpc_object;

@interface CPUIMutableTemplateApplicationSceneSettings : UIMutableApplicationSceneSettings <CPUITemplateApplicationSceneSettings>
{
}

- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000002a2f5
@property(nonatomic) long long mapStyle;
@property(copy, nonatomic) NSObject<OS_xpc_object> *endpoint;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

