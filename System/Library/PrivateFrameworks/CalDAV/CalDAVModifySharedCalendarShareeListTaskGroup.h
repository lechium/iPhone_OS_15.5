//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreDAV/CoreDAVTaskGroup.h>

#import <CalDAV/CoreDAVPostTaskDelegate-Protocol.h>

@class NSMutableSet, NSSet, NSString, NSURL;
@protocol CoreDAVTaskGroupDelegate;

@interface CalDAVModifySharedCalendarShareeListTaskGroup : CoreDAVTaskGroup <CoreDAVPostTaskDelegate>
{
    NSMutableSet *_invalidSharees;	// 88 = 0x58
    NSSet *_shareesToRemove;	// 96 = 0x60
    NSSet *_shareesToSet;	// 104 = 0x68
    NSURL *_calendarURL;	// 112 = 0x70
    NSString *_summary;	// 120 = 0x78
}

- (void).cxx_destruct;	// IMP=0x00000000000195fd
@property(retain, nonatomic) NSString *summary; // @synthesize summary=_summary;
@property(retain, nonatomic) NSURL *calendarURL; // @synthesize calendarURL=_calendarURL;
@property(retain, nonatomic) NSSet *shareesToSet; // @synthesize shareesToSet=_shareesToSet;
@property(retain, nonatomic) NSSet *shareesToRemove; // @synthesize shareesToRemove=_shareesToRemove;
@property(retain, nonatomic) NSMutableSet *invalidSharees; // @synthesize invalidSharees=_invalidSharees;
- (void)task:(id)arg1 didFinishWithError:(id)arg2;	// IMP=0x0000000000018bea
- (id)generateModificationMessageBody;	// IMP=0x0000000000018449
- (void)startTaskGroup;	// IMP=0x0000000000018334
- (id)initWithShareesToSet:(id)arg1 shareesToRemove:(id)arg2 summary:(id)arg3 atCalendarURL:(id)arg4 accountInfoProvider:(id)arg5 taskManager:(id)arg6;	// IMP=0x000000000001822c
- (id)initWithAccountInfoProvider:(id)arg1 taskManager:(id)arg2;	// IMP=0x00000000000181cf

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) id <CoreDAVTaskGroupDelegate> delegate; // @dynamic delegate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

