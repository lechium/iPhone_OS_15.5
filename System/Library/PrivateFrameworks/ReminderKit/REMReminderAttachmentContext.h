//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, REMReminder;

@interface REMReminderAttachmentContext : NSObject
{
    REMReminder *_reminder;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000000ba440
@property(retain, nonatomic) REMReminder *reminder; // @synthesize reminder=_reminder;
@property(readonly, nonatomic) NSArray *attachments;
@property(readonly, nonatomic) NSArray *urlAttachments;
@property(readonly, nonatomic) NSArray *imageAttachments;
@property(readonly, nonatomic) NSArray *fileAttachments;
- (id)attachmentsOfClass:(Class)arg1;	// IMP=0x00000000000ba212
- (id)initWithReminder:(id)arg1;	// IMP=0x00000000000ba1a7

@end
