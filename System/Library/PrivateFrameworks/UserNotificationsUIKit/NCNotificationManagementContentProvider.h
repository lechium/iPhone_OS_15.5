//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UserNotificationsUIKit/NCAuxiliaryOptionsProviding-Protocol.h>

@class NCNotificationRequest, NSString;
@protocol NCNotificationManagementContentProviderDelegate;

@interface NCNotificationManagementContentProvider : NSObject <NCAuxiliaryOptionsProviding>
{
    NCNotificationRequest *_notificationRequest;	// 8 = 0x8
    id <NCNotificationManagementContentProviderDelegate> _managementDelegate;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000073957
@property(nonatomic) __weak id <NCNotificationManagementContentProviderDelegate> managementDelegate; // @synthesize managementDelegate=_managementDelegate;
@property(retain, nonatomic) NCNotificationRequest *notificationRequest; // @synthesize notificationRequest=_notificationRequest;
- (void)handleManageAction:(id)arg1;	// IMP=0x000000000007387f
- (void)configureOptionButtons:(id)arg1;	// IMP=0x0000000000073879
- (id)initWithNotificationRequest:(id)arg1 managementDelegate:(id)arg2;	// IMP=0x00000000000737e0

// Remaining properties
@property(nonatomic) _Bool auxiliaryOptionsVisible;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) unsigned long long numberOfOptionButtons;
@property(readonly, copy, nonatomic) NSString *optionsSummaryText;
@property(readonly, copy, nonatomic) NSString *optionsSummaryTitle;
@property(readonly) Class superclass;

@end

