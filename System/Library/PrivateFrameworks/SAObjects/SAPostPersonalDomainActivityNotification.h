//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface SAPostPersonalDomainActivityNotification
{
}

- (_Bool)mutatingCommand;	// IMP=0x0000000000016f68
- (_Bool)requiresResponse;	// IMP=0x0000000000016f60
@property(copy, nonatomic) NSString *originatingDeviceName;
@property(copy, nonatomic) NSString *notificationBody;
@property(copy, nonatomic) NSString *homeId;
- (id)encodedClassName;	// IMP=0x0000000000016eed
- (id)groupIdentifier;	// IMP=0x0000000000016ed9

@end
