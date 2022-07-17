//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreDAV/CoreDAVTaskGroup.h>

#import <CalDAV/CoreDAVPropFindTaskDelegate-Protocol.h>

@class CoreDAVPropFindTask, ICSDocument, NSString, NSURL;
@protocol CoreDAVTaskGroupDelegate;

@interface CalDAVGetOfficeHoursTaskGroup : CoreDAVTaskGroup <CoreDAVPropFindTaskDelegate>
{
    ICSDocument *_calendarAvailability;	// 88 = 0x58
    NSURL *_inboxURL;	// 96 = 0x60
    CoreDAVPropFindTask *_fetchTask;	// 104 = 0x68
}

- (void).cxx_destruct;	// IMP=0x000000000000f9a2
@property(retain, nonatomic) CoreDAVPropFindTask *fetchTask; // @synthesize fetchTask=_fetchTask;
@property(retain, nonatomic) NSURL *inboxURL; // @synthesize inboxURL=_inboxURL;
@property(retain, nonatomic) ICSDocument *calendarAvailability; // @synthesize calendarAvailability=_calendarAvailability;
- (void)propFindTask:(id)arg1 parsedResponses:(id)arg2 error:(id)arg3;	// IMP=0x000000000000f78b
- (void)_finishWithError:(id)arg1;	// IMP=0x000000000000f777
- (void)startTaskGroup;	// IMP=0x000000000000f541
- (id)initWithAccountInfoProvider:(id)arg1 inboxURL:(id)arg2 taskManager:(id)arg3;	// IMP=0x000000000000f4a3

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) id <CoreDAVTaskGroupDelegate> delegate; // @dynamic delegate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
