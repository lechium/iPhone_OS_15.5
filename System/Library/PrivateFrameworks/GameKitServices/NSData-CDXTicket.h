//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSData.h>

@interface NSData (CDXTicket)
+ (id)dataWithSockAddr:(const struct sockaddr *)arg1;	// IMP=0x000000000006738c
- (_Bool)CDXTicketIsRelatedToTicket:(id)arg1;	// IMP=0x0000000000003c31
- (_Bool)CDXTicketWellFormed;	// IMP=0x0000000000003b91
- (id)CDXTicketTrimmed;	// IMP=0x0000000000003b4d
- (_Bool)CDXTicketIsStub;	// IMP=0x0000000000003b16
- (_Bool)CDXTicketIsHolePunch;	// IMP=0x0000000000003afc
- (_Bool)CDXTicketIsReflected;	// IMP=0x0000000000003ae5
- (unsigned long long)CDXTicketSID;	// IMP=0x0000000000003ac4
- (struct CDXTicket *)mutableCDXTicket;	// IMP=0x0000000000003ab2
- (const struct CDXTicket *)CDXTicket;	// IMP=0x0000000000003aa0
- (unsigned long long)CDXTicketRevision;	// IMP=0x0000000000003a82
- (id)CDXTicketExpirationDate;	// IMP=0x0000000000003a48
- (long long)CDXTicketPCNT;	// IMP=0x0000000000003a31
- (long long)CDXTicketPID;	// IMP=0x0000000000003a1a
- (struct sockaddr *)sockAddr;	// IMP=0x00000000000673c0
@end

