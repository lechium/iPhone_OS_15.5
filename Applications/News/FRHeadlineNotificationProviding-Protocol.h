//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class NSDictionary, NSString;

@protocol FRHeadlineNotificationProviding <NSObject>
@property(readonly, nonatomic) NSString *headlineNotification_base64PublisherImage;
@property(readonly, nonatomic) NSString *headlineNotification_base64Image;
@property(readonly, nonatomic) NSString *headlineNotification_date;
@property(readonly, nonatomic) NSString *headlineNotification_publisher;
@property(readonly, nonatomic) NSString *headlineNotification_title;
@property(readonly, nonatomic) NSString *headlineNotification_identifier;
- (NSDictionary *)headlineNotification_dictionaryRepresentation;
@end

