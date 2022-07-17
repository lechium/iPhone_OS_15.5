//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HealthDaemon/NSObject-Protocol.h>

@class HDIDSInvitation, HDIDSInvitationManager;

@protocol HDIDSInvitationManagerDelegate <NSObject>
- (void)invitationManager:(HDIDSInvitationManager *)arg1 didDeclineInvitation:(HDIDSInvitation *)arg2;
- (void)invitationManager:(HDIDSInvitationManager *)arg1 didAcceptInvitation:(HDIDSInvitation *)arg2;
- (void)invitationManager:(HDIDSInvitationManager *)arg1 didRescindInvitation:(HDIDSInvitation *)arg2;
- (void)invitationManager:(HDIDSInvitationManager *)arg1 didReceiveInvitation:(HDIDSInvitation *)arg2;
@end
